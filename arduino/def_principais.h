/*
 * def_principais.h
 *
 * Created: 5/9/2015 11:20:22 PM
 *  Author: bryandouglaspinheiro
 */ 


#ifndef DEF_PRINCIPAIS_H_
#define DEF_PRINCIPAIS_H_

#define F_CPU 16000000UL //sets the frequency of the microcontroller - 16MHz

#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>
#include <avr/interrupt.h>

//Sets macros to work with bits
#define set_bit(y,bit) (y|=(1<<bit)) //put in 1 the bit x the variable Y
#define clr_bit(y,bit) (y&=~(1<<bit)) //put in 0 the bit x the variable Y
#define cpl_bit(y,bit) (y^=(1<<bit)) //change the logical steta of the bit x the variable Y
#define tst_bit(y,bit) (y&(1<<bit)) //returne 0 or 1 as reading bit


#endif /* DEF_PRINCIPAIS_H_ */