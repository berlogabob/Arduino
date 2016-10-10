#define pin_btn_rezhim_a 2
#define DELAY_TIME 1000

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  while (digitalRead(pin_btn_rezhim_a) == LOW) {
    for (int i = 0; i < 1000; ++i) {
      digitalWrite(led, HIGH);
      delay(DELAY_TIME);
      digitalWrite(led, LOW);
      delay(DELAY_TIME);
    }
  }
}
