int redled = 2;
int pal = 200;
float starting = 1000;
float delayy = 1000;
float percent = 0.8;


void setup() {
	pinMode(redled, OUTPUT);
}

void Down() {

	bool run = true;
	while (run == true) {
		digitalWrite(redled, HIGH);
		delayy*=percent;
		delay(delayy);
		digitalWrite(redled, LOW);
		delay(delayy);
		if(delayy <= pal) {
			return;
		}
	}
}

void Up() {

	bool run = true;
	while(run == true) {
		digitalWrite(redled, HIGH);
		delayy*=(1/percent);
		delay(delayy);
		digitalWrite(redled, LOW);
		delay(delayy);
		if(delayy>= starting) {
			return;
		}
	}
}

void loop() {
	Down();
	Up();	
}