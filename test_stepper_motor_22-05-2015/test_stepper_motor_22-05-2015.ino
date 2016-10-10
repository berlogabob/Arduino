#define STEP 8
#define DIR 9
#define EN 10





#define steps 200 // количество шагов за один оборот вала двигателя
#define koe_r steps/shag_rezbi // коэффициент перемещения. шагов на мм
#define shag_rezbi 1.4 // шаг резьбы по ГОСТ
#define LONG 5 // перемещение на указанное значение, в мм// перемещение на указанное значение, в мм

#define time_of_one_step 5

#define pin_btn1 2
boolean buttonWasUp = true;  // была ли кнопка отпущена?
boolean ledEnabled = false; // включен ли свет?


#define pin_buzz 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(pin_btn1, INPUT);

  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(EN, HIGH);
}

void loop() {
  Serial.println(koe_r);
  delay(5000);
  tone(3, 252, 50);
  delay(100);
  for (int i = 0; i <= 200; i++) {
       digitalWrite(EN, HIGH);
    digitalWrite(DIR, 0);
    digitalWrite(STEP, HIGH);
    delay(10);
    digitalWrite(STEP, LOW);
    delay(10);
  }
  delay(5000);

  tone(3, 566, 50);
  delay(100);
  for (int i = 0; i <= 200; i++) {
    digitalWrite(EN, HIGH);
    digitalWrite(DIR, 1);

    digitalWrite(STEP, HIGH);
    delay(10);
    digitalWrite(STEP, LOW);
    delay(10);



  }
      digitalWrite(EN, LOW);
}
