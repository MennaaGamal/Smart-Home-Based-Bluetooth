/*
 * LED.h
 *
 * Created: 10/3/2020 11:24:22 AM
 *  Author: Menna Gamal
 */ 




#include "LED.h"

void LED0_inti(void)
{
	DIO_SetPinDir(DIO_PORTC, DIO_PIN2,DIO_PIN_OUTPUT);
}

void LED0_ON(void)
{
	DIO_WritePin(DIO_PORTC, DIO_PIN2,DIO_PIN_HIGH);
}

void LED0_OFF(void)
{
	DIO_WritePin(DIO_PORTC, DIO_PIN2,DIO_PIN_LOW);
}

void LED0_toggle(void)
{
	Toggle_BIT(PORTC,2);
}


