//Ravin Sardal
void setup() {
  pinMode(0, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A5, OUTPUT);//bottom level
  pinMode(A0, OUTPUT);//top level
  
}

void loop() {
  
  digitalWrite(0, HIGH);
  digitalWrite(13, HIGH);
    delay(100);
  digitalWrite(0, LOW);
  digitalWrite(13, LOW);
  
  
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
    delay(100);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  
  
}  
