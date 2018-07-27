/**
 ******************************************************************************
 * @file    main.c
 * @author  Antonio Lima & Henrique Utzig
 * @version V1.0
 * @date    11-November-2016
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32f4xx.h"
#include "stm32f4xx_nucleo.h"
#include "config.h"
#include "serial.h"
#include "caracter.h"

//#define GUI_RAY_RESOLUTION 4
//! this varible defines de amount of sectors that will be used
float GUI_RAY_RESOLUTION = 180;
//!this is the vector that recives the value in hexadecimal of which pins will be turn on
int mat_show[180] = { 0 };

//! Increases each time TIM10 ends the cycle
float counter_us;

//! Is the time the clock takes to do one revolution measured in microseconds.
int time_us;

//! Tells the propeller angle
float angle = 0;

int square = 0;

int indice_cover = 0;

char flag_troca;

//! Manipulador interupção TIM10
void TIM1_UP_TIM10_IRQHandler(void) {
	TIM10->SR &= (~TIM_SR_UIF);
	counter_us++;
	if (!(GPIOB->IDR & 0b1) && flag_troca == 0) {
		angle = counter_us / GUI_RAY_RESOLUTION;
		flag_troca = 1;
		time_us = counter_us;
		counter_us = 0;
		square = 0;
	}
}

void USART6_IRQHandler(void) { //Usar quando receber um dado
	int recebido;
	if (USART6->SR & 0x20) {
		recebido = USART6->DR;
		USART6->SR &= ~(0x20);
		indice_cover = convert_caracter(recebido, indice_cover, mat_show);
		GPIOA->ODR ^= 0b100000;
		if (indice_cover >= 180)
			indice_cover = 0;
	}
}

int main(void) {
	RCC->AHB1ENR = 0x87;

	GPIOA->MODER = 0xA8000000;	//Habilita o clock dos GPIOs
	GPIOB->MODER = 0b0;			//Define todos os pinos como entrada
	GPIOC->MODER = 0x55555555;	//Define todos os pinos como sa�da

	GPIOB->PUPDR = 0b10;		//Define pull-down para o PB0

	config_int_tim10();
	config_int_tim11();
	config_serial();

	while (1) {
		if ((GPIOB->IDR & 0b1) && flag_troca == 1)
			flag_troca = 0;

		if ((counter_us > angle * (square + 1))
				&& square <= GUI_RAY_RESOLUTION) {
			square++;
			//if(square>=GUI_RAY_RESOLUTION)square=0;
		}
		if ((counter_us >= (angle * square))
				&& (counter_us < (angle * (square + 1))))
			GPIOC->ODR = mat_show[square];
	}
}

