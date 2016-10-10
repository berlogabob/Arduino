#define pin_buzzler  3
#define pin_pot    A0

void setup() {
  pinMode(pin_buzzler, OUTPUT);
  pinMode(pin_pot, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {

  int val, frequency;
  val = analogRead(pin_pot);
  frequency = map(val, 0, 1023, 3500, 4500);
  tone(pin_buzzler, frequency, 20);

/*
tone(5, 262);
noTone(5);
tone(6, 523);
noTone(6);
tone(9, 1047);
noTone(9);
*/
}
