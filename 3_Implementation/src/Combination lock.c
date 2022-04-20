#include <Servo.h>
#include <Keypad.h>
/**
 * @file Combination lock.
 * @author Indhuja.B (indhuja.18ece@sonatech.ac.in)
 * @brief door locking using password
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
motor.attach(7);
digitalWrite(Redled, HIGH);
digitalWrite(Greenled, LOW);
motor.write(0);
}





void loop()
{
char key = keypad.getKey();
if (key == '*' || key == '#')
{
position = 0;
digitalWrite(Redled, HIGH);
digitalWrite(Greenled, LOW);
motor.write(0);
 Serial.println(position);
}
if (key == password[position])
{
position ++;
  Serial.println(position);
}
if (position == 5)
{
digitalWrite(Redled, LOW);
digitalWrite(Greenled, HIGH);
motor.write(90);
}
delay(100);
}