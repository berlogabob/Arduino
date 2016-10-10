// Характеристика двигателя,
// количество шагов на один оборот вала
#define MOTOR_STEPS_REVOLUTION 200
// передаточное число Винт-гайка
#define GEAR_COEFFICIENT 1
#define scale 0.5
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
#define pin_btn_cancel 5
//////////////////////////////////////////////


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
  //////////////////////////////////////////////
  /////
  /////     ПЕРВЫЙ ДВИГАТЕЛЬ
  /////
  //////////////////////////////////////////////
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
    digitalWrite(EN_A, LOW);
  }



  //////////////////////////////////////////////////////
  /////
  /////         ВТОРОЙ ДВИГАТЕЛЬ
  /////
  /////////////////////////////////////////////////////
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
    digitalWrite(EN_B, LOW);
  }

  /*
  else if (digitalRead(pin_btn_1 && pin_btn_2&& pin_btn_3&& pin_btn_4) == LOW) {
    digitalWrite(EN_A&&EN_B, LOW);
    */



  else if (digitalRead(pin_btn_rezhim_a) == LOW) {

    
    l_a();l_b(); l_v();
    k_rt2(); k_dw(); k_dw();k_dw(); k_dw(); k_lf();k_lf();k_lf();k_lf();k_lf();k_lf();k_lf2();
    
    
    l_x();
            k_up10();
    l_y();
    l_j();

    k_rt2(); k_dw(); k_dw();k_dw(); k_dw(); k_lf();k_lf();k_lf();k_lf();k_lf();k_lf();k_lf2();

    k_up();k_up();k_up();k_up();k_up();k_up();k_up();k_up();
    //end of rezhim_a
  }





  ////end of loop
}














//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//        УПРАВЛЕНИЕ НАПИСАНИЕМ БУКВ                     /////
//        ДРОБЛЕНИЕ ШАГА ДВИГАТЕЛЕЙ                      /////
//    В ЗАВИСИМОСТИ ОТ ПЕРЕМЕННОЙ МАСШТАБА               /////
//////////////////////////////////////////////////////////////
//    ЦЕЛОЕ ЗНАЧЕНИЕ МАСШТАБА                            /////
//////////////////////////////////////////////////////////////
void k_lf() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
//    ПОЛОВИННОЕ ЗНАЧЕНИЕ МАСШТАБА
/////////////////////////////////////////////
void k_lf2() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x / 2; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt2() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x / 2; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up2() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x / 2; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw2() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x / 2; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
//    ТРЕТЬ ЗНАЧЕНИЯ МАСШТАБА
/////////////////////////////////////////////
void k_lf3() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x / 3; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt3() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x / 3; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up3() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x / 3; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw3() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x / 3; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
//    ЧЕТВЕРТЬ ЗНАЧЕНИЯ МАСШТАБА
/////////////////////////////////////////////
void k_lf4() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x / 4; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt4() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x / 4; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up4() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x / 4; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw4() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x / 4; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
//    ШЕСТАЯ ЗНАЧЕНИЯ МАСШТАБА
/////////////////////////////////////////////
void k_lf6() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x / 6; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt6() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x / 6; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up6() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x / 6; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw6() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x / 6; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
//    ВОСЬМАЯ ЗНАЧЕНИЯ МАСШТАБА
/////////////////////////////////////////////
void k_lf8() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x / 8; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt8() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x / 8; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up8() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x / 8; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw8() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x / 8; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
//    ДЕСЯТАЯ ЗНАЧЕНИЯ МАСШТАБА
/////////////////////////////////////////////
void k_lf10() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x / 10; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt10() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x / 10; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up10() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x / 10; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw10() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x / 10; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
//    ДВАДЦАТАЯ ЗНАЧЕНИЯ МАСШТАБА
/////////////////////////////////////////////
void k_lf20() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, HIGH);
  for (int i = 0; i < x / 20; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_rt20() {
  digitalWrite(EN_A, HIGH);
  digitalWrite(DIR_A, LOW);
  for (int i = 0; i < x / 20; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_A, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_A, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_A, LOW);
}
//////////////////////////////////////////////
void k_up20() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, LOW);
  for (int i = 0; i < x / 20; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
//////////////////////////////////////////////
void k_dw20() {
  digitalWrite(EN_B, HIGH);
  digitalWrite(DIR_B, HIGH);
  for (int i = 0; i < x / 20; ++i) {
    if (digitalRead(pin_btn_cancel) == LOW) {
      break;
    }
    digitalWrite(STEP_B, HIGH);
    delay(DELAY_TIME);
    digitalWrite(STEP_B, LOW);
    delay(DELAY_TIME);
  }
  digitalWrite(EN_B, LOW);
}
/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
/////////////////////////////////////////////
void l_probel() {
  k_rt(); k_rt();
}

void l_abzatc() {
  l_new_line();
  k_lf(); k_lf(); k_lf(); k_lf(); k_lf();
  k_lf(); k_lf(); k_lf();/*k_lf();k_lf();
  k_lf();k_lf();k_lf();k_lf();k_lf();
  k_lf();k_lf();k_lf();k_lf();k_lf();*/
}
void l_new_line() {
  k_dw(); k_dw(); k_dw(); k_dw();
}

void l_a() {
  k_rt(); k_dw(); k_dw(); k_dw(); k_up();
  k_rt(); k_dw(); k_up(); k_up(); k_lf();
  k_up(); k_rt();
}
void l_b() {
  k_rt(); k_dw(); k_rt(); k_lf(); k_dw();
  k_dw(); k_rt(); k_up(); k_lf(); k_up();
  k_up(); k_rt();
}


void l_v() {
  k_rt(); k_dw(); k_dw(); k_dw(); k_rt();
  k_up(); k_lf(); k_rt2();  k_up(); k_lf2();
  k_up(); k_rt();
}

void l_g() {
  k_rt(); k_dw(); k_dw(); k_dw(); k_up();
  k_up(); k_rt(); k_lf(); k_up(); k_rt();
}


void l_x() {
  k_rt(); k_dw();//спускание к позиции начала буквы от базовой линии
  for ( int i = 0; i < 20; ++i) {
    k_rt20();
    k_dw10();
  }
  for ( int i = 0; i < 10; ++i) {
    k_up10();
    k_lf20();
  }
  for ( int i = 0; i < 10; ++i) {
    k_lf20();
    k_dw10();
  }
  for ( int i = 0; i < 20; ++i) {
    k_up10();
    k_rt20();
  }
  for ( int i = 0; i < 10; ++i) {
    k_lf20();
    k_dw10();
  }
  for ( int i = 0; i < 10; ++i) {
    k_up10();
    k_lf20();
  }
  k_up(); k_rt();
}


void l_y() {
  k_rt(); k_dw();
  for ( int i = 0; i < 10; ++i) {
    k_rt20(); k_dw10();
  }
  for ( int i = 0; i < 10; ++i) {
    k_up10(); k_rt20();
  }
  for ( int i = 0; i < 20; ++i) {
    k_lf20(); k_dw10();
  }
  for ( int i = 0; i < 10; ++i) {
    k_up10(); k_rt20();
  }
  for ( int i = 0; i < 10; ++i) {
    k_up10(); k_lf20();
  }
  k_up(); k_rt();
}
void l_j() {
  k_rt(); k_dw();
  k_dw(); k_dw();
  for ( int i = 0; i < 20; ++i) {
    k_rt20(); k_up10();
  }
  k_dw(); k_dw();
  k_up(); k_up();

  k_up2();
  k_lf20();

  for ( int i = 0; i < 10; ++i) {
    k_dw20();
    k_lf20();
  }
  for ( int i = 0; i < 10; ++i) {
    k_lf20();
    k_up20();
  }
  k_lf10();
  k_up2();
  k_rt();
  k_rt10();
}

