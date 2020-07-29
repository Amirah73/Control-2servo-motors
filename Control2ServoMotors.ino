

#include <Servo.h>
// Create servo objects
Servo Servo1, Servo2;

void setup()
{
// Initialize Servos
Servo1.attach(2);
Servo2.attach(3);
}

void loop() {
Servo1.write(180); // Set Servo 1 to 180 degrees
Servo2.write(90); // Set Servo 2 to 90 degrees 
}
  





