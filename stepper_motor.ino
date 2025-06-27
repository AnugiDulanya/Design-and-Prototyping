// Include the Arduino Stepper Library
#include <Stepper.h>

// Number of steps per output rotation
const int stepsPerRevolution = 200;
int motor1 = 11;
int motor2 = 12;


// Create Instance of Stepper library
Stepper myStepper1(stepsPerRevolution, 2, 3, 4, 5);
Stepper myStepper2(stepsPerRevolution, 6, 7, 8, 9);


void setup()
{
  // set the speed at 60 rpm:
  myStepper1.setSpeed(150);
  myStepper2.setSpeed(150);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop()
{
  // step one revolution in one direction:


  // step one revolution in the other direction:
  digitalWrite(motor1, HIGH);
  delay(1000);

  myStepper1.step(-stepsPerRevolution);
  myStepper2.step(-stepsPerRevolution);



  //	delay(t);
}
