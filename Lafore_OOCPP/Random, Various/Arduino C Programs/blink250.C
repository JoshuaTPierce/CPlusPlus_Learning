/*
 * Blink 250ms (4hz) Program
 * Turns a LED connected to a digital pin 8 on for 250ms, then off for 1s, infinitely.
 * Joshua T Pierce
 */

//pin 8 is connected to our LED
int ledPin = 8;

//-----------The setup routine runs when the board is powered up or the reset switch is hit:

void setup(){
  pinMode(ledPin, OUTPUT);
}

//---------The Loop Routine that runs infinitely:

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}