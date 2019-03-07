//2019.2.28
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 100;    // variable to store the servo position
int buttonBpin = 8;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myservo.attach(9);  // attaches the servo on pin 9 to the servo object
pinMode(buttonBpin, INPUT_PULLUP);
delay(100);
}

void loop() {               // put your main code here, to run repeatedly:
  if (digitalRead(buttonBpin) == LOW) { 
    pos = 0;
    myservo.write(pos);     // tell servo to go to position in variable 'pos'                           // waits 15ms for the servo to reach the position
  } 
  else { // goes from 180 degrees to 0 degrees
    pos = 100;
    myservo.write(pos);                         
  }
}
