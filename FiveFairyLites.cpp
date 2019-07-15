/*
  FiveFairyLites.cpp - Driver for blinking 5 Strings of fairy lights with ATtiny85
  
 
  Author: Jackie Thomas
  
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
 */ 
  
#include "Arduino.h"
#include "FiveFairyLites.h"



void FiveFairyLites::init(int ledPin2, int ledPin3, int ledPin4)
{
	pinMode(ledPin2, OUTPUT);
	pinMode(ledPin3, OUTPUT);
	pinMode(ledPin4, OUTPUT);
}
void FiveFairyLites::turnPMWOff(int ledPin6, int ledPin5, int shortTimeDelay)
{
 analogWrite(ledPin6, 0);
 analogWrite(ledPin5, 0);
 delay(shortTimeDelay);	
}
void FiveFairyLites::blinkThreeLeds(int ledPin2, int ledPin3, int ledPin4, int timeDelay, int shortTimeDelay)
{
 digitalWrite (ledPin2, HIGH);  //turn all on high
 digitalWrite (ledPin3, HIGH);
 digitalWrite (ledPin4, HIGH);
 delay(timeDelay);
 digitalWrite (ledPin2, LOW);  //turn all on high
 digitalWrite (ledPin3, LOW);
 digitalWrite (ledPin4, LOW);
 delay(timeDelay);
 digitalWrite (ledPin2, HIGH);  //turn all on high
 delay(shortTimeDelay);
 digitalWrite (ledPin3, HIGH);
 delay(shortTimeDelay);
 digitalWrite (ledPin4, HIGH);
 delay(shortTimeDelay);
 delay(timeDelay);
 digitalWrite (ledPin4, LOW);  //turn all on low
 delay(shortTimeDelay);
 digitalWrite (ledPin3, LOW);
 delay(shortTimeDelay);
 digitalWrite (ledPin2, LOW);
 
 }
  void FiveFairyLites::turnThreeOff(int ledPin2, int ledPin3, int ledPin4, int shortTimeDelay)
  {
	  digitalWrite (ledPin2, LOW);  //turn all on low
	  digitalWrite (ledPin3, LOW);
	  digitalWrite (ledPin4, LOW);
	  delay(shortTimeDelay);
  }
 void FiveFairyLites::fadeTwoLeds(int ledPin6, int ledPin5)
{ 
	 for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {  // fade in from min to max in increments of 5 points:
		 // sets the value (range from 0 to 255):
		 analogWrite(ledPin6, fadeValue);
		 analogWrite(ledPin5, fadeValue);
		 delay(200); // wait for 30 milliseconds to see the dimming effect
	 }
	 
	 for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {  // fade out from min to max in increments of 5 points:
		 // sets the value (range from 0 to 255):
		 analogWrite(ledPin6, fadeValue);
		 analogWrite(ledPin5, fadeValue);
		 delay(200); // wait for 30 milliseconds to see the dimming effect
	 }
 }
FiveFairyLites FiveFL; //preinstatiated Oject