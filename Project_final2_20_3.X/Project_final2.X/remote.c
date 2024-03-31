#include "remote.h"

void remote_edge_handeling(void) {
    TMR1 = 65136;
    T1CONbits.TMR1ON = 1;
    timeraan = 1;
    INTCONbits.INTF = 0;
}

void remote_timer_handeling(void) {
    if (timeraan == 1) {
        final_code = final_code << 1; // shift alles 1 naar links
        //check of de ontvangen bit hoog is, dan 1 in de final code zetten, zo niet dan is de bit al op 0 gezet door de shitft hierboven.
        if (PORTBbits.RB0 == 0) {
            final_code = final_code | 0b0000000000000001;
        }
        remote_counter++; //tellen hoeveel bits we al hebben
        timeraan = 0;
    } else {
        remote_counter = 0;
        final_code = 0;
        T1CONbits.TMR1ON = 0;
        RC0 = 1;
        RC1 = 1; // motoruit
    }
    PIR1bits.TMR1IF = 0;
}

void key_detection(void) {
    long check = final_code & 0b111000000000;
    long temp_code;
    if (check == CHECKSOM) { //checken of de eerste bits 010 zijn
        temp_code = (final_code & 0b010100100000); //vol+ key 1
        if (temp_code == 0b010100100000) {


            if (volume < 40) {
                RC0 = 0;
                RC1 = 1;
            } else if (volume >= 40) {
                RC0 = 1;
                RC1 = 1;
            }
            TMR1 = 23000;
        }

        temp_code = (final_code & 0b010100010000); //vol- key 2
        if (temp_code == 0b010100010000) {


            if (volume > 0) { //check of het volume 
                RC0 = 1;
                RC1 = 0;
            } else if (volume <= 0) {
                RC0 = 1;
                RC1 = 1;
            }
            TMR1 = 23000;
        }

        temp_code = (final_code & 0b010010010000); //zet bitmasker klaar voor key 8 aka Input 1
        if (temp_code == 0b010010010000) { //check of de final code overeenkomt met key 8
            input = 1; //key 8, is input 1
            inputChanged = 1;
        }

        temp_code = final_code & 0b010100001000; //input 2 key 3
        if (temp_code == 0b010100001000) {
            input = 2; //key 3, is input 2
            inputChanged = 1;
        }

        temp_code = final_code & 0b010010100000; //input 3 key 7
        if (temp_code == 0b010010100000) {
            input = 3; //key 7, is input 3
            inputChanged = 1;
        }

        temp_code = final_code & 0b010010001000; //input 4 key 9
        if (temp_code == 0b010010001000) {
            input = 4; //key 9, is input 4
            inputChanged = 1;
            scherm_setup(); //change language
            send_buffer();
        }

        temp_code = final_code & 0b010010000100; // display key 10
        if (temp_code == 0b010010000100) {
            num_of_lang++;

        }
    }
    if (num_of_lang > 6) { //klicking 4times after the last language will reset to 0
        num_of_lang = 0;
    }
    final_code = 0;
    remote_counter = 0;
}


