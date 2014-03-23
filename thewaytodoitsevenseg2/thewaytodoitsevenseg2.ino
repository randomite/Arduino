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

//split between tens and ones digits

int onesOne [] = {
  13, 12, 8, 10, 5};
int onesOnePinCount = 5; 


int onesTwo [] = {
  12, 7};
int onesTwoPinCount = 2; 


int onesThree [] = {
  12, 10};
int onesThreePinCount = 2; 


int onesFour [] = {
  13, 10};
int onesFourPinCount = 2; 


int onesFive [] = {
  9, 10};
int onesFivePinCount = 2; 


int onesSix [] = {
  9};
int onesSixPinCount = 1; 


int onesSeven [] = {
  12, 8, 10, 5};
int onesSevenPinCount = 4; 


int onesEight [] = {
  };
int onesEightPinCount = 0; 


int onesNine [] = {
  10, 5};
int onesNinePinCount = 2; 




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

  for (int i = 0; i < 10; i++) 
  {
    for(int j = 0; j < 10; j++)
     { 
        printLeft(i); 
        printRight(j);  
     } 
  }
  
  /*  
  for (int i=0; i<tensOnePinCount; i++){
     digitalWrite(tensOne[i], HIGH);
  }
 */


/* 
switch (tensOne){
  case 0: 
    digitalWrite();
  case 1:
    digitalWrite();
  case 2:
    digitalWrite();
  }  
*/


}


printLeft(int i) {
 //Seven segment left displays i ( 0 <= i <= 9)
 if ( i < 0 || i > 9) {
   return;
 }
 //set right 7-segment to i
}

printRight(int j) {
 //Seven segment right displays j ( 0 <= i <= 9)
}


