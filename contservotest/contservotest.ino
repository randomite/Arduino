#include <Servo.h>
Servo myServo;
 
void setup() { 
  myServo.attach(9);
  myServo.writeMicroseconds(100);  // Stop 
} 

void loop() { } 
