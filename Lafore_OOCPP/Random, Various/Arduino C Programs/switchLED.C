/*
 * Pseudocode:
 * 1. Define the pins
 * 2. Define a variable for the current switch state
 * 3. Set up the LED pin as an output
 * 4. Set up the switch pin as an input
 * 5. Set up an infinite loop to:
 *  Read the input state and store it.
 *  If the input state is high, turn the LED on.
 *  Else, turn the LED off.
 */

/////////// Global Definitions

const int switchPin = 2; //pin of digital input related to the switch

const int ledPin = 13; //pin of the built-in board LED

int switchState = 0; //storage variable for current switch state

/////////// Setup Function

void setup() {
  pinMode(ledPin, OUTPUT); //set up LED as an output

  pinMode(switchPin, INPUT); //sets up switch as input
}

////////// Infinite Loop

void loop(){
  switchState = digitalRead(switchPin); //read the state of the digital pin (pin 2)

  if(switchState == HIGH) {
    digitalWrite(ledPin, HIGH); // turns on LED if digital read from switch is HIGH (on)
  }
  else{
    digitalWrite(ledPin, LOW); // unless the digital read is HIGH, LED remains off
  }
}