#include "spi.h"

// Example of using the spi_init() function:
// In this example, SPI is set to Motorola mode 0,0 (SPI mode 0) with 
// a high prescaler slowing the bus down a bit to deal with a high 
// Fosc (presumably):
//
// spi_init(MST_OSC_DIV_64, SMP0_SDI_MIDDLE, CKP0_CPOL0_IDLE_LOW, CKE1_CPHA0_TRSMIT_ACT2IDL);
// ---------------------------------------------------------------------
// Please follow the pseudocode below meticulously. Do not change the
// function signatures.
// Refer to the datasheet as for the operation of different elements.
// ---------------------------------------------------------------------
void spi_init(sspmode mst_slv_oscdiv, rxsmpmoment sdi_rx_smp, clkpol clock_pol, txclkedge sdo_tx_edge) {
	// 1. Set `SSPM' datafield (SPI master / slave mode and prescaler 
	//		selection)
    SSPM = mst_slv_oscdiv;
	// 2. Set SDO_DDIR for SDO to behave as an output
    SDO_DDIR = 0;
    SDI_DDIR = 0;
	// 3. If a slave mode was selected:
	//		3a. The SMP bit MUST remain clear (see datasheet)
	//		3b. Set SCK_DDIR for SCK to behave like an input
	//		3c. The data line `idle state' (CKP bit) must match the 
	//			master's clock idle state. To achieve this, set the 
	//			CKP bit to whatever value can be read on the SCK_PIN.
	//		3d. Set up the recieve interrupt (PIE1.SSPIE). Don't
	//			forget PEIE and GIE (interrupt masking hierarchy).
    if(mst_slv_oscdiv > 3){
        SMP = 0;
        SCK_DDIR = 1;
        CKP = SCK_PIN;
    }
	// 4. Else (if a master mode was selected):
	//		4a. The SMP bit needs to be set according to argument 
	//			`sdi_rx_smp'
	//		4b. Set SCK_DDIR for SCK to behave like an output
	//		4c. The data line `idle state' (CKP bit) needs to be set
	//			according to argument `clock_pol'
    else{
        SMP = sdi_rx_smp;
        SCK_DDIR = 0;
        CKP = clock_pol;
    }
    //SSPIE = 1;
	// 5. Set the CKE bit according to the `sdo_tx_edge' and `clock_pol'
	//		parameters (i.e. if `sdo_tx_edge' and `clock_pol' select 
	//		mode 0 (CKE 1, CKP 0), then the CKE bit must be set, etc. -
	//		(handle all SPI modes ... !)
    CKE = sdo_tx_edge;
    if(clock_pol == 1 || SCK_PIN == 1){
        CKE ^= 1;
    }
	// 6. Enable the SPI module (by setting SSPEN bit).
    SSPEN = 1;
}

/*void spi_transmit(char c) {
	// FILL. THAT. BUFFER.
    BUFFER = c;
}

unsigned char spi_read(void){
    return BUFFER;
}*/
