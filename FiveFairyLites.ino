
#include <FiveFairyLites.h>
void setup() {
  FiveFL.init(2, 3, 4); //set port as output for 3 LEDs

}

void loop() {
  FiveFL.turnPMWOff (0,1,300);             //turn the blinkers off
  FiveFL.blinkThreeLeds(2,3,4, 500, 100);   //blink 3 LEDs
  FiveFL.turnThreeOff(2,3,4,100);          //turn blinking LEDs off
  FiveFL.fadeTwoLeds(0,1);    //fade 2 LEDs
}
