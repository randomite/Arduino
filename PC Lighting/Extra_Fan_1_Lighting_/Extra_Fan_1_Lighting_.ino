void setup() {               
   pinMode(9, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(1, OUTPUT);
   pinMode(A0, OUTPUT); 
   pinMode(A2, OUTPUT);
   pinMode(A5, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(8, OUTPUT);
  

}
void loop() {

  
  digitalWrite (9, HIGH);    
  digitalWrite (7, HIGH);
  digitalWrite (1, HIGH);
  digitalWrite (8, HIGH);
  
    delay(100);
  digitalWrite (A2, HIGH);
    delay(100); 
  digitalWrite (A2, LOW);  
  
  
 delay(100);
  digitalWrite (A0, HIGH);
    delay(100); 
  digitalWrite (A0, LOW);  
  
delay(100);
  digitalWrite (A5, HIGH);
    delay(100); 
  digitalWrite (A5, LOW);  
    

delay(100);
  digitalWrite (10, HIGH);
    delay(100); 
  digitalWrite (10, LOW);  
   
  
}
