/*
 * main.c
 *
 *  Created on: Sep 13, 2022
 *      Author: dell
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

typedef unsigned char uint8;
typedef unsigned short uint16;

uint8 i;
uint8 g_Flag_Yellow = 0;


void INT0_Init(void)
{
	SREG |= (1 << 7);

	GICR |= (1 << INT0);
	MCUCR |= (1 << ISC01);
	MCUCR &= ~(1 << ISC00);

	DDRD &= ~(1 << PD2);
}

//void Timer1_Delay(uint16 Delay)
//{
//	TCNT1 = 0;
//	TCCR1A = (1 << FOC1A);
//	TCCR1B = (1 << WGM12) | (1 << CS10) | (1 << CS12);
//	OCR1A = Delay;
//
//	while(!(TIFR & (1 << OCF1A)));
//
//	TIFR |= (1 << OCF1A);
//	TCCR1B &= ~(1 << CS10) & ~(1 << CS12);;
//}

ISR(INT0_vect)
{
	if((PORTC & (1 << PC2)))
	{
		PORTC |= (1 << PC2);
		PORTC |= (1 << PC3);
		PORTC &= ~(1 << PC5);

//		Timer1_Delay(5000);
		_delay_ms(5000);
	}
	else if((g_Flag_Yellow == 1) || (PORTC & (1 << PC0)))
	{
		PORTC |= (1 << PC5);

		PORTC &= ~(1 << PC1);
		for(i = 0; i < 5; i++)
		{
			PORTC ^= (1 << PC1);
			PORTC ^= (1 << PC4);
//			Timer1_Delay(1000);
			_delay_ms(1000);
		}
		PORTC &= ~(1 << PC0);
		PORTC &= ~(1 << PC1);
		PORTC &= ~(1 << PC4);
		PORTC &= ~(1 << PC5);

		PORTC |= (1 << PC2);
		PORTC |= (1 << PC3);
//		Timer1_Delay(5000);
		_delay_ms(5000);
	}
	for(i = 0; i < 5; i++)
	{
		PORTC ^= (1 << PC1);
		PORTC ^= (1 << PC4);
//		Timer1_Delay(1000);
		_delay_ms(1000);
	}
	PORTC &= ~(1 << PC1);
	PORTC &= ~(1 << PC2);
	PORTC &= ~(1 << PC3);
	PORTC &= ~(1 << PC4);

	PORTC |= (1 << PC5);
	PORTC |= (1 << PC0);

	GIFR |= (1 << INTF0);

//	__asm volatile("jmp 0x00");
}

int main(void)
{
	/* Initialization */

	INT0_Init();

	DDRC |= 0x3F;
	PORTC &= 0xC0;

	while(1)
	{
		/* Code */

		PORTC |= (1 << PC0);
//		Timer1_Delay(5000);
		_delay_ms(5000);

		g_Flag_Yellow = 1;
		for(i = 0; i < 5; i++)
		{
			PORTC ^= (1 << PC1);
//			Timer1_Delay(1000);
			_delay_ms(1000);
		}
		PORTC &= ~(1 << PC0);
		PORTC &= ~(1 << PC1);
		g_Flag_Yellow = 0;

		PORTC |= (1 << PC2);
//		Timer1_Delay(5000);
		_delay_ms(5000);

		g_Flag_Yellow = 1;
		for(i = 0; i < 5; i++)
		{
			PORTC ^= (1 << PC1);
//			Timer1_Delay(1000);
			_delay_ms(1000);
		}
		PORTC &= ~(1 << PC1);
		PORTC &= ~(1 << PC2);
		g_Flag_Yellow = 0;
	}
}
