void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
//////////////////////////////////////////////
//////////////////////////////////////////////
//        УПРАВЛЕНИЕ НАПИСАНИЕМ БУКВ
//        ДРОБЛЕНИЕ ШАГА ДВИГАТЕЛЕЙ
//    В ЗАВИСИМОСТИ ОТ ПЕРЕМЕННОЙ МАСШТАБА
//////////////////////////////////////////////
//    ЦЕЛОЕ ЗНАЧЕНИЕ МАСШТАБА
//////////////////////////////////////////////
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
