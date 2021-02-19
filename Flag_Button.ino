/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 
//I used this example code as a basis for my preliminary prints and used a button to start and stop the motor. The button code was also made by myself and I referenced it from a previous project.

int buttonPin = 6; //motor start/stop button on pin 5

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);//I referenced this code from 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    if (digitalRead(buttonPin) == LOW) {
    myservo.write(80);              // tell servo to go to position in variable 'pos'
    delay(200); 
    myservo.write(120);              // tell servo to go to position in variable 'pos'
    delay(200);
             } 
}
  
