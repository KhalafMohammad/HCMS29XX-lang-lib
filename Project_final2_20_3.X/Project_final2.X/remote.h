

#ifndef REMOTE_H
#define	REMOTE_H
#include <xc.h>
#include "global.h"
#include "scherm.h"


#define CHECKSOM 0b010000000000
#define RC0 PORTCbits.RC0
#define RC1 PORTCbits.RC1

volatile long final_code; //de ontvangen code van de IR
int timeraan; //of je de timer wilt gebruiken of niet
volatile int remote_counter; //counter om bij te houden hoeveel bits we hebben ontvangen
int motoraan;

void remote_edge_handeling(void);
void key_detection(void);
void remote_timer_handeling(void);

#endif	/* REMOTE_H */

