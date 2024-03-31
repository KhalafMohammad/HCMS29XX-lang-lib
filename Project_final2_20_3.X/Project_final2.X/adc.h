#ifndef ADC_H
#define	ADC_H

#include "scherm.h"
#include "global.h"

#define STEPS 40
#define DEADZONE 20

const int adcBounds[42] = {0  , 25 , 50 , 75 , 100, 125, 150, 175, 200, 225, 250, 
                          275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525,
                          550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800,
                          825, 850, 875, 900, 925, 950, 975, 1000,1025};

void adcHandeling(void);
void volume_conversion(void);


#endif	/* ADC_H */

