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
#define pin_btn_cancel 5

//////////////////////////////////////////////
int rezhim_a_atate = 0;
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




  if (digitalRead(pin_btn_3) == LOW) {
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


  else if (digitalRead(pin_btn_1 && pin_btn_2 && pin_btn_3 && pin_btn_4) == LOW) {
    digitalWrite(EN_A && EN_B, LOW);
  }

  // Завершаем работу.
  // Чтобы возобновить работу нужно нажать кнопку RESET
  //  while (true) {
  //  ;


/*

// read the state of the pushbutton value:
  rezhim_a_atate = digitalRead(pin_btn_rezhim_a);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (rezhim_a_atate == HIGH) {
    // turn LED on:
    


digitalWrite(EN_A, HIGH); // Включаем мотор
digitalWrite(EN_B, HIGH);// Включаем мотор
// Поворачиваем столик на необходимое количество шагов
digitalWrite(DIR_A, HIGH);//направление от двигателя (красный свет)
for (int i = 0; i < 20; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_B, HIGH);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 60; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_B, LOW);//направление к двигателю
    for (int i = 0; i < 20; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }


    digitalWrite(DIR_A, HIGH);
    for (int i = 0; i < 20; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_B, HIGH);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 20; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    digitalWrite(DIR_B, LOW);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 40; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }

    digitalWrite(DIR_A, LOW);//направление от двигателя (красный свет)
    for (int i = 0; i < 20; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }
    digitalWrite(DIR_B, LOW);//направление от двигателя (красный свет)
    // Поворачиваем столик на необходимое количество шагов
    for (int i = 0; i < 20; ++i) {
      // Один шаг
      digitalWrite(STEP_B, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_B, LOW);
      delay(DELAY_TIME);
    }
    digitalWrite(DIR_A, HIGH);//направление от двигателя (красный свет)
    for (int i = 0; i < 20; ++i) {
      // Один шаг
      digitalWrite(STEP_A, HIGH);
      delay(DELAY_TIME);
      digitalWrite(STEP_A, LOW);
      delay(DELAY_TIME);
    }



  }
  else {
    // turn LED off:
    //digitalWrite(ledPin, LOW);
  }












 




    // После завершения съёмки отключаем двигатель
 //   digitalWrite(EN_A, LOW);
//    digitalWrite(EN_B, LOW);


  }
































*/
    }


