#include<lpc214x.h>

int main(){
	PINSEL0 = 0x00000000;									//defining port0's 0-15 pins as GPIO
	IODIR0	= 0x00000002;											//Setting port0's 0-15 pins as output pins	PFFF0FFFF;								
	
	while(1){
		if(IOPIN0==0x00){
			IOSET0 = (1<<1);											//Setting port0's 0-3 pins as low
		}
		else{
			IOCLR0 = (1<<1);											//Setting port0's pins 0-3 high
		}
	}
	return 0;
}