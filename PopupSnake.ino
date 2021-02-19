
//I used this example code as a basis for my preliminary sprints and used a button to start and stop the motor. The button code was also made by myself and I referenced it from a previous project.
//I added another button to my code from the ButtonFlag code. These two buttons control the different directions of the motor. 

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

//Photosensor on pin 0, adjusted from a light sensor code I used last semester
int photocellPin = 0;

int light = 0; //this stores the current light value

void setup() {

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  // put your setup code here, to run once:
    Serial.begin(9600); //configure serial to talk to computer about the light values
}

void loop() {
    int reading = analogRead(photocellPin); //creates variable for the light sensor information
    
      // Light value code is below reading the A0 value
    light = analogRead(A0); // read and save value from light sensor
    
    {
       if(reading > 46) { // If it is bright then the snake falls away
       myservo.write(120);              // tell servo to go to position in variable 'pos'
      delay(500);
    }
    else if(reading > 31 && reading <45) { // If it is average light then the snake stays up a bit
          myservo.write(90);              // tell servo to go to position in variable 'pos'
      delay(500); 
    }
    else if(reading > 5 && reading < 30) { // If it is less than average light the snake is out more
          myservo.write(40);              // tell servo to go to position in variable 'pos'
      delay(500); 
    }
       else { // If it's dark the snake is completely up and ready to pounce
        myservo.write(20);              // tell servo to go to position in variable 'pos'
      delay(500); 
    }
}
}
  
