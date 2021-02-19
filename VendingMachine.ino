/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 
//I used this example code as a basis for my preliminary prints and used a button to start and stop the motor. The button code was also made by myself and I referenced it from a previous project.
//I added another button to my code from the ButtonFlag code. These two buttons control the different directions of the motor. 

int buttonPin = 6; //button to open the servo motor one way is on pin 6
int buttonPin2 = 7; //button to open the servo another way is on pin 7

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);//I referenced this code from my ButtonFlag code
  pinMode(buttonPin2, INPUT_PULLUP); //this code will monitor the input for button 2 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    if (digitalRead(buttonPin) == LOW) {
    myservo.write(10);              // tell servo to go to position in variable 'pos'
    delay(500); 
    myservo.write(120);              // tell servo to go to position in variable 'pos'
    delay(500);
             } 
    if(digitalRead(buttonPin2) == LOW) {
    myservo.write(180);              // tell servo to go to position in variable 'pos'
    delay(500); 
    myservo.write(120);              // tell servo to go to position in variable 'pos'
    delay(500);
    }
}
  
