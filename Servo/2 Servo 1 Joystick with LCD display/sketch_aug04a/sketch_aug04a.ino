
// include the library code:
#include <LiquidCrystal.h>

#include <Servo.h>

const int servo1 = 3;       // first servo
const int servo2 = 10;       // second servo
const int joyH = 3;        // L/R Parallax Thumbstick
const int joyV = 4;        // U/D Parallax Thumbstick

int servoVal;           // variable to read the value from the analog pin

Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 7, 6, 2);

void setup() {

  // Servo  
  myservo1.attach(servo1);  // attaches the servo
  myservo2.attach(servo2);  // attaches the servo

  // Inizialize Serial
  Serial.begin(9600);



  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, fish!");

}


void loop(){

    // Display Joystick values using the serial monitor
    outputJoystick();

    // Read the horizontal joystick value  (value between 0 and 1023)
    servoVal = analogRead(joyH);          
    servoVal = map(servoVal, 0, 1023, 0, 180);     // scale it to use it with the servo (result  between 0 and 180)

    myservo2.write(servoVal);                         // sets the servo position according to the scaled value    

    // Read the horizontal joystick value  (value between 0 and 1023)
    servoVal = analogRead(joyV);           
    servoVal = map(servoVal, 0, 1023, 70, 180);     // scale it to use it with the servo (result between 70 and 180)

    myservo1.write(servoVal);                           // sets the servo position according to the scaled value

    delay(15);                                       // waits for the servo to get there

}

/**
* Display joystick values
*/
void outputJoystick(){

    Serial.print(map(servoVal, 0, 1023, 0, 180));
    Serial.print(" horizontal   "); 
    Serial.print(map(servoVal, 0, 1023, 70, 180));
    Serial.println (" vertical");



  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);



    lcd.print(map(servoVal, 0, 1023, 0, 180));
    lcd.print(" horizontal   "); 
    lcd.print(map(servoVal, 0, 1023, 70, 180));
    lcd.println (" veritcal");

}
