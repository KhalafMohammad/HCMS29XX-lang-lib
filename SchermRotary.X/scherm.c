#include "scherm.h"

void scherm_init(char helderheid){
    char controlWord_0 = 0b01110000;
    char controlWord_1 = 0b10000000;
    
    if(helderheid > 15){
        helderheid = 15;
    }
    
    controlWord_0 = controlWord_0 + helderheid;
    
    RESET_1 = 1; //RESET PIN HIGH
    CENABLE_1 = 1; //GEEN SIGNAAL ONTVANGEN
    BLANK_1 = 0; // NIET GEBLANKT
    RSELECT_1 = 1; // CONTROL REGISTER
    
    RESET_2 = 1; //RESET PIN HIGH
    CENABLE_2 = 1; //GEEN SIGNAAL ONTVANGEN
    BLANK_2 = 0; // NIET GEBLANKT
    RSELECT_2 = 1; // CONTROL REGISTER
    
    RESET_1 = 0; //RESET PIN LOW
    RESET_2 = 0;
     __delay_us(200);
    RESET_1 = 1;
    RESET_2 = 1;
    
    RSELECT_1 = 0;
    RSELECT_2 = 0;
    
    CENABLE_1 = 0;
    CENABLE_2 = 0;
    for(int i = 0; i < 40; i++){
        spi_transmit(0b00000000);
    }
    __delay_us(200);
    CENABLE_1 = 1;
    CENABLE_2 = 1;
    
    RSELECT_1 = 1;
    RSELECT_2 = 1;

    
    CENABLE_1 = 0;
    CENABLE_2 = 0;
        
    spi_transmit(controlWord_0);
    spi_transmit(controlWord_0);
    __delay_us(200);
        
    CENABLE_1 = 1;
    CENABLE_2 = 1;

    
    CENABLE_1 = 0;
    CENABLE_2 = 0;
    
    spi_transmit(controlWord_1);
    spi_transmit(controlWord_1);
    __delay_us(200);
    
    CENABLE_1 = 1;
    CENABLE_2 = 1;

    RSELECT_1 = 0;
    RSELECT_2 = 0;
}

void send_buffer(Screen scherm){
    if(scherm == SCREEN_1){
        CENABLE_1 = 0;

        for(int i = 0; i < 40; i++){
            spi_transmit(scherm1_buffer[i]);
        }
        __delay_us(200);
        CENABLE_1 = 1;
    }
    else if(scherm == SCREEN_2){
        CENABLE_2 = 0;

        for(int i = 0; i < 40; i++){
            spi_transmit(scherm2_buffer[i]);
        }
        __delay_us(200);
        CENABLE_2 = 1;
    }
}

void load_buffer(char character, int position, Screen scherm){
    if(scherm == SCREEN_1){
        for(int i = 0; i < 5; i++){
            scherm1_buffer[position * 5 + i] = ascii[character][i];
        }
    }
    else if(scherm == SCREEN_2){
        for(int i = 0; i < 5; i++){
            scherm2_buffer[position * 5 + i] = ascii[character][i];
        }
    }
    else if(scherm == SCREEN_1_2){
        for(int i = 0; i < 5; i++){
            scherm1_buffer[position * 5 + i] = ascii[character][i];
            scherm2_buffer[position * 5 + i] = ascii[character][i];
        }
    }
}

void text_to_buffer(Screen scherm, char newtext[]){
    for(int i = 0; i < 8; i++){
        load_buffer(newtext[i], i ,scherm);
    }
}
