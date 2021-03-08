#include "YourArduinoLibrary.h"

void setup() {
	pinMode(PD0, OUTPUT);
	pinMode(PD1, OUTPUT);
}

void loop() {
	digitalWrite(PD0, LOW);
	digitalWrite(PD1, HIGH);
	delay(500);
	digitalWrite(PD0, HIGH);
	digitalWrite(PD1, LOW);
	delay(500);
}
