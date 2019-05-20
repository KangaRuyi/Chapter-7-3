#include <Servo.h> 

Servo servoLeft;
Servo servoRight;

void setup() {
  pinMode (7, INPUT);
  pinMode (5, INPUT);

  tone (4, 3000, 1000);
  delay (1000);
  servoLeft.attach(13);
  servoRight.attach(12); 

}

void loop(){
  
  byte wLeft = digitalRead (5);
  byte wRight = digitalRead (7);

  if ((wLeft == 1) && (wRight == 1))
  {
  servoLeft.writeMicroseconds (1550);
  servoRight.writeMicroseconds (1300);
  delay(5000);
  }
  else if (wLeft == 0)
  {
    tone (4, 1047,1000);
    delay(1000);
    servoLeft.writeMicroseconds (1525);
    servoRight.writeMicroseconds (1400); 
    delay(5000); 
  }
  else if (wRight == 0)
  {
  servoLeft.writeMicroseconds (1570);
  servoRight.writeMicroseconds (1300);
  delay(5000);
  }
  else
  {
    forward (20);
  }
}

void forward (int time)
{
  servoLeft.writeMicroseconds (1700);
  servoRight.writeMicroseconds(1300);
  delay(time);
}
void turnLeft (int time)
{
  servoLeft.writeMicroseconds (1300);
  servoRight.writeMicroseconds(1300);
  delay(time);
}
void turnRight (int time)
{
  servoLeft.writeMicroseconds (1700);
  servoRight.writeMicroseconds(1700);
  delay(time);
}
void backward (int time)
{
  servoLeft.writeMicroseconds (1300);
  servoRight.writeMicroseconds(1700);
  delay(time);
  
}


