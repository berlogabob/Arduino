// Шаг двигателя
#define STEP 5
// Направление вращения
#define DIR  6
// Включение двигателя
#define EN   7
#define steps 200
#define t_steps 5
void setup() {


  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);
  digitalWrite(EN, HIGH);
  //
  Serial.begin(9600);
  //
  Serial.print("i");
  Serial.print("\t");
  Serial.print("steps");
  Serial.print("\t");
  Serial.print("t");
  Serial.print("\t");
  Serial.println();

}

void loop() {

  for (int t = 0; t <= t_steps; t++) {
    //
    for (int i = 0; i <= steps; i++) {
      digitalWrite(DIR, 1);
      digitalWrite(STEP, HIGH);
      Serial.print(i);
      Serial.print("\t");
      Serial.print(steps);
      Serial.print("\t");

      Serial.print(t);
      Serial.print("\t");

      Serial.println();
      delay(5);
      digitalWrite(STEP, LOW);
    }
    delay(1000);

    //
    for (int i = 0; i <= steps; i++) {
      digitalWrite(DIR, 0);
      digitalWrite(STEP, HIGH);
      Serial.print(i);
      Serial.print("\t");
      Serial.print(steps);
      Serial.print("\t");

      Serial.print(t);
      Serial.print("\t");

      Serial.println();
      delay(5);
      digitalWrite(STEP, LOW);
    }
    delay(1000);

  }
  delay(5000);

}
