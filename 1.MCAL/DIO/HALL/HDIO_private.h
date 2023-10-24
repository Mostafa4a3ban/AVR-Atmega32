/*
 * HDIO_private.h
 *
 *  Created on: Oct 23, 2023
 *      Author: Mostafa Shapan
 */

#ifndef HALL_HDIO_PRIVATE_H_
#define HALL_HDIO_PRIVATE_H_


/*PORTA*/
#define DDRA *((volatile u8*)(0x3A))
#define PORTA *((volatile u8*)(0x3B))
#define PINA *((volatile u8*)(0x39))

/*PORTB*/
#define DDRB *((volatile u8*)(0x37))
#define PORTB *((volatile u8*)(0x38))
#define PINB *((volatile u8*)(0x36))


/*PORTC*/
#define DDRC *((volatile u8*)(0x34))
#define PORTC *((volatile u8*)(0x35))
#define PINC *((volatile u8*)(0x33))

/*PORTD*/
#define DDRD *((volatile u8*)(0x31))
#define PORTD *((volatile u8*)(0x32))
#define PIND *((volatile u8*)(0x30))



#endif /* HALL_HDIO_PRIVATE_H_ */
