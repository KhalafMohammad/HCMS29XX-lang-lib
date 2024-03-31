/* 
 * File:   main.c
 * Author: rayzo
 *
 * Created on 11 oktober 2023, 14:15
 */

// PIC16F887 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTRC_CLKOUT// Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // RE3/MCLR pin function select bit (RE3/MCLR pin function is digital input, MCLR internally tied to VDD)
#pragma config CP = OFF         // Code Protection bit (Program memory code protection is disabled)
#pragma config CPD = OFF        // Data Code Protection bit (Data memory code protection is disabled)
#pragma config BOREN = ON       // Brown Out Reset Selection bits (BOR enabled)
#pragma config IESO = OFF        // Internal External Switchover bit (Internal/External Switchover mode is disabled)
#pragma config FCMEN = OFF       // Fail-Safe Clock Monitor Enabled bit (Fail-Safe Clock Monitor is disabeled)
#pragma config LVP = OFF        // Low Voltage Programming Enable bit (RB3 pin has digital I/O, HV on MCLR must be used for programming)

// CONFIG2
#pragma config BOR4V = BOR21V   // Brown-out Reset Selection bit (Brown-out Reset set to 2.1V)
#pragma config WRT = OFF        // Flash Program Memory Self Write Enable bits (Write protection off)

#define ADCSteps 1024
#define STEPS 40
#define STAPGROOTE ADCSteps / (STEPS + 1)
#define DEADZONE 5
#define MHz8 0b111
#define Fosc32 0b10
#define AN7 0b0111

#define INPUTS 4
#define INDENTS 3

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define _XTAL_FREQ      500000  // Used by the XC8 delay_ms(x) macro

#include <xc.h>
#include <htc.h>
#include <pic16f887.h>
#include "spi.h"
#include "ascii.h"
#include "scherm.h"
#include "asciiAHA.h"

void pic_init(void);
void init_osc(void);
void ports_init(void);
void pins_init(void);
void interrupt_init(void);
void timer_init(void);
void adc_init(void);

void volume_conversion(void);
void rotaryHandeling(void);
void input_conversion(void);

int volume = 0;
int count = 1;
int miniCount = 3;
int switchLeds = 1;
char nummerOffset = '0';
  
int main(int argc, char** argv) {
    pic_init();
    char helderheid = 15;
    scherm_init(helderheid);
    char screen2[8] = "INPUT:0 ";
    text_to_buffer(SCREEN_2,screen2);
    char screen1[8] = "VOL:0   ";
    text_to_buffer(SCREEN_1,screen1);
    while(1){
        if(switchLeds == 1){
            send_buffer(SCREEN_2);
            input_conversion();
            switchLeds = 0;
        }
        send_buffer(SCREEN_1);
        volume_conversion();
        GO = 1; //ADCON0.GO
    }
    return (EXIT_SUCCESS);
}

void pic_init(void){
    init_osc();
    ports_init();
    pins_init();
    adc_init();
    spi_init(MST_OSC_DIV_04, SMP1_SDI_END, CKP0_CPOL0_IDLE_LOW, CKE1_CPHA0_TRSMIT_ACT2IDL);
    interrupt_init();
}

void init_osc(void){
    OSCCONbits.SCS = 0; //clock source definde bij FOSC
    OSCCONbits.IRCF = 0b100; //1MHz clock frequency
    OSCCONbits.OSTS = 0b1; // OSC startup time

    while (OSCCONbits.HTS != 0b1);
}
void ports_init(void){
    ANSEL = 0;
    ANSELH = 0;
    
    TRISA = 0;
    TRISB = 0;
    TRISC = 0;
    TRISD = 0;
    TRISE = 0;
    
    PORTA = 0;
    PORTB = 0;
    PORTC = 0b00000011; //PORTC bits on for no motor 
    PORTD = 0;
    PORTE = 0;
}

void pins_init(void){
    TRISEbits.TRISE2 = 1; // AN7 Als input
    ANSELbits.ANS7 = 1; // Analoge input als op AN7
    TRISBbits.TRISB4 = 1;
    TRISBbits.TRISB5 = 1;
}

void interrupt_init(void){
    INTCONbits.RBIF = 0;
    INTCONbits.RBIE = 1;
    PIE1bits.ADIE = 1;
    PIR1bits.ADIF = 0;
    IOCBbits.IOCB4 = 1;
    IOCBbits.IOCB5 = 1;
    INTCONbits.PEIE = 1;
    INTCONbits.GIE = 1;
}

void adc_init(void){
    ADCON0bits.ADCS = Fosc32; // Fosc32 met de 8 MHz clock voor een werkende conversie
    ADCON1bits.VCFG0 = 0; //VDD reference
    ADCON1bits.VCFG1 = 0; //VSS reference
    ADCON0bits.CHS = AN7; // AN7 voor adc conversie
    ADCON1bits.ADFM = 1; //Right justified
    ADCON0bits.ADON = 1; // ADC on  
}


void volume_conversion(void){
    
    char buffer[2];
    char value;
    if(volume < 10){
        value = (char)volume + nummerOffset;
        buffer[0] = value;
        value = '\0';
        buffer[1] = value;
    }
    else if(volume < 20){
        value = 1 + nummerOffset;
        buffer[0] = value;
        value = (char)volume - 10 + nummerOffset;
        buffer[1] = value;
    }
    else if(volume < 30){
        value = 2 + nummerOffset;
        buffer[0] = value;
        value = (char)volume - 20 + nummerOffset;
        buffer[1] = value;
    }
    else if(volume < 40){
        value = 3 + nummerOffset;
        buffer[0] = value;
        value = (char)volume - 30 + nummerOffset;
        buffer[1] = value;
    }
    else{
        value = 4 + nummerOffset;
        buffer[0] = value;
        value = (char)volume - 40 + nummerOffset;
        buffer[1] = value;
    }
        
    for(int i = 0; i < 2; i++){
        if(buffer[i] == '\0'){
            if(i == 1){
                load_buffer(' ',5,SCREEN_1);
            }
            break;
        }
        else{
            load_buffer(buffer[i],i+4, SCREEN_1);
        }
    }
}

void input_conversion(void){
    char input = (char)count + nummerOffset; 
    
    load_buffer(input, 6, SCREEN_2);
}

void rotaryHandeling(void){
    unsigned char state;
    static unsigned char oldstate;
    __delay_ms(1);
    state = (unsigned char)(PORTBbits.RB4 << 1 | PORTBbits.RB5);
    
    if(oldstate == 0x0){
        if(state == 0x1){
            miniCount--;
            if(miniCount == 0){
                miniCount = INDENTS;
                if(count != 1){
                    count--;
                }
                else{
                    count = 4;
                }
                switchLeds = 1;
            }
        }
        else if(state == 0x2){
            miniCount++;
            if(miniCount == (INDENTS * 2)){
                miniCount = INDENTS;
                if(count != INPUTS){
                    count++;
                }
                else{
                    count = 1;
                }
                switchLeds = 1;
            }
        }
    }
    oldstate = state;
    PORTB = PORTB;
    INTCONbits.RBIF = 0;
}

void __interrupt() ISR(void){
    if(PIR1bits.ADIF == 1){
        int adcValue = ADRESH << 8 | ADRESL;
        int upperValue = adcBounds[volume + 1] + DEADZONE;
        int lowerValue = adcBounds[volume] - DEADZONE;
        
        if ( adcValue >= upperValue && volume != STEPS){
            volume++;
        }
        else if( adcValue <= lowerValue && volume != 0){
            volume--;
        }
        PIR1bits.ADIF = 0;
    }
    if(INTCONbits.RBIF==1){
        rotaryHandeling();
    }
}

