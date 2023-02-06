#include <math.h>

int redled = 2;
float starting = 1000;
float delayy = starting;
float f = 1;
bool goUp = false;

void setup() {
	pinMode(redled, OUTPUT);
}

void loop() {

	if (goUp == false) {
		digitalWrite(redled, HIGH);
		delayy = sin(f)*1000;
		delay(delayy);
		digitalWrite(redled, LOW);
		delay(delayy);
		f-=0.1;
	}
	if (goUp == true) {
		digitalWrite(redled, HIGH);
		delayy = sin(f)*1000;
		delay(delayy);
		digitalWrite(redled, LOW);
		delay(delayy);
		f+=0.1;
	}
	if (f <= 0.1) {
		goUp = true;
	}
	if (f>= 1) {
		goUp = false;
	}

}