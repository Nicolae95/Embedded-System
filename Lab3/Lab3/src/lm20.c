/*
 * lm20.c
 *
 * Created: 10/4/2016 11:39:38 PM
 *  Author: nicol
 */ 
#include "lm20.h"

int temp = 0;


void initLM() {
	initADC();
	
}

int getTemp() { 
	temp = (382 - getData()) / 3;
	return temp;
}	

int convertCelsiusToKelvin(int temp) {
	return temp + 273;
}

int convertCelsiusToFahrenheit(int temp) {
	return temp * 2 + 32;
}