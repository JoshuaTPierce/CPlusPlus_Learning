/*
 * TalkingAndBlinking250 
 * Turns an LED connected to pin 8 on for 250ms, then off for 1s, infinitely.
 * In both steps, the board sends ddata to the console of the IDE for information purposes.
 * Joshua Pierce
 */

//Connect Pin 8 to LED with integer variable initialized to 8

int ledPin = 8

//----------------- Setup Routine

void setup(){
 pinMode(ledPin, OUTPUT); //initialize digital pin (variable above) as OUTPUT with pinMode() function
 Serial.begin(9600); //start serial comm by calling the begin() function from Serial, set at 9600 baud.
 }

//---------------- Loop Routine

void loop(){
  digitalWrite(ledPin, HIGH);  //turn on the LED

  Serial.print("pin ");    //print string by calling print() from Serial 
  Serial.print(ledPin);        //print ledPin's value (8) by calling print() from Serial
  Serial.println("is on.");      //print string by calling print() from Serial

  delay(250);                  //keeps LED on for 250ms

  digitalWrite(ledPin, LOW);   //turn off LED

  Serial.print("pin ");   
  Serial.print(ledPin);
  Serial.println("is off.");

  delay(1000);                 //keeps LED off for 1 second
}

//Click the little glass symbol in the top right of the arduino IDE to activate the Serial Monitor
//Remember to choose the same Baud rate assigned (9600 for now)
