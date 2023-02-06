int redled = 2;
float pal = 200;
float starting = 1000;
float delayy = starting;
float percent = 0.8;


void setup() {
	pinMode(redled, OUTPUT);
}

void Down() {

	bool run = true;
	while(run == true){

		digitalWrite(redled, HIGH);
		delayy*=percent;
		delay(delayy);
		digitalWrite(redled, LOW);
		delay(delayy);

		if (delayy <= pal) {
			delayy = starting;
		}
	}
}


void loop() {
	Down();
}