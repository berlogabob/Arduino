#define STEP 8
#define DIR 9
#define EN 10



void setup() {
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(EN, HIGH);
}

void loop() {

   for (int i = 0; i <= 18000; i++) {
    digitalWrite(EN, HIGH);
    digitalWrite(DIR, 0);//stol edet iz krajnego dalnego polozhenia v storonu dvigatelia (dir 0)
    digitalWrite(STEP, HIGH);
    delay(10);
    digitalWrite(STEP, LOW);
    delay(10);
  }
  for (int i = 0; i <= 18000  ; i++) {
    digitalWrite(EN, HIGH);
    digitalWrite(DIR, 1);

    digitalWrite(STEP, HIGH);
    delay(10);
    digitalWrite(STEP, LOW);
    delay(10);



  }

  
}
