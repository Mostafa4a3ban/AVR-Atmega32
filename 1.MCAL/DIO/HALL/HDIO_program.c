/*
 * HDIO_program.c
 *
 *  Created on: Oct 23, 2023
 *      Author: Mostafa Shapan
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "HDIO_private.h"
#include "HDIO_interface.h"

void INIT(void)
{
	DDRA |= PORT_INPUT;
	DDRB |= PORT_INPUT;
	DDRC |= PORT_INPUT;
	DDRD |= PORT_INPUT;
}

void DIO_vSetPinDir(u8 u8port, u8 u8pin, u8 u8state)
{
	switch(u8port)
	{
	case DIO_PORTA:
		if(u8state)
		{
			SET_BIT(DDRA, u8pin);
		}
		else
		{
			CLR_BIT(DDRA, u8pin);
		}
		break;

	case DIO_PORTB:
		if(u8state)
		{
			SET_BIT(DDRB, u8pin);
		}
		else
		{
			CLR_BIT(DDRB, u8pin);
		}
		break;

	case DIO_PORTC:
		if(u8state)
		{
			SET_BIT(DDRC, u8pin);
		}
		else
		{
			CLR_BIT(DDRC, u8pin);
		}
		break;

	case DIO_PORTD:
		if(u8state)
		{
			SET_BIT(DDRD, u8pin);
		}
		else
		{
			CLR_BIT(DDRD, u8pin);
		}
		break;
	default:
		break;
	}
}



void DIO_vSetPinValue(u8 u8port, u8 u8pin, u8 u8value)
{
	switch(u8port)
	{
	case DIO_PORTA:
		if(u8value)
		{
			SET_BIT(PORTA, u8pin);
		}
		else
		{
			CLR_BIT(PORTA, u8pin);
		}
		break;

	case DIO_PORTB:
		if(u8value)
		{
			SET_BIT(PORTB, u8pin);
		}
		else
		{
			CLR_BIT(PORTB, u8pin);
		}
		break;

	case DIO_PORTC:
		if(u8value)
		{
			SET_BIT(PORTC, u8pin);
		}
		else
		{
			CLR_BIT(PORTC, u8pin);
		}
		break;

	case DIO_PORTD:
		if(u8value)
		{
			SET_BIT(PORTD, u8pin);
		}
		else
		{
			CLR_BIT(PORTD, u8pin);
		}
		break;
	default:
		break;
	}
}

void DIO_vTogPinValue(u8 u8port, u8 u8pin)
{
	switch(u8port)
	{
	case DIO_PORTA:
		TOG_BIT(PORTA, u8pin);
		break;

	case DIO_PORTB:
		TOG_BIT(PORTB, u8pin);
		break;
	case DIO_PORTC:
		TOG_BIT(PORTC, u8pin);
		break;
	case DIO_PORTD:
		TOG_BIT(PORTD, u8pin);
		break;
	default:
		break;
	}
}


u8 DIO_u8ReadPinValue(u8 u8port, u8 u8pin)
{
	u8 u8value;
	switch(u8port)
	{
	case DIO_PORTA:
		u8value = GET_BIT(PINA, u8pin);
		break;

	case DIO_PORTB:
		u8value = GET_BIT(PINB, u8pin);
		break;

	case DIO_PORTC:
		u8value = GET_BIT(PINC, u8pin);
		break;

	case DIO_PORTD:
		u8value = GET_BIT(PIND, u8pin);
		break;

	default:
		break;
	}
return u8value;
}


void DIO_vSetPortDir(u8 u8port, u8 u8state)
{
	switch(u8port)
	{
	case DIO_PORTA:
		{
			DDRA |= u8state;
		}
		break;

	case DIO_PORTB:
		{
			DDRB |= u8state;
		}
		break;

	case DIO_PORTC:
		{
			DDRC |= u8state;
		}
		break;

	case DIO_PORTD:
		{
			DDRD |= u8state;
		}
		break;
	default:
		break;
	}
}



void DIO_vSetPortValue(u8 u8port, u8 u8value)
{
	switch(u8port)
	{
	case DIO_PORTA:
		{
			PORTA |= u8value;
		}
		break;

	case DIO_PORTB:
		{
			PORTB |= u8value;
		}
		break;

	case DIO_PORTC:
		{
			PORTC |= u8value;
		}
		break;

	case DIO_PORTD:
		{
			PORTD |= u8value;
		}
		break;

	default:
		break;
	}
}




u8 DIO_u8ReadPortValue(u8 u8port)
{
	u8 u8value;
	switch(u8port)
	{
	case DIO_PORTA:
		u8value = PINA;
		break;

	case DIO_PORTB:
		u8value = PINB;
		break;

	case DIO_PORTC:
		u8value = PINC;
		break;

	case DIO_PORTD:
		u8value = PIND;
		break;

	default:
		break;
	}
return u8value;
}
