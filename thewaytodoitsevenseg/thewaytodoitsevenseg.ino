int tensZero [] = {
  3};
int tenZeroPinCount = 1;


int tensOne [] = {
 A0, A1, 3, A3, 0}; 
int tensOnePinCount = 5;


int tensTwo [] = {
 A1, 2};
int tensTwoPinCount = 2; 


int tensThree [] = {
  A1, A3};
int tensThreePinCount = 2;   


int tensFour [] = {
  A0, A3, A3, 0};
int tensFourPinCount = 4;  


int tensFive [] = {
  4, A3};
int tensFivePinCount = 2;  


int tensSix [] = {
  4};
int tensSixPinCount = 1;  


int tensSeven [] = {
  A1, A3, 3, 0};
int tensSevenPinCount = 4;


int tensEight [] = {
  };
int tensEightPinCount = 0;


int tensNine [] = {
  A3};
int tensNinePinCount = 1;


void setup(){
  
pinMode(0, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(A0, OUTPUT);
pinMode(A1, OUTPUT);
pinMode(A2, OUTPUT);
pinMode(A3, OUTPUT);
pinMode(A4, OUTPUT);
pinMode(A5, OUTPUT);
  
  
}

void loop(){
   
  for (int i=0; i<tensOnePinCount; i++){
     digitalWrite(tensOne[i], HIGH);
 
  }



  
}
