// put implementations for functions, explain how it works
// put your names here, date
#include "../inc/tm4c123gh6pm.h"
#include <stdint.h>

void DAC_Init(void){
	SYSCTL_RCGCGPIO_R |= 0x02; //Turn Port B. PORT B is DAC. PORT B has switches/keys
	volatile int nop; 
					nop++; 
	GPIO_PORTB_DIR_R |=0x3F; //PB0-PB5 for DAC
	GPIO_PORTB_DEN_R |=0x3F; //^
}

void DAC_Out(uint32_t data){
	    GPIO_PORTB_DATA_R = data&0x3F; 	
}
