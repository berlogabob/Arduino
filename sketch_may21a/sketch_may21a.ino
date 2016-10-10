// Характеристика двигателя,
// количество шагов на один оборот вала
#define MOTOR_STEPS_REVOLUTION 200

// Назначим пины
// Troyka-Stepper:
// Шаг двигателя
#define STEP 5
// Направление вращения
#define DIR  6
// Включение двигателя
#define EN   7

void setup() {
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(EN, HIGH);

  Serial.begin(9600);

}


void loop() {
  for (int o = 0; o = 100; o++) {

    for (int i = 0; i <= 200; i++) {
      digitalWrite(DIR, 1);
      digitalWrite(STEP, HIGH);
      Serial.println(i);
      Serial.print("\t");
      Serial.print(o);
      delay(3);
      digitalWrite(STEP, LOW);
    }

    delay(1000);



    for (int i = 0; i <= 200; i++) {
      digitalWrite(DIR, 0);
      digitalWrite(STEP, HIGH);
      Serial.println(i);
      Serial.print("\t");
      Serial.print(o);
      delay(5);
      digitalWrite(STEP, LOW);
    }

    delay(1000);
  }


}


