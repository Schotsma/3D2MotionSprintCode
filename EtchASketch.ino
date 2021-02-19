/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 
//This code uses the potentiometer control code referenced from Scott Fitzgerald, however it has been adjusted and changed into my own code for a Etch a Sketch using two potentiometers and two servo motors that makeup a arm.

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo2; //named my second servo myservo2
// twelve servo objects can be created on most boards

int potpin = 0; //this is the analog pin that is being used
int potpin2 = A1;//reads the value of a1 pin
int val = 0;    // variable to store the servo position
int val2 = 0;    // variable to store the servo position

void setup() {
   
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10); //attached my second servo to pin 10
}

void loop() {
  val = analogRead(potpin);
  val2 = analogRead(potpin2);//this is the vairable foe the 
  val =map(val, 0, 1023, 0, 180);//a range between 90 and 180 is mapped so that the mechanical chopsticks can not go any further in and break each other
  val2 =map(val2, 0, 1023, 0, 180);//a range between 90 and 180 is mapped so that the mechanical chopsticks can not go any further in and break each other
  myservo.write(val);//the position of the first servo is 180 subtract the value so that it mirrors the other servo motor
  myservo2.write(val2);//this uses the second potentiometer to write the value of the motor angle
  delay(15);
}
  
