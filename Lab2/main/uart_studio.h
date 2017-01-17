/*
 * uart_studio.h
 *
 * Created: 10/2/2016 11:08:39 AM
 *  Author: schid
 */ 


#ifndef UART_STUDIO_H_
#define UART_STUDIO_H_

#include <stdio.h>
#include <stdint.h>
#include <stdio.h>
#include <avr/io.h>
	
	void uart_stdio_Init(void);
	int uart_stdio_PutChar(char c, FILE *stream);



#endif /* UART_STUDIO_H_ */