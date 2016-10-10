// 1 motor
// Шаг двигателя
#define STEP1 5
// Направление вращения
#define DIR1  6
// Включение двигателя
#define EN1  7

// 2 motor
// Шаг двигателя
#define STEP2 8
// Направление вращения
#define DIR2  9
// Включение двигателя
#define EN2   10



#define steps 200
#define t_steps 5


void setup() {


  pinMode(STEP1, OUTPUT);
  pinMode(DIR1, OUTPUT);
  pinMode(EN1, OUTPUT);
  digitalWrite(EN1, HIGH);
  
  
  pinMode(STEP2, OUTPUT);
  pinMode(DIR2, OUTPUT);
  pinMode(EN2, OUTPUT);
  digitalWrite(EN2, HIGH);
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
      digitalWrite(DIR1, 1);
      digitalWrite(STEP1, HIGH);
      Serial.print(i);
      Serial.print("\t");
      Serial.print(steps);
      Serial.print("\t");

      Serial.print(t);
      Serial.print("\t");

      Serial.println();
      delay(5);
      digitalWrite(STEP1, LOW);
    }
    delay(1000);

    //
    for (int i = 0; i <= steps; i++) {
      digitalWrite(DIR1, 0);
      digitalWrite(STEP1, HIGH);
      Serial.print(i);
      Serial.print("\t");
      Serial.print(steps);
      Serial.print("\t");

      Serial.print(t);
      Serial.print("\t");

      Serial.println();
      delay(5);
      digitalWrite(STEP1, LOW);
    }
    delay(1000);

  }
  delay(5000);
  
  
  
  //
  for (int t = 0; t <= t_steps; t++) {
    //
    for (int i = 0; i <= steps; i++) {
      digitalWrite(DIR2, 1);
      digitalWrite(STEP2, HIGH);
      Serial.print(i);
      Serial.print("\t");
      Serial.print(steps);
      Serial.print("\t");

      Serial.print(t);
      Serial.print("\t");

      Serial.println();
      delay(5);
      digitalWrite(STEP2, LOW);
    }
    delay(1000);

    //
    for (int i = 0; i <= steps; i++) {
      digitalWrite(DIR2, 0);
      digitalWrite(STEP2, HIGH);
      Serial.print(i);
      Serial.print("\t");
      Serial.print(steps);
      Serial.print("\t");

      Serial.print(t);
      Serial.print("\t");

      Serial.println();
      delay(5);
      digitalWrite(STEP2, LOW);
    }
    delay(1000);

  }
  delay(5000);
  
  

}
