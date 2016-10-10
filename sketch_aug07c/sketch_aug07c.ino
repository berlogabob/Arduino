#define MOTOR_STEPS_REVOLUTION 200
#define GEAR_COEFFICIENT 1
///////////////////////////////////////////////
#define LEN_AA 0.25
#define LEN_AB 0.25

#define STEPS_DIR_AA LEN_AA*GEAR_COEFFICIENT*MOTOR_STEPS_REVOLUTION
#define STEPS_DIR_AB LEN_AB*GEAR_COEFFICIENT*MOTOR_STEPS_REVOLUTION
#define DELAY_TIME 1
// Шаг1 двигателя
#define STEP_A 8
// Направление вращения 1-го
#define DIR_A  9
// Включение двигателя 1-го
#define EN_A   10
// Шаг 2-го двигателя
#define STEP_B 11
// Направление вращения 2-го
#define DIR_B 12
// Включение двигателя 2-го
#define EN_B 13
//////////////////////////////////////////////
#define pin_btn_1 0
#define pin_btn_2 1

#define pin_btn_3 2
#define pin_btn_4 3

//#define pin_btn_rezhim_a 4
#define pin_btn_cancel 5


//////////////////////////////////////////////
const int pin_btn_rezhim_a = 4;
const int ledPin =  13;
const int LH = 4000;
const int LW = 2000;

int state_a = 0;


void setup() {
  // put your setup code here, to run once:
  //////////////////////////////////////////////
  // Настроим все необходимые пины на выход
  pinMode(STEP_A, OUTPUT);
  pinMode(DIR_A, OUTPUT);
  pinMode(EN_A, OUTPUT);

  pinMode(STEP_B, OUTPUT);
  pinMode(DIR_B, OUTPUT);
  pinMode(EN_B, OUTPUT);
}

void loop() {



  while (digitalRead(pin_btn_rezhim_a) == LOW)
  {
    // do something


    digitalWrite(EN_A, HIGH); // Включаем мотор
    digitalWrite(EN_B, HIGH);// Включаем мотор
    digitalWrite(DIR_A, HIGH);//направление от двигателя (красный свет)
    for (int i = 0; i < 4000; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_B, HIGH);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 6000; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_B, LOW);//направление к двигателю
    for (int i = 0; i < 2000; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }


    digitalWrite(DIR_A, HIGH);
    for (int i = 0; i < 2000; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_B, HIGH);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 2000; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    digitalWrite(DIR_B, LOW);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 4000; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_A, LOW);//направление от двигателя (красный свет)
    for (int i = 0; i < 2000; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
    digitalWrite(DIR_B, LOW);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 2000; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    digitalWrite(DIR_A, HIGH);//направление от двигателя (красный свет)
    for (int i = 0; i < 2000; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }

  }



}





