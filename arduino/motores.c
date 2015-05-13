/*
 * motores.c
 *
 * Created: 5/11/2015 11:59:24 PM
 *  Author: bryandouglaspinheiro
 */ 

#include "motores.h"

void motores(int x){
	
	if(x==1){
		set_bit(PORTC,PC2);
		set_bit(PORTC,PC0);
		clr_bit(PORTC,PC1);
		clr_bit(PORTC,PC3);	
	}
	if(x==2){
		set_bit(PORTC,PC3);
		set_bit(PORTC,PC1);
		clr_bit(PORTC,PC0);
		clr_bit(PORTC,PC2);
	}
	if(x==3){
		clr_bit(PORTC,PC0);
		clr_bit(PORTC,PC3);
		set_bit(PORTC,PC1);
		set_bit(PORTC,PC2);
	}
	if(x==4){
		clr_bit(PORTC,PC1);
		clr_bit(PORTC,PC2);
		set_bit(PORTC,PC0);
		set_bit(PORTC,PC3);
	}
	if(x==0){
		clr_bit(PORTC,PC0);
		clr_bit(PORTC,PC3);
		clr_bit(PORTC,PC1);
		clr_bit(PORTC,PC2);
	}
}