#include "init.h"
#include "adc.h"
#include "rotary.h"
#include "spi.h"
#include "scherm.h"
#include "remote.h"
#include "global.h"

int main(int argc, char** argv) {
    
    pic_init();
    spi_init(MST_OSC_DIV_04, SMP1_SDI_END, CKP0_CPOL0_IDLE_LOW, CKE1_CPHA0_TRSMIT_ACT2IDL);
    char helderheid = 15;
    scherm_init(helderheid);
    scherm_setup();
    
    while(1){
        if (remote_counter == 12) {
            key_detection();
        }
        if(inputChanged == 1){
            input_conversion();
            PORTA = inputLeds[input - 1];
            send_buffer(SCREEN_2);
            inputChanged = 0;
        }
        if(volume != volumeOud){
            volume_conversion();
            send_buffer(SCREEN_1);
            volumeOud = volume;
        }
        GO = 1;
    }
}


void __interrupt() ISR(void){
    if (INTCONbits.INTF == 1) {
        remote_edge_handeling();
    }
    
    if (PIR1bits.TMR1IF == 1) {
        remote_timer_handeling();
    }
    
    if(PIR1bits.ADIF == 1){
        adcHandeling();
    }
    
    if(INTCONbits.RBIF==1){
        rotaryHandeling();
    }
}
