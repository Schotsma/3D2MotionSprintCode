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
   {
if (digitalRead(buttonPin) ==LOW) {
for(pos = 0; pos < 80; pos += 10) // if the position is less than 180, add more and itgoes from 0 degrees to 180 degrees

{ // in steps of 1 degree

myservo.write(pos); // servo goes to the pos variable

delay(40); // delay for 40ms

}

for(pos = 80; pos>=1; pos-=10) // if the position is greater than or equal to 1 then subtract until its not

{

myservo.write(pos); // servo heads back to the other position

delay(40); // servo waits 40ms 
}
}
}
}
  
