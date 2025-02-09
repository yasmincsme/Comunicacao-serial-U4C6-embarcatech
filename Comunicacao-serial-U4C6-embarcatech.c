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

#define I2C_PORT i2c1
#define I2C_SDA 14
#define I2C_SCL 15
#define endereco 0x3C

#define LED_RED 1
#define LED_GREEN 1
#define LED_BLUE 1

ssd1306_t ssd; 
bool cor = true;
char character;
bool led_buffer[NUM_PIXELS] = {0};

void SSD1306_task() {
	while (true) {
    	// Atualiza o conteúdo do display com animações
    	ssd1306_fill(&ssd, !cor); // Limpa o display
    	ssd1306_rect(&ssd, 3, 3, 122, 58, cor, !cor); // Desenha um retângulo
    	ssd1306_draw_string(&ssd, "Caractere", 26, 10); // Desenha uma string
    	ssd1306_draw_string(&ssd, "Escolhido", 26, 25); // Desenha uma string
		ssd1306_draw_string(&ssd, &character, 60, 40); // Desenha uma string
    	ssd1306_send_data(&ssd); // Atualiza o display

    	sleep_ms(1000);
  	}
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

int main() {

	PIO pio = pio0;
    int sm = 0;

	stdio_init_all();
	I2C_init();
	SSD1306_init(&ssd);
	multicore_launch_core1(SSD1306_task);

	uint offset = pio_add_program(pio, &ws2812_program);
    ws2812_program_init(pio, sm, offset, WS2812_PIN, 800000, IS_RGBW);
	
  	while (true) {

		scanf(" %c", &character);

		if(isdigit(character)) {
			uint8_t number = character - '0';
			set_num_matrix(number, led_buffer);
			set_one_led(LED_RED, LED_GREEN, LED_BLUE, led_buffer);

		}

    	sleep_ms(1000);
  	}
}