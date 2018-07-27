#include "stm32f4xx.h"
#include <string.h>

#define BAUDGEN_INT	8 		//! Divisor baudrate - parte inteira
#define BAUDGEN_FRA	11 		//! Divisor baudrate - parte fracionaria

void config_int_tim10(void) {

	//Enable TIM10 and sets it's frequency to ?? MHz
	RCC->APB2ENR |= RCC_APB2ENR_TIM10EN;
	TIM10->CR1 = TIM_CR1_ARPE | TIM_CR1_CEN;
	TIM10->PSC = 499;
	TIM10->ARR = 2;
	TIM10->DIER |= TIM_DIER_UIE;            // habilita interrupção por update

	// Habilita interrupção no controlador
	NVIC_EnableIRQ(TIM1_UP_TIM10_IRQn);		//
	NVIC_SetPriority(TIM1_UP_TIM10_IRQn, 3);
}

void config_int_tim11(void) {
	//Enable TIM11 and sets it's frequency to 1 MHz
	RCC->APB2ENR |= RCC_APB2ENR_TIM11EN;
	TIM11->CR1 = 0x81;
	TIM11->PSC = 999;
	TIM11->PSC = 79;
}

void config_serial(void) {
	RCC->APB2ENR |= RCC_APB2ENR_USART6EN;
	USART6->CR1 = USART_CR1_UE | USART_CR1_TE | USART_CR1_RE | USART_CR1_RXNEIE;
	USART6->CR2 = 0; // Um stop bit
	USART6->CR3 = 0;

	USART6->BRR = (BAUDGEN_INT << 4) | BAUDGEN_FRA;
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // Garantindo que clock do GPIOA esta habilitado

	GPIOA->MODER &= ~(GPIO_MODER_MODER11 | GPIO_MODER_MODER12); // Configurando Pino A11 e A12 como funcao alternativa
	GPIOA->MODER |= (GPIO_MODER_MODER11_1 | GPIO_MODER_MODER12_1);

	GPIOA->AFR[1] |= 0x88000;

	// Talvez essa parte habilite uma interrup��o da USART6.
	NVIC_EnableIRQ(USART6_IRQn);
	NVIC_SetPriority(USART6_IRQn, 3);
}

