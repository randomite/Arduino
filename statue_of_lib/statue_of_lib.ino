void setup() {
   pinMode(13, OUTPUT); 
   pinMode(7, OUTPUT); 
   pinMode(1, OUTPUT); 
   
   
   
}




void loop() {
  
  
  digitalWrite(13, LOW);
  delay(1500);
  digitalWrite(13, HIGH);
  
  
  digitalWrite(1, LOW);
  delay(1500);
  digitalWrite(1, HIGH);
  
  digitalWrite(7, LOW);
  delay(1500);
  digitalWrite(7, HIGH);
  
  
  
  digitalWrite(7, LOW);
   digitalWrite(1, LOW);
  delay(1500);
  digitalWrite(7, HIGH);
   digitalWrite(1, LOW);
  
  
  
  digitalWrite(7, LOW);
   digitalWrite(13, LOW);
  delay(1500);
  digitalWrite(7, HIGH);
   digitalWrite(13, LOW);
  
}
  
