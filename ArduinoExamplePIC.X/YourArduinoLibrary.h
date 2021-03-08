//#include <xc.h>

//#pragma config WDTEN = OFF
//#pragma config FOSC = INTIO7
//#pragma config MCLRE = EXTMCLR
//#pragma config FCMEN = ON

//TODO: define these constants
#define LOW     0
#define HIGH    0
#define INPUT   0
#define OUTPUT  0
#define PD0     0
#define PD1     0

#define true  1
#define false 0

//TODO: define types with specific length
typedef unsigned char uint8_t;
typedef unsigned long uint32_t;

void init(){
    //OSCCON = (OSCCON & 0b10001111) | 0b01110000;    // internal oscillator at full speed (16 MHz)
}

void setup(); // implemented by user
void loop();  // implemented by user

void main(void) {
    init();
    setup();
	while(true) {
		loop();
	}
}

void pinMode(uint8_t pin, uint8_t mode) {
	//TODO
}

void digitalWrite(uint8_t pin, uint8_t mode) {
	//TODO
}

void delay(uint32_t ms) {
	//TODO
}
