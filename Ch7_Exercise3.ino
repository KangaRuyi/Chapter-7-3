#include <Servo.h> 

Servo servoLeft;
Servo servoRight;

void setup()
{
  pinMode (10, INPUT); pinMode(9,OUTPUT);
  pinMode(3,INPUT); pinMode(2,OUTPUT);

  tone(4,3000,1000);
  delay(1000);

  servoLeft.attach(13);
  servoRight.attach(12);
}

void loop()
{
  int irLeft = irDetect(9, 10, 38000);
  int irRight = irDetect(2, 3, 38000);

  if ((irLeft == 0) && (irRight == 0))
  {
    servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1300);
   delay(10000);
    
  }
  else if (irLeft == 0)
  {
   servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1300);
   delay(10000);
    
  }
  else if (irLeft == 0)
  {
   servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1300);
   delay(10000);
   
  }
  else 
  {
    servoLeft.writeMicroseconds(1500);
    servoRight.writeMicroseconds(1500);
    delay(100);
  }
}

int irDetect (int irLedPin, int irReceiverPin, long frequency)
{
  tone (irLedPin, frequency, 8);
  delay(1);
  int ir = digitalRead (irReceiverPin);
  delay(1);
  return ir;
}

void forward (int time)
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(time);
}

void turnLeft (int time)
{
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(time);
}

void turnRight(int time)
{
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(time);
}

void backward (int time)
{
  servoLeft.writeMicroseconds(1450);
  servoRight.writeMicroseconds(1730);
  delay(time);
}

