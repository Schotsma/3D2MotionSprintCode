
//This code uses the potentiometer control code from in class, however the range of use is changed so that the string of the claw is not broken by accident.


#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int potpin = 0; //this is the analog pin that is being used
int val = 0;    // variable to store the servo position

void setup() {
   
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potpin);
  val =map(val, 0, 1023, 0, 120);
  myservo.write(val);
  delay(15);
}
  
