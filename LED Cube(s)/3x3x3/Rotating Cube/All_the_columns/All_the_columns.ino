void setup() {               
   pinMode(2, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT); 
   pinMode(7, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(A5, OUTPUT);
    pinMode(A0, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(A4, OUTPUT);//top level
    pinMode(A2, OUTPUT);//middle level
    pinMode(A1, OUTPUT);// bottom level
}

void loop(){
    
 
  digitalWrite(A2,HIGH);
  
  digitalWrite(2,HIGH);
    delay(100);
  digitalWrite(2,LOW);
    delay(100);
    
    
  digitalWrite(6, HIGH);
    delay(100);
  digitalWrite(6, LOW);
    delay(100);
  digitalWrite(10, HIGH);
    delay(100);
  digitalWrite(10, LOW);
    delay(100);
    
    
  digitalWrite(7,HIGH);
    delay(100);
  digitalWrite(7,LOW);
    delay(100);
    
    
  digitalWrite(11, HIGH);
    delay(100);
  digitalWrite(11, LOW);
    delay(100);
    
    
  digitalWrite(A0, HIGH);
    delay(100);
  digitalWrite(A0, LOW);
    delay(100); 
    
    
  digitalWrite(A5, HIGH);
    delay(100);
  digitalWrite(A5, LOW);
    delay(100);
    
    
  digitalWrite(4, HIGH);
    delay(100);
  digitalWrite(4, LOW);
    delay(100);
    
 digitalWrite(2, HIGH);
    delay(100);
  digitalWrite(2, LOW);
    delay(100);    
    
  digitalWrite(A2, LOW);
  digitalWrite(A4, HIGH);
  digitalWrite(A1, HIGH);

  digitalWrite(2, HIGH);
    delay(100);
  digitalWrite(2, LOW);
    delay(100);
    
  digitalWrite(4, HIGH);
    delay(100);
  digitalWrite(4, LOW);
    delay(100);  
   
  digitalWrite(A5, HIGH);
    delay(100);
  digitalWrite(A5, LOW);
    delay(100);

  digitalWrite(A0, HIGH);
    delay(100);
  digitalWrite(A0, LOW);
    delay(100);  
   
  digitalWrite(11, HIGH);
    delay(100);
  digitalWrite(11, LOW);
    delay(100);  

  digitalWrite(7, HIGH);
    delay(100);
  digitalWrite(7, LOW);
    delay(100);
    
  digitalWrite(10, HIGH);
    delay(100);
  digitalWrite(10, LOW);
    delay(100);  
   
  digitalWrite(6, HIGH);
    delay(100);
  digitalWrite(6, LOW);
    delay(100);
    
  digitalWrite(2, HIGH);
    delay(100);
  digitalWrite(2, LOW);
    delay(100);    

digitalWrite(A2, HIGH);
digitalWrite(A4, LOW);
digitalWrite(A1, LOW);
    
   
    
}

