#include <Servo.h>
#include <Keypad.h>

Servo motor;
char* password = "5030";  // change the password here, just pick any 3 numbers
int position = 0;
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};

byte rowPins[ROWS] = { 3,4,5,6 };
byte colPins[COLS] = { 8,9,10,11 };
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );
int Redled = 13;
int Greenled = 12;

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