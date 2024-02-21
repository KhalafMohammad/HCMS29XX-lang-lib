#ifndef SCHERM_H
#define	SCHERM_H

#include <xc.h>                 // PIC hardware mapping
#include <htc.h>
#include <pic16f887.h>
#include "ascii.h"
#include "spi.h"

#define RESET_1   PORTCbits.RC2
#define CENABLE_1 PORTCbits.RC4 
#define BLANK_1   PORTCbits.RC6
#define RSELECT_1 PORTCbits.RC7

#define RESET_2   PORTDbits.RD2
#define CENABLE_2 PORTDbits.RD4 
#define BLANK_2   PORTDbits.RD6
#define RSELECT_2 PORTDbits.RD7

#define _XTAL_FREQ      500000  // Used by the XC8 delay_ms(x) macro

typedef enum _Screen_{
    SCREEN_1 = 1,
    SCREEN_2,
    SCREEN_1_2        
}Screen;

void scherm_init(char helderheid);
void send_buffer(Screen scherm);
void load_buffer(char karakter, int pos, Screen scherm);
void text_to_buffer(Screen scherm, char newtext[]);

char scherm1_buffer[40];
char scherm2_buffer[40];
#endif

