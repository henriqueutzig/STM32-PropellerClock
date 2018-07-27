#include "stm32f4xx.h"
#include <string.h>

void manda_serial(char a) {
	while (!((USART6->SR) & 0x80)) {
	}; //aguarda buffer liberar
	USART6->DR = a;
}

void serial_texto(char texto[]) {
	int aux;
	for (aux = 0; aux < strlen(texto); aux++) {
		manda_serial(texto[aux]);
	}
}
