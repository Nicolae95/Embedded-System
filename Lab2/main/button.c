/*
 * button.c
 *
 * Created: 10/2/2016 1:43:03 PM
 *  Author: nicol
 */ 
#include "button.h"

void init() {
	DDRC &= ~(1 << PORTC5) ;
}

int isPressed() {
	return PINC & (1<<PORTC5);
}
