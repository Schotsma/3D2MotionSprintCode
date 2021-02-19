/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 
//I used this example code as a basis for my preliminary prints and used a button to start and stop the motor. The button code was also made by myself and I referenced it from a previous project.
//I added another button to my code from the ButtonFlag code. These two buttons control the different directions of the motor. 
//this is further adjusted code that uses to buttton to add to the position value making one button control the clockwise direction and one control the counter-clockwise direction
int buttonPin = 6; //button to open the servo motor one way is on pin 6
int buttonPin2 = 7; //button to open the servo another way is on pin 7

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  pinMode(buttonPin, INPUT);//I referenced this code from my ButtonFlag code
  pinMode(buttonPin2, INPUT); //this code will monitor the input for button 2 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
    while (digitalRead(buttonPin) == LOW && pos < 180) { //a while loop waits for the button to be pressed and if the position is less than 180, it turn
    pos ++; //adds to the position while it is less than 180
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15); 
             } 
    while (digitalRead(buttonPin2) == LOW && pos > 0) {//another while loop for when the position is greater than zero to move the position back in the other direction
    pos --;
    myservo.write(pos);// tell servo to go to position in variable 'pos' which is being added to in ther previous line
    delay(15);
    }
}
  
