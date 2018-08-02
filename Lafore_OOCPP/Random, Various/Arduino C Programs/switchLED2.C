//SwitchLED2
//Program to Communicate with Processing

const int switchPin = 2;
int switchState = 0;
int inByte = 0;

void setup(){
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  sayHello();
}

void loop(){
  //if a valid byte is received from processing, read the digital in
  if(Serial.available() > 0) {
    //get incoming byte
    inByte = Serial.read();
    switchState = digitalRead(switchPin);

    //send the switch state to Arduino
    Serial.write("0");
    Serial.write(switchState);
  }
}

void sayHello() {
  while(Serial.available() <= 0) {
    Serial.print('Z'); //send a capital Z to Arduino to say Hello
    delay(200);
  }
}
