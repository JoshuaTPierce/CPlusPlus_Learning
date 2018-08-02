
const int switchPin = 2; // pin of the digital input related to the switch

const int ledPin = 13; // pin of the board built-in LED

int switchState = 0; // storage variable for current switch state

int lastSwitchState= LOW;

// variables related to the debouncing system
long lastDebounceTime = 0;

long debounceDelay = 50;


void setup() {

	pinMode(ledPin, OUTPUT); // the led pin is setup as an output

	pinMode(switchPin, INPUT); // the switch pin is setup as an input
}

void loop(){

	// read the state of the digital pin
	int readInput = digitalRead(switchPin);
	
	// if freshly read state is different than the last debounced value
	if (readInput != lastSwitchState){
		// reset the debounce counter by storing the current uptime ms
		lastDebounceTime = millis();
}

	// if the time since the last debounce is greater than the debounce delay
	if ( (millis() - lastDebounceTime) > debounceDelay ){
		// store the value because it is a debounced one and we are safe
		switchState = readInput;
}
		// store the last read state for the next loop comparison purpose
		lastSwitchState = readInput;

	// modify the LED state according to the switch state
	if (switchState == HIGH) { 
		// test if the switch is pushed or not
		digitalWrite(ledPin, HIGH); // turn the LED ON if it is currently pushed
}
	else {
		digitalWrite(ledPin, LOW); // turn the LED OFF if it is currently pushed
	}
}

/*
We are using millis() here in order to measure the time. We already talked about
this time function in Chapter 4, Improve Programming with Functions, Math, and Timing.

Then, at each loop() cycle, I read the input but basically I don't store it in the
switchState variable that is used to the test to turning ON or OFF the LED.

Basically, I used to say that switchState is the official variable that I don't want to
modify before the debounce process. Using other terms, I can say that I'm storing
something in switchState only when I'm sure about the state, not before.

So I read the input at each cycle and I store it in readInput. I compare readInput
to the lastSwitchState variable that is the last read value. If both variables are
different, what does it mean? It means a change occurs, but it can be a bounce
(unwanted event) or a real push. Anyway, in that case, we reset the counter by
putting the current time provided by millis() to lastDebounceTime.

Then, we check if the time since the last debounce is greater than our delay. If it is,
then we can consider the last readInput in this cycle as the real switch state and we
can store it into the corresponding variable. In the other case, we store the last read
value into lastSwitchState to keep it for the next cycle comparison.

This method is a general concept used to smooth inputs.
We can find here and there some examples of software debouncing used not only
for switches but also for noisy inputs. In everything related to a user-driven event,
I would advise using this kind of debouncer. But for everything related to system
communication, debounce can be very useless and even a problem, because we can
ignore some important messages and data. Why? Because a communication system
is much faster than any user, and if we can use 50 ms as the time during which
nothing is considered as a real push or a real release with users, we cannot do
that for very fast chipset signals and other events that could occurs between
systems themselves.
*/