#define STEP 8
#define DIR 9
#define EN 10





#define steps 200 // количество шагов за один оборот вала двигателя
#define koe_r steps/shag_rezbi // коэффициент перемещения. шагов на мм
#define shag_rezbi 10 // шаг резьбы по ГОСТ
#define LONG 5 // перемещение на указанное значение, в мм// перемещение на указанное значение, в мм

#define time_of_one_step 5
#define pin_buzz 3
void setup() {
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(EN, HIGH);
}

void loop() {
  delay(500);
  tone(3, 252, 50);
  delay(1);
  for (int i = 0; i <= 2000; i++) {
    digitalWrite(EN, HIGH);
    digitalWrite(DIR, 0);
    digitalWrite(STEP, HIGH);
    delay(1);
    digitalWrite(STEP, LOW);
    delay(1);
  }
  delay(500);

  tone(3, 566, 50);
  delay(1);
  for (int i = 0; i <= 2000; i++) {
    digitalWrite(EN, HIGH);
    digitalWrite(DIR, 1);

    digitalWrite(STEP, HIGH);
    delay(1);
    digitalWrite(STEP, LOW);
    delay(1);



  }
      digitalWrite(EN, LOW);
}
