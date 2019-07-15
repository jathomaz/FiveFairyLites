/*****  Five Fairy Lites Header
/*
 
  Author: Jackie Thomas
  
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
 
  *//*THIS IS FOR Light extravaganza WITH 5 FAIRY LIGHTS
burn bootload 8 MHZ first 
 *          ATTINY85 PIN PORT PIN           ATTINY85 PIN  PORT PIN
 *          1            RESET                 8           3.3V 
 *          2            A3   PIN 3 LED3       7     A1    2 LED2     
 *          3            A2   PIN 4 LED2       6     PWM   1 LED6
 *          4               GND                5     PWM   0 LED5
 */
#ifndef FiveFairyLites_h
#define FiveFairyLites_h
#include <Arduino.h>
class FiveFairyLites {
	public:
	  int ledPin2; 
	  int ledPin3; 
	  int ledPin4; 
	  int ledPin5; 
	  int ledPin6;
	  int timeDelay;
	  int shortTimeDelay;
	  
	  
	  void init(int ledPin2, int ledPin3, int ledPin4);
	  void turnPMWOff(int ledPin5, int ledPin6, int shortTimeDelay);
	  void blinkThreeLeds(int ledPin2, int ledPin3, int ledPin4, int timeDelay, int shortTimeDelay);
	  void turnThreeOff(int ledPin2, int ledPin3, int ledPin4, int shortTimeDelay);
	  void fadeTwoLeds(int ledPin5, int ledPin6);   
};
extern FiveFairyLites FiveFL;  // fairy lites object
#endif