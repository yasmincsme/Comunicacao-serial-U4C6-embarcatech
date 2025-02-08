#include <stdlib.h>
#include <stdio.h>
#include "pico/stdlib.h"
#include <pico/multicore.h>
#include "hardware/i2c.h"
#include "inc/ssd1306.h"
#include "inc/font.h"

#define I2C_PORT i2c1
#define I2C_SDA 14
#define I2C_SCL 15
#define endereco 0x3C

ssd1306_t ssd; 
bool cor = true;
char character;

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

	stdio_init_all();
	I2C_init();
	SSD1306_init(&ssd);
	multicore_launch_core1(SSD1306_task);
	
  	while (true) {

		scanf(" %c", &character);

    	sleep_ms(1000);
  	}
}