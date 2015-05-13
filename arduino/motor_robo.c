/*
 * motor_robo.c
 *
 * Created: 5/11/2015 11:54:27 PM
 *  Author: bryandouglaspinheiro
 */ 


#include "def_principais.h"
#include "motores.h"

int main(void)
{
	int x=0;
	DDRC = 0xFF;
	DDRD = 0x00;
	PORTC = 0x00;
	PORTD = 0xFF;
	
    while(1)
    {
		x=0;
        if(!tst_bit(PIND,PD4))
			x=1;//motores(x);}
		if(!tst_bit(PIND,PD5))
			x=2;//motores(x);}
		if(!tst_bit(PIND,PD6))
			x=3;//motores(x);}
		if(!tst_bit(PIND,PD7))
			x=4;//motores(x);}
		motores(x);
    }
}