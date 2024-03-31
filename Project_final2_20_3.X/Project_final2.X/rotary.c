#include <xc.h>
#include "rotary.h"

void rotaryHandeling(void) {
    __delay_ms(1);
    state = (unsigned char) (REB << 1 | REA);

    if (oldstate != state) {
        if (state == 0x1) {
            miniCount--;
            if (miniCount == 0) {
                miniCount = INDENTS;
                if (input != 1) {
                    input--;
                } else {
                    input = 4;
                }
                inputChanged = 1;
            }
        } else if (state == 0x2) {
            miniCount++;
            if (miniCount == (INDENTS * 2)) {
                miniCount = INDENTS;
                if (input != INPUTS) {
                    input++;
                } else {
                    input = 1;
                }
                inputChanged = 1;
            }
        }
    }
    oldstate = state;
    PORTB = PORTB;
    INTCONbits.RBIF = 0;
}

void input_conversion(void) {
    char inputNew = (char) input + nummerOffset;

    load_buffer(num_of_lang, inputNew, 6, SCREEN_2);
}