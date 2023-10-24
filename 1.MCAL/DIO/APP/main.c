/*
 * main.c
 *
 *  Created on: Oct 23, 2023
 *      Author: Mostafa Shapan
 */

#include <util/delay.h>

#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "HDIO_private.h"
#include "HDIO_interface.h"

void main(void)
{
	DIO_vSetPinDir(DIO_PORTA, DIO_PIN6, OUTPUT);
	DIO_vSetPinDir(DIO_PORTA, DIO_PIN5, OUTPUT);
	DIO_vSetPinDir(DIO_PORTA, DIO_PIN4, OUTPUT);
	DIO_vSetPinDir(DIO_PORTB, DIO_PIN7, OUTPUT);

	while(1)
	{
		DIO_vSetPinValue(DIO_PORTB, DIO_PIN7, HIGH);
		_delay_ms(1000);
		DIO_vSetPinValue(DIO_PORTB, DIO_PIN7, LOW);

		DIO_vSetPinValue(DIO_PORTA, DIO_PIN4, HIGH);
		_delay_ms(1000);
		DIO_vSetPinValue(DIO_PORTA, DIO_PIN4, LOW);

		DIO_vSetPinValue(DIO_PORTA, DIO_PIN5, HIGH);
		_delay_ms(1000);
		DIO_vSetPinValue(DIO_PORTA, DIO_PIN5, LOW);

		DIO_vSetPinValue(DIO_PORTA, DIO_PIN6, HIGH);
		_delay_ms(1000);
		DIO_vSetPinValue(DIO_PORTA, DIO_PIN6, LOW);
		_delay_ms(2000);
	}
}

