/*
 * led.c
 *
 * Created: 10/2/2016 1:52:30 PM
 *  Author: nicol
 */ 
#include "led.h"

void initLed() {
	DDRA |= (1 << PORTA0); 
}

void ledOn() {
	PORTA |= (1 << PORTA0); 
}

void ledOff() {
	PORTA &= ~(1 << PORTA0);
}