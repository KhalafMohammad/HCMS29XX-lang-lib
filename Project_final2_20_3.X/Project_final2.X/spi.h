

#ifndef SPI_H
#define	SPI_H
#include <xc.h>                 // PIC hardware mapping
// As for your application:
// ------------------------
// The most important criterion when writing this module is that you
// MUST use the same module in both the master (PIC16F1829) and the
// slave (PIC16F887). You just use them with different options/arguments
// 
// In the Slave code's init function, `prime' the `response-byte' 
// (see assignment text) by assigning that value to the SSPBUF register.
// Because when the master sends its `request-byte', you need to 
// immediately push back the response byte in the same SPI shift cycle.
//
// Remind yourself to handle the PIR1.SSPIF interrupt in the application
// code for the Slave side (16F887). In it:
// - Set a global boolean flag to notify the main program loop that
//		an interrupt has occurred.
// In the main program loop, look for the flag to be set. If so:
// - Check whether the byte received matches the `request-byte';
// - If it does, pulse the LED for a short amount of (visible) time
// - Reset the SSPBUF to the `response-byte' (see assignment text).
//
// Tip:
// Make sure to properly control your OSCillator, you'll need to be
// exact when timing serial data connections. Also, do NOT forget to 
// set every pin to digital I/O (ANSEL) during io-init()!

// As for this SPI module:
// -----------------------
// The 16F887 datasheet says that "If the SPI is used in Slave mode 
// with CKE set (SSPSTAT register), then the SS pin control must be 
// enabled."
// This means we can't use CKE=1, because we're ignoring the Slave
// Select option in this version of our module. Try to wrap your 
// head around the idea that this unfortunate fact renders SPI 
// modes 0 and 3 unusable.
// 
// -- Please test your code ONLY using SPI modes 1 and 2 --

// Now, on to the actual code. For SPI defines, see PIC16F887 DS p. 177:

// Values for bitfield SSPM<3:0> (Synchronous Serial Port Mode Select bits)
// NOTE: SLV_SS_EN is *never* used in this library because the Slave Select
// line is ignored in this iteration of its development!
typedef enum {
    MST_OSC_DIV_04,     // 0x0: 0000
    MST_OSC_DIV_16,     // 0x1: 0001
    MST_OSC_DIV_64,     // 0x2: 0010
    MST_OSC_DIV_T2,     // 0x3: 0011
    SLV_SS_EN,          // 0x4: 0100 - not used in this version of our lib ...
    SLV_SS_DIS          // 0x5: 0101
} sspmode;

// Datasheet SMP (Sample Timing) behavior in (SPI MASTER MODE ONLY):
// 1 = Input data sampled (received) at end of data output time
// 0 = Input data sampled (recieved) at middle of data output time
typedef enum {SMP0_SDI_MIDDLE, SMP1_SDI_END} rxsmpmoment;

// Datasheet CKP (Clock Polarity) select bit behavior (SPI mode):
// 1 = Idle state for clock is a high level
// 0 = Idle state for clock is a low level
typedef enum {CKP0_CPOL0_IDLE_LOW, CKP1_CPOL1_IDLE_HIGH} clkpol;

// Datasheet CKE (Clock Edge) select bit behavior (SPI mode):
// 1 = Transmit occurs on transition from active to Idle clock state
// 0 = Transmit occurs on transition from Idle to active clock state
// ! NOTE: Microchip CKE bit is always the inverse of Motorola CPHA bit!
typedef enum {CKE0_CPHA1_TRSMIT_IDL2ACT, CKE1_CPHA0_TRSMIT_ACT2IDL} txclkedge;

// Prototypes
void spi_init(sspmode mst_slv_oscdiv, rxsmpmoment sdi_rx_smp, clkpol clock_pol, txclkedge sdo_tx_edge);
void spi_transmit(char c);
unsigned char spi_read(void);

// For the 16F887, only one SPI port:
#define SCK_PIN                 PORTCbits.RC3
#define SDO_DDIR                TRISCbits.TRISC5 // DDIR = Data DIRection
#define SDI_DDIR                TRISCbits.TRISC4
#define SCK_DDIR                TRISCbits.TRISC3
#define SSPM                    SSPCONbits.SSPM
#define SMP                     SSPSTATbits.SMP
#define CKP                     SSPCONbits.CKP
#define SSPIE                   PIE1bits.SSPIE
#define SSPEN                   SSPCONbits.SSPEN
#define CKE                     SSPSTATbits.CKE
#define BUFFER                  SSPBUF

// For the 16F1829, MSSP1:
// ... left as an exercise for the reader ...
//#define SCK_PIN                   PORTBbits.RB6
//#define SDO_DDIR                  TRISCbits.TRISC7
//#define SDI_DDIR                  TRISBbits.TRISB4
//#define SCK_DDIR                  TRISBbits.TRISB6
//#define SSPM                      SSP1CON1bits.SSPM
//#define SMP                       SSP1STATbits.SMP
//#define CKP                       SSP1CON1bits.CKP
//#define SSPIE                     PIE1bits.SSP1IE
//#define SSPEN                     SSP1CON1bits.SSPEN
//#define CKE                       SSP1STATbits.CKE
//#define BUFFER                    SSP1BUF

// For the 16F1829, MSSP2 (default alternate pin function assignment):
//#define SCK_PIN                 PORTBbits.RB7
//#define SDO_DDIR                TRISCbits.TRISC1
//#define SCK_DDIR                TRISBbits.TRISB7
//#define SSPM                    SSP2CON2bits.SSPM
//#define SMP                     SSP2STATbits.SMP
//#define CKP                     SSP2CON2bits.CKP
//#define SSPIE                   PIE4bits.SSP2IE
//#define SSPEN                   SSP2CON1bits.SSPEN
//#define CKE                     SSP2STATbits.CKE
//#define BUFFER                  SSP2BUF

#endif	/* SPI_H */

