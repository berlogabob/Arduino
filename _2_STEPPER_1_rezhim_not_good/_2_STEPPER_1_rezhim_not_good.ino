// Характеристика двигателя,
// количество шагов на один оборот вала
#define MOTOR_STEPS_REVOLUTION 200
// передаточное число Винт-гайка
#define GEAR_COEFFICIENT 1
#define scale 0.25
#define font_segment 5
#define x MOTOR_STEPS_REVOLUTION*font_segment*GEAR_COEFFICIENT*scale
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

#define pin_btn_rezhim_a 4

//////////////////////////////////////////////
void setup() {



  //////////////////////////////////////////////
  // Настроим все необходимые пины на выход
  pinMode(STEP_A, OUTPUT);
  pinMode(DIR_A, OUTPUT);
  pinMode(EN_A, OUTPUT);

  pinMode(STEP_B, OUTPUT);
  pinMode(DIR_B, OUTPUT);
  pinMode(EN_B, OUTPUT);

  digitalWrite(EN_A && EN_B, 0);
}
//////////////////////////////////////////////
void loop() {
  ////ПЕРВЫЙ ДВИГАТЕЛЬ/////
  if (digitalRead(pin_btn_1) == LOW) {
    //направление от двигателя (красный свет диода на тройка модуле)
    digitalWrite(DIR_A, HIGH);
    // Включаем мотор
    digitalWrite(EN_A, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < STEPS_DIR_AA; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
    // После завершения съёмки отключаем двигатель
    digitalWrite(EN_A, LOW);
  }

  else if (digitalRead(pin_btn_2) == LOW) {
    //направление от двигателя (красный свет диода на тройка модуле)
    digitalWrite(DIR_A, LOW);
    // Включаем мотор
    digitalWrite(EN_A, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < STEPS_DIR_AB; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
  }


  ///ВТОРОЙ ДВИГАТЕЛЬ////




  else if (digitalRead(pin_btn_3) == LOW) {
    //направление от двигателя (красный свет диода на тройка модуле)
    digitalWrite(DIR_B, HIGH);
    // Включаем мотор
    digitalWrite(EN_B, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < STEPS_DIR_AA; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    // После завершения съёмки отключаем двигатель
    digitalWrite(EN_B, LOW);
  }

  else if (digitalRead(pin_btn_4) == LOW) {
    //направление от двигателя (красный свет диода на тройка модуле)
    digitalWrite(DIR_B, LOW);
    // Включаем мотор
    digitalWrite(EN_B, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < STEPS_DIR_AB; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
  }

  /*
  else if (digitalRead(pin_btn_1 && pin_btn_2&& pin_btn_3&& pin_btn_4) == LOW) {
    digitalWrite(EN_A&&EN_B, LOW);
    */



  else if (digitalRead(pin_btn_rezhim_a) == LOW) {

    //1
    digitalWrite(DIR_A, LOW);
    // Включаем мотор
    digitalWrite(EN_A, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < x; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
    //2
    digitalWrite(DIR_B, HIGH);
    // Включаем мотор
    digitalWrite(EN_B, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 3 * x; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    //3
    digitalWrite(DIR_B, LOW);
    // Включаем мотор
    digitalWrite(EN_B, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < x; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    //4
    digitalWrite(DIR_A, LOW);
    // Включаем мотор
    digitalWrite(EN_A, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < x; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
    //5
    digitalWrite(DIR_B, HIGH);
    // Включаем мотор
    digitalWrite(EN_B, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < x; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    //6
    digitalWrite(DIR_B, LOW);
    // Включаем мотор
    digitalWrite(EN_B, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 2 * x; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    //7
    digitalWrite(DIR_A, HIGH);
    // Включаем мотор
    digitalWrite(EN_A, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < x; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
    //8
    digitalWrite(DIR_B, LOW);
    // Включаем мотор
    digitalWrite(EN_B, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < x; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    //9
    digitalWrite(DIR_A, LOW);
    // Включаем мотор
    digitalWrite(EN_A, HIGH);
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < x; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
    //end of rezhim_a
  }





  ////end of loop
}












// Завершаем работу.
// Чтобы возобновить работу нужно нажать кнопку RESET
//  while (true) {
//  ;
//  }


