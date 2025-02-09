#include <stdlib.h>
#include <stdio.h>
#include <pico/multicore.h>
#include <ctype.h>
#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "inc/ssd1306.h"
#include "inc/font.h"
#include "matrix.h"
#include "ws2812.pio.h"
#include "hardware/clocks.h"
#include "hardware/clocks.h"

#define I2C_PORT i2c1
#define I2C_SDA 14
#define I2C_SCL 15
#define endereco 0x3C

#define LED_RED 100
#define LED_GREEN 100
#define LED_BLUE 100

#define RGB_RED 13
#define RGB_GREEN 11
#define RGB_BLUE 12

#define BUTTON_A 5
#define BUTTON_B 6

#define DEBOUNCE_TIME_US 200000  // 200ms
#define TIME 100

static char character;
bool led_buffer[NUM_PIXELS] = {0};

static volatile uint32_t last_press_A = 0;
static volatile uint32_t last_press_B = 0;

static volatile uint8_t blue = 0;
static volatile uint8_t green = 0;

void read_task() {
	while (true) {

		scanf(" %c", &character);

    	sleep_ms(500);
  	}
}

void ledrgb_init() {
	gpio_init(RGB_RED);
    gpio_set_dir(RGB_RED, GPIO_OUT);
    gpio_put(RGB_RED, 0);

	gpio_init(RGB_GREEN);
    gpio_set_dir(RGB_GREEN, GPIO_OUT);
    gpio_put(RGB_GREEN, 0);

	gpio_init(RGB_BLUE);
    gpio_set_dir(RGB_BLUE, GPIO_OUT);
    gpio_put(RGB_BLUE, 0);

    gpio_init(BUTTON_A);
    gpio_set_dir(BUTTON_A, GPIO_IN);
    gpio_pull_up(BUTTON_A);

    gpio_init(BUTTON_B);
    gpio_set_dir(BUTTON_B, GPIO_IN);
    gpio_pull_up(BUTTON_B);
}

void I2C_init() {
	i2c_init(I2C_PORT, 400 * 1000);

	gpio_set_function(I2C_SDA, GPIO_FUNC_I2C);
	gpio_set_function(I2C_SCL, GPIO_FUNC_I2C); 

	gpio_pull_up(I2C_SDA);
	gpio_pull_up(I2C_SCL);
}

void SSD1306_init(ssd1306_t* ssd) {
	ssd1306_init(ssd, WIDTH, HEIGHT, false, endereco, I2C_PORT);
	ssd1306_config(ssd); // Configura o display
  	ssd1306_send_data(ssd); // Envia os dados para o display
	ssd1306_fill(ssd, false);
  	ssd1306_send_data(ssd);
}

static void gpio_irq_handler(uint gpio, uint32_t events) {
    uint32_t current_time = to_us_since_boot(get_absolute_time());

    if (gpio == BUTTON_A && (events & GPIO_IRQ_EDGE_FALL)) {
        if (current_time - last_press_A > DEBOUNCE_TIME_US) {  
            last_press_A = current_time;
			if(green == 0) {
				green = 1;
				gpio_put(RGB_GREEN, 1);
			} else {
				green = 0;
				gpio_put(RGB_GREEN, 0);
			}
        }
    } 
    else if (gpio == BUTTON_B && (events & GPIO_IRQ_EDGE_FALL)) {
        if (current_time - last_press_B > DEBOUNCE_TIME_US) { 
            last_press_B = current_time;
			if(blue == 0) {
				blue = 1;
				gpio_put(RGB_BLUE, 1);
			} else {
				blue = 0;
				gpio_put(RGB_BLUE, 0);
			}
        }
    }
}

int main() {

	PIO pio = pio0;
    int sm = 0;
	ssd1306_t ssd; 
	bool cor = true;

	stdio_init_all();
	ledrgb_init();
	I2C_init();
	SSD1306_init(&ssd);

	multicore_launch_core1(read_task);

	uint offset = pio_add_program(pio, &ws2812_program);
    ws2812_program_init(pio, sm, offset, WS2812_PIN, 800000, IS_RGBW);

	gpio_set_irq_enabled_with_callback(BUTTON_A, GPIO_IRQ_EDGE_FALL, true, &gpio_irq_handler);
    gpio_set_irq_enabled_with_callback(BUTTON_B, GPIO_IRQ_EDGE_FALL, true, &gpio_irq_handler);

  	while (true) {

		//Limpa o display
    	ssd1306_fill(&ssd, !cor);

		//Desenha o caractere escolhido pelo usuário
    	ssd1306_draw_string(&ssd, "Caractere", 12, 10); 
    	ssd1306_draw_string(&ssd, "Escolhido", 12, 20); 
		ssd1306_draw_string(&ssd, &character, 99, 15); 
		ssd1306_line(&ssd, 98, 25, 109, 25, 1);
		
		//Desenha o status dos leds azul e verde
		if(green == 0) {
			ssd1306_draw_string(&ssd, "Led verde  0 ", 12, 35); 
			printf("Status do led verde: desligado\n");
		} else {
			ssd1306_draw_string(&ssd, "Led verde  1 ", 12, 35); 
			printf("Status do led verde: ligado\n");
		}

		if(blue == 0) {
			ssd1306_draw_string(&ssd, "Led azul   0 ", 12, 45); 
			printf("Status do led azul: desligado\n");
		} else {
			ssd1306_draw_string(&ssd, "Led azul   1 ", 12, 45); 
			printf("Status do led azul: ligado\n");
		}

		//Desenha a borda do display
		ssd1306_rect(&ssd, 3, 3, 122, 58, cor, !cor); 

		//Atualização do display
    	ssd1306_send_data(&ssd);

		//Desenho do caractere na matriz de leds
		set_character_matrix(character, led_buffer);
		set_one_led(LED_RED, LED_GREEN, LED_BLUE, led_buffer);
		
    	sleep_ms(1000);
  	}
}