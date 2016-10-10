#define pin_mosfet 3
#define pin_led 13
#define btn_1 7
void setup() {
  // put your setup code here, to run once:
  pinMode(pin_mosfet, OUTPUT);
  pinMode(pin_led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(btn_1) == LOW) {
    for (int i = 0; i < 1; ++i) {
      for (int o = 10; o < 1000; o = o + 10) {
        digitalWrite(pin_led, HIGH);
        digitalWrite(pin_mosfet, HIGH);
        delay(o);
        digitalWrite(pin_led, LOW);
        digitalWrite(pin_mosfet, LOW);
        delay(1000);
      }
    }
  }

  else if (digitalRead(btn_1) == HIGH) {
    digitalWrite(pin_mosfet, LOW);
    digitalWrite(pin_led, LOW);

  }
}
