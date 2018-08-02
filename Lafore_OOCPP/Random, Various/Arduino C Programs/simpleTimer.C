/*
 * Simple Timer
 * Demonstrates the use of a non-core Arduino Library and Serial Communications
 * Joshua Pierce
 */

#include <SimpleTimer.h>

SimpleTimer timer; //Constructor for the timer function from SimpleTimer

boolean currentLEDState;
int ledPin = 13;

void setup(){
  currentLEDState = false;
  pinMode(ledPin, OUTPUT);
  timer.setInterval(120, blink); //sets a 120 ms pause without calling a pause() function
}
void loop(){
  timer.run();
}

void blink(){
  if(!currentLEDState){
    digitalWrite(ledPin, HIGH); 
  }
  else {
    digitalWrite(ledPin, LOW);
    currentLEDState = !currentLEDState; //invert boolean
  }
}
