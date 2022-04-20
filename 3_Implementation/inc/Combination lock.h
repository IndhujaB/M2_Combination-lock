/**
 * @file Combination_Lock.h
 * @author Indhuja.B (indhuja.18ece@sonatech.ac.in)
 * @brief Door locking using password
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <Servo.h> 
/**
 * @brief servo motor is rotating 90degree
  @return Used to blink the leds when the servo motor is rotated
 */
#include <Keypad.h>

/**
 * @brief keypad  is used type the password
  @return used to visible the password to users. 
 */
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