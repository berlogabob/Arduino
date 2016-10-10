// Характеристика двигателя,
// количество шагов на один оборот вала
#define MOTOR_STEPS_REVOLUTION 200
// передаточное число Винт-гайка
#define GEAR_COEFFICIENT 1
///////////////////////////////////////////////
//длина перемещения нижнего шарового двигателя
//в сторону от двигателя, в мм
#define LEN_AA 0.25
//в сторону к двигателю, в мм
#define LEN_AB 0.25

#define STEPS_DIR_AA LEN_AA*GEAR_COEFFICIENT*MOTOR_STEPS_REVOLUTION
#define STEPS_DIR_AB LEN_AB*GEAR_COEFFICIENT*MOTOR_STEPS_REVOLUTION
// Чем больше это число, тем медленнее вращается двигатель
#define DELAY_TIME 1
// Назначим пины
// Troyka-Stepper:
// Шаг двигателя
#define STEP 8
// Направление вращения
#define DIR  9
// Включение двигателя
#define EN   10
//////////////////////////////////////////////
#define pin_btn_1 2
#define pin_btn_2 3


//////////////////////////////////////////////
void setup() {

  //////////////////////////////////////////////
  // Настроим все необходимые пины на выход
  pinMode(STEP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(EN, OUTPUT);
 // digitalWrite(EN, 0);
}
//////////////////////////////////////////////
void loop() {
  if (digitalRead(pin_btn_1) == LOW) {
    //направление от двигателя (красный свет диода на тройка модуле)
    digitalWrite(DIR, HIGH);
    // Включаем мотор
    digitalWrite(EN, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < STEPS_DIR_AA; ++i) {
      // Один шаг
      digitalWrite(STEP, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP, LOW);
      delay(DELAY_TIME);
    }
    // После завершения съёмки отключаем двигатель
    digitalWrite(EN, LOW);
  }

    else if (digitalRead(pin_btn_2) == LOW) {
    //направление от двигателя (красный свет диода на тройка модуле)
    digitalWrite(DIR, LOW);
    // Включаем мотор
    digitalWrite(EN, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < STEPS_DIR_AA; ++i) {
      // Один шаг
      digitalWrite(STEP, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP, LOW);
      delay(DELAY_TIME);
    }


    
    // Завершаем работу.
    // Чтобы возобновить работу нужно нажать кнопку RESET
    //  while (true) {
    //  ;
    //  }
  }
  else if(digitalRead(pin_btn_1&&pin_btn_2) == LOW){
  digitalWrite(EN, LOW);
  }
}

