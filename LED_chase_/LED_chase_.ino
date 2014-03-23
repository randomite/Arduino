byte ledPin[] = {4, 5, 6, 7, 8, 9, 10, 11, 12};
int ledDelay(500);//vary this value change the speed of the chase
int direction = 1;
int currentLED = 0;
unsigned long changeTime;

void setup() {
        for (int x=0; x<9; x++)  {
                pinMode(ledPin[x], OUTPUT); }
        changeTime = millis();
}

void loop() {
        if ((millis() - changeTime) > ledDelay)  {
                changeLED();
                changeTime  =  millis();
        }
}

void changeLED() {
        for (int x=0; x<9; x++) {
                 digitalWrite(ledPin[x], LOW);
        }
        digitalWrite(ledPin[currentLED], HIGH);
        currentLED += direction; 
        
        if (currentLED == 8) {direction = -1;}
        if (currentLED == 0) {direction = 1;}
}
