void setup() {
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
pinMode(A3, OUTPUT);
pinMode(A4, OUTPUT);
pinMode(A5, OUTPUT);


}

void loop() {
 counter(); 
}


void counter(){
zero();
  delay(990);
one();
  delay(990);
two();
  delay(990);
three();
  delay(990);
four();
  delay(990);
five();
  delay(990);
six();
  delay(990);
seven();
  delay(990);
eight();
  delay(990);
nine();
  delay(990);
ten();
  delay(990);
eleven();
  delay(990);
twelve();
  delay(990);
thirteen();
  delay(990);
fourteen();
  delay(990);
fifteen();
  delay(990);
sixteen();
  delay(990);
seventeen();
  delay(990);
eighteen();
  delay(990);
nineteen();
  delay(990);
twenty();
  delay(990);  


}
 
void off(){ //turns off all lights
digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, HIGH);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, HIGH);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);


digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void zero(){
digitalWrite(A0, LOW);
digitalWrite(A1, LOW);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,LOW);
digitalWrite(2, LOW);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void one(){ //turns on
digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);
delay(10);
}
 
void two(){
digitalWrite(A0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(A3,LOW);
digitalWrite(2, HIGH);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void three(){
digitalWrite(A0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void four(){
digitalWrite(A0, HIGH);
digitalWrite(A1, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}


void five(){
digitalWrite(A0, LOW);
digitalWrite(A1, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void six(){
digitalWrite(A0, LOW);
digitalWrite(A1, LOW);
digitalWrite(4, HIGH);
digitalWrite(3, LOW);
digitalWrite(A3,LOW);
digitalWrite(2, LOW);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void seven(){
digitalWrite(A0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void eight(){
digitalWrite(A0, LOW);
digitalWrite(A1, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(A3,LOW);
digitalWrite(2, LOW);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
}
 
void nine(){
digitalWrite(A0, LOW);
digitalWrite(A1, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, HIGH);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
delay(10);
} 

void ten(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(9, LOW);
digitalWrite(4, LOW);
digitalWrite(8, HIGH);
digitalWrite(10,LOW);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  
  delay(10);
}  
  
void eleven(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
  
  delay(10);
}  
  
void twelve(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(10,LOW);
digitalWrite(7, HIGH);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  
  delay(10);
  
}

void thirteen(){
  
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(10,HIGH);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  delay(10);
  
}

void fourteen(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(10,HIGH);
digitalWrite(7, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
  
  delay(10);

}
  
void fifteen(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
digitalWrite(10,HIGH);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  
  delay(10);
}  
  
void sixteen(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(9, HIGH);
digitalWrite(8, LOW);
digitalWrite(10,LOW);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  
  delay(10);

}
  
void seventeen(){
  
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
digitalWrite(10,HIGH);
digitalWrite(7, LOW);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
  delay(10);
  
}  
  
void eighteen(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(10,LOW);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  
  delay(10);
  
}  
  
void nineteen(){
  digitalWrite(A0, HIGH);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, HIGH);
digitalWrite(A3,HIGH);
digitalWrite(2, LOW);
digitalWrite(0, HIGH);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(9, LOW);
digitalWrite(8, LOW);
digitalWrite(10,HIGH);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  
  delay(10);
  
}  
  
 void twenty(){
  digitalWrite(A0, LOW);
digitalWrite(A1, HIGH);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(A3,LOW);
digitalWrite(2, HIGH);
digitalWrite(0, LOW);
digitalWrite(1, HIGH);

digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(9, LOW);
digitalWrite(8, HIGH);
digitalWrite(10,LOW);
digitalWrite(7, LOW);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
  
  delay(10);
  
}  
  

 
