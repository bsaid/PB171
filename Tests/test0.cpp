#include "YourArduinoLibrary.h"

void setup() {
	pinMode(PD0, OUTPUT);
	pinMode(PD1, OUTPUT);
	
	digitalWrite(PD0, LOW);
	digitalWrite(PD1, HIGH);
}

void loop() {
}
