#include "adc.h"

void adcHandeling(){
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
                load_buffer(num_of_lang ,' ',5,SCREEN_1);
            }
            break;
        }
        else{
            load_buffer(num_of_lang ,buffer[i],i+4, SCREEN_1);
        }
    }
    load_buffer(num_of_lang ,' ', 7, SCREEN_1);
}