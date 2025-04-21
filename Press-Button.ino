// Define pin numbers
const int buttonPin = 2;    // Push button connected to pin 2
const int ledPin = 4;      // Built-in LED on pin 13

int buttonState = 0;        // Variable to hold button state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Enable internal pull-up resistor
  pinMode(ledPin, OUTPUT);          // Set LED pin as output
}

void loop() {
  buttonState = digitalRead(buttonPin);  // Read the button state

  if (buttonState == LOW) {              // Button is pressed (LOW with pull-up)
    digitalWrite(ledPin, HIGH);          // Turn LED ON
  } else {
    digitalWrite(ledPin, LOW);           // Turn LED OFF
  }
}