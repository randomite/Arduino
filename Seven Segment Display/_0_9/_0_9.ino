int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;

void setup() {
  // put your setup code here, to run once:

pinMode (led1, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led4, OUTPUT);
pinMode (led5, OUTPUT);
pinMode (led6, OUTPUT);
pinMode (led7, OUTPUT);
}

void loop() {
//0
PORTD = B10000000;
delay(1000);
//1
PORTD = B11110010;
delay(1000);
//2
PORTD = B01001000;
delay(1000);
//3
PORTD = B01100000;
delay(1000);
//4
PORTD = B00110010;
delay(1000);
//5
PORTD = B00100100;
delay(1000);
//6
PORTD = B00000100;
delay(1000);
//7
PORTD = B11110000;
delay(1000);
//8
PORTD = B00000000;
delay(1000);
//9
PORTD = B00100000;
delay(1000);

}
