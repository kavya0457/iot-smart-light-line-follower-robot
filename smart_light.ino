// led_blink.ino
// Basic LED Blinking Program

int ledPin = 13; // built-in LED on most Arduino boards

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // turn the LED on
  delay(1000);                 // wait 1 second
  digitalWrite(ledPin, LOW);   // turn the LED off
  delay(1000);                 // wait 1 second
}
