# **COMBINATION LOCK**

## INTRODUCTION:

Combination locks have been there for decades and many products such as briefcase, doors are protected by them. There is keypad module for atmega328 that can help us to set combination password for various things, you may also use RFID cards to provide access and in this tutorial, I am going to explain how you can make push button combination lock.

The project will help us to set combination password and you can set password by using 1-6 digits, When you will push the buttons, and the combination is matched the green LED will be turned on and if the combination is not matched the Red LED will indicate that the password is wrong.

The push buttons can be interfaced by atmega328 using pull down configuration i.e. button will give 5V when pressed and 0V when released and pull up configuration i.e. when button is pressed it will give 0V and when released it will give 5V. We are using pull up configuration and we are not using any external resistor instead we are using atmega328 internal pull up resistor.

Often times, we need to secure a room at our home or office (perhaps a secret dexter’s laboratory) so that no one can access the room without our permission and ensure protection against theft or loss of our important accessories and assets.


## COMPONENTS:

* Atmega328.

* Positional Micro Servo.

* Red LED.

* Green LED.

* 1 kΩ Resistor.

* Keypad.


## Introduction to ATMega Microcontroller:

ATMega Microcontrollers belong to the AVR family of microcontrollers and is manufactured by Atmel Corporation. An ATMega Microcontroller is an 8-bit microcontroller with Reduced Instruction Set (RISC) based Harvard Architecture.It has standard features like on-chip ROM (Read Only Memory), Data RAM (Random Access Memory), data EEPROM (Electrical Erasable Programmable Read Only Memory), Timers and Input / Output Ports, along with extra peripherals like Analog to Digital Converters (ADC), Serial Interface Ports etc. They have 120 and more instruction set and program memory ranges from 4K to 256K Bytes.

ATmega328P is a high performance yet low power consumption 8-bit AVR microcontroller that's able to achieve the most single clock cycle execution of 131 powerful instructions thanks to its advanced RISC architecture. It can commonly be found as a processor in Arduino boards such as Arduino Fio and Arduino Uno.


## SERVO MOTOR:

A servomotor (or servo motor) is a rotary actuator or linear actuator that allows for precise control of angular or linear position, velocity and acceleration.[1] It consists of a suitable motor coupled to a sensor for position feedback. It also requires a relatively sophisticated controller, often a dedicated module designed specifically for use with servomotors.Servomotors are not a specific class of motor, although the term servomotor is often used to refer to a motor suitable for use in a closed-loop control system.


## VOLTAGE SOURCE:

A voltage source is a two-terminal device which can maintain a fixed voltage. An ideal voltage source can maintain the fixed voltage independent of the load resistance or the output current. However, a real-world voltage source cannot supply unlimited current. A voltage source is the dual of a current source


## LED:

A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons.


## PASSWORD: 5030.

## BENEFITS:

* Better access control.

* The security code cannot be seen.

* Remote updates.


## ADVANTAGES:

* No more keys.

* Convenience.

* Save time and money.

* High security.


## DISADVANTAGES:

* Keep the PIN safe and the lock clean.

* Power Failure.

* Limit the PIN Code Length.

* Code Hacking. 


## OBJECTIVES:

* Combinations locks are something that we can use in a lot of places.

* Codes can be reset in seconds, without removing the unit from the door.

* Combination locks are becoming popular in industry and many companies are using them to protect their valuables. 


## HIGH LEVEL REQUIREMENTS:

|RID|DESCRIPTION|STATUS|
|:--|:----------|:-----|
|HLR1|ATMEGA INTERFACING|IMPLEMENTED|
|HLR2|SERVO MOTOR INTERFCING|IMPLEMENTED|

## LOW LEVEL REQUIREMENTS:

|RID|DESCRIPTION|STATUS|
|:--|:----------|:-----|
|LLR1|ATMEGA INTERFACING WITH SERVO MOTOR|IMPLEMENTED|
|LLR2|SERVO MOTOR INTERFACING WITH LEDS|IMPLEMENTED|
|LLR3|KEYPADS INTERFACING WITH ATMEGA328|IMPLEMENTED|


## SWOT ANALYSIS:

## STRENGTH:

Smart device is feature that satisfys the pedple expectations and lead to positive OCR's

## WEAKNESS:

Qualities and identities of the smart product that lack satisfaction among customers.

## OPPORTUNITIES:

Potential changes that the gadgets can adopt enhance reputation.

## THREATS:

Difficulties that the product faces due to competitors to conduct with varying WiFi.


## CONCLUSION:

As the technology is going on developing day by day, we prefer things to be done automatically and in the same way our projects reduces the work to mankind.In this project, we tried to design a simple Smart Lock with secure and encrypted interactions with valid users. We used Atmel products (ATMEGA328) to emulate the lock hardware.This simple project simulates the real Smart Locks performances and their functionalities. We also gave an overview of the current state of Smart Locks.
















