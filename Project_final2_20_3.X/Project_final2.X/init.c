    #include "init.h"

void pic_init(){
    init_osc();
    ports_init();
    pins_init();
    interrupt_init();
    timer_init();
    adc_init();
}

void init_osc(){
    OSCCONbits.SCS = 0; //clock source definde bij FOSC
    OSCCONbits.IRCF = 0b111; //8MHz clock frequency
    OSCCONbits.OSTS = 0b1; // OSC startup time

    while (OSCCONbits.HTS != 0b1);
}
void ports_init(){
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
void pins_init(){
    TRISEbits.TRISE2 = 1; // AN7 Als input
    ANSELbits.ANS7 = 1; // Analoge input als op AN7
    TRISBbits.TRISB0 = 1; // Zet Ir reciver op input
    TRISBbits.TRISB4 = 1;
    TRISBbits.TRISB5 = 1;
    PSTRCONbits.STRC = 0;
}
void interrupt_init(){
    INTCONbits.RBIF = 0;
    INTCONbits.RBIE = 1;
    PIE1bits.ADIE = 1;
    PIR1bits.ADIF = 0;
    IOCBbits.IOCB4 = 1;
    IOCBbits.IOCB5 = 1;
    
    OPTION_REGbits.INTEDG = 0;
    INTCONbits.INTE = 1;
    INTCONbits.INTF = 0;
    PIE1bits.TMR1IE = 1;
    PIR1bits.TMR1IF = 0;
    
    INTCONbits.PEIE = 1;
    INTCONbits.GIE = 1;
}
void timer_init(){
    T1CONbits.TMR1CS = 0; //Zet timer1 Clock source op Internal instruction cycle clock (Fosc/4)
    T1CONbits.T1CKPS = 0b10; //zet de timer1 prescaler op 1:4
}
void adc_init(){
    ADCON0bits.ADCS = Fosc32; // Fosc32 met de 8 MHz clock voor een werkende conversie
    ADCON1bits.VCFG0 = 0; //VDD reference
    ADCON1bits.VCFG1 = 0; //VSS reference
    ADCON0bits.CHS = AN7; // AN7 voor adc conversie
    ADCON1bits.ADFM = 1; //Right justified
    ADCON0bits.ADON = 1; // ADC on 
}

