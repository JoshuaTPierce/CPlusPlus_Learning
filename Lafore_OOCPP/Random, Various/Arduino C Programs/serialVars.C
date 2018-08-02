/* Serial Variable Communications.C
 * A simple program to demonstrate variables in C
 * and continue exploring serial communications.
 * 
 * Compile into a binary file to execute on Arduino.
 * Arduino returns output to serial communications window in Arduino IDE
 */

 //Variable Declarations

 bool myBoolean;
 char myChar;
 int myInt;
 float myFloat;

//****Setup (Start Serial Transmission, Initialize Vars)

void setup(){
    Serial.begin(9600);
    myChar = 'A';
    myInt = 1;
    myFloat = 5.6789
}

//*****Loop Definition

//Check boolean value

void loop() {
    if (myBoolean) {             //if boolean = checks for equality
        Serial.println("myBoolean is true.") //ln adds carriage return
} 
    else {
        Serial.println("myBoolean is false.")
}

    Serial.print("myChar is currently ");
    Serial.write(myChar);
    Serial.println();

    Serial.print("myInt is currently ");
    Serial.print(myInt);
    Serial.println();

    Serial.print("Then, here is myChar + myInt : ");
    Serial.write(myChar + myInt);
    Serial.println();

    Serial.print("myFloat is: ");
    Serial.print(myFloat);
    Serial.println();

    delay(5000) //delay five seconds before loop runs again
}