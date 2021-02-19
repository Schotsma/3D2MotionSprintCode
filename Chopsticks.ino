
//This code uses the potentiometer control code referenced from Scott Fitzgerald, however there has been additional elements added below to make it different

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
Servo myservo2; //named my second servo myservo2
// twelve servo objects can be created on most boards

int potpin = 0; //this is the analog pin that is being used
int val = 180;    // variable to store the servo position

void setup() {
   
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(10); //attached my second servo to pin 10
}

void loop() {
  val = analogRead(potpin);
  val =map(val, 0, 1023, 95, 180);//a range between 90 and 180 is mapped so that the mechanical chopsticks can not go any further in and break each other
  myservo.write(180 - val);//the position of the first servo is 180 subtract the value so that it mirrors the other servo motor
  myservo2.write(val);
  delay(15);
}
  
