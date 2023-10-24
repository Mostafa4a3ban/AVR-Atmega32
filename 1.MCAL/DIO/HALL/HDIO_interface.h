/*
 * HDIO_interface.h
 *
 *  Created on: Oct 23, 2023
 *      Author: Mostafa Shapan
 */

#ifndef HALL_HDIO_INTERFACE_H_
#define HALL_HDIO_INTERFACE_H_

#define INTPUT 0x0
#define OUTPUT 0x1

#define PORT_OUTPUT 0xFF
#define PORT_INPUT 0x00

#define HIGH 1
#define LOW 0

//PORTS
typedef enum{
	DIO_PORTA = 1,
	DIO_PORTB,
	DIO_PORTC,
	DIO_PORTD
}PORTs;

//PINS
typedef enum{
	DIO_PIN0,
	DIO_PIN1,
	DIO_PIN2,
	DIO_PIN3,
	DIO_PIN4,
	DIO_PIN5,
	DIO_PIN6,
	DIO_PIN7
}PINS;

void INIT(void);
void DIO_vSetPinDir(u8 u8port, u8 u8pin, u8 u8state);
void DIO_vSetPinValue(u8 u8port, u8 u8pin, u8 u8value);
void DIO_vTogPinValue(u8 u8port, u8 u8pin);
u8   DIO_u8ReadPinValue(u8 u8port, u8 u8pin);

void DIO_vSetPortDir(u8 u8port, u8 u8state);
void DIO_vSetPortValue(u8 u8port, u8 u8value);
u8   DIO_u8ReadPortValue(u8 u8port);

#endif /* HALL_HDIO_INTERFACE_H_ */
