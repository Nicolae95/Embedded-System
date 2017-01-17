/*
 * main.c
 *
 * Created: 11/20/2016 14:22:45
 *  Author: nicol
 */ 

#include "led.h"
#include "uart_studio.h"
#include "button.h"
#include <avr/delay.h>


int main() {
	
	init();
	initLed();
	
	while(1) {
		_delay_ms(100);
		if(isPressed()) {
			ledOn();
		} else {
			ledOff();
		}			
	}
	
	
	return 0;
}