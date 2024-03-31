#ifndef ROTARY_H
#define	ROTARY_H

#include "scherm.h"
#include "global.h"

#define INPUTS 4
#define INDENTS 2

void rotaryHandeling(void);
void input_conversion(void);

#define REA PORTBbits.RB4 // Rotary encoder pin definition
#define REB PORTBbits.RB5

unsigned char state;
unsigned char oldstate;

const char inputLeds[4] = {
0b11111110,0b11111101,0b11111011,0b11110111,
};
#endif	/* ROTARY_H */

