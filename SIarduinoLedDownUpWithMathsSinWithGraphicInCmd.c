#include <math.h>

int redled = 2;
float starting = 1000;
float delayy = starting;
float f = 1;
bool goUp = false;

void setup() {
	Serial.begin(9600);
	pinMode(redled, OUTPUT);
}

void loop() {

	if (goUp == false) {
		digitalWrite(redled, HIGH);
		delayy = sin(f)*1000;
		for (int i = ((int)delayy)/10;i>10;i-=10){
			delay(10);
			Serial.print(".");
		}
		digitalWrite(redled, LOW);
		for (int i = ((int)delayy)/10;i>10;i-=10){
			delay(10);
			Serial.print(" ");
		}
		Serial.print("\nstops here");
		f-=0.1;
	}
	if (goUp == true) {
		digitalWrite(redled, HIGH);
		delayy = sin(f)*1000;
		for (int i = ((int)delayy)/10;i>10;i-=10){
			delay(10);
			Serial.print(".");
		}
		digitalWrite(redled, LOW);
		for (int i = ((int)delayy)/10;i>10;i-=10){
			delay(10);
			Serial.print(" ");
		}
		f+=0.1;
	}
	if (f <= 0.1) {
		goUp = true;
	}
	if (f>= 1) {
		goUp = false;
	}

}