
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

#define steps1 200

#define mm1 5
#define mm_long1 steps1*mm1

#define steps2 200
#define mm2 2
#define mm_long2 steps2*mm2

#define kolvo_prohodov 10


#define pin_btn1 0
boolean buttonWasUp = true;  // была ли кнопка отпущена?
boolean ledEnabled = false; // включен ли свет?

void setup() {
  pinMode(STEP1, OUTPUT);
  pinMode(STEP2, OUTPUT);
  pinMode(DIR1, OUTPUT);
  pinMode(DIR2, OUTPUT);

  digitalWrite(EN2, 0);
  digitalWrite(EN1, 0);

  pinMode(pin_btn1, INPUT);


}

void loop() {


  boolean buttonIsUp = digitalRead(pin_btn1);
  if (buttonWasUp && !buttonIsUp) {
    delay(10);
    buttonIsUp = digitalRead(pin_btn1);
    if (!buttonIsUp) {  // если она всё ещё нажата...
      // ...это клик! Переворачиваем сигнал светодиода
      ledEnabled = !ledEnabled;
      //
      // цикл на первый режим: цикл на первый режим:

      // двигатель 1 едет в первую сторону
      for (int i1 = 0; i1 <= mm_long1; i1++) {
        digitalWrite(EN1, 1);
        digitalWrite(DIR1, 0);
        digitalWrite(STEP1, 1);
        delay(5);
        digitalWrite(STEP1, 0);
        digitalWrite(EN1, 0);
      }
      //
      // двигатель 1 едет во вторую сторону для «дозакрашивания» первого слоя
      for (int i1 = 0; i1 <= mm_long1; i1++) {
        digitalWrite(EN1, 1);
        digitalWrite(DIR1, 1);
        digitalWrite(STEP1, 1);
        delay(5);
        digitalWrite(STEP1, 0);
        digitalWrite(EN1, 0);
      }

      // двигатель 2 едет
      for (int i2 = 0; i2 <= mm_long2; i2++) {
        digitalWrite(EN2, 1);
        digitalWrite(STEP2, 1);
        delay(5);
        digitalWrite(STEP2, 0);
        digitalWrite(EN2, 0);
      }

      for (int i3 = 0; i3 <= kolvo_prohodov; i3++) {


        //////////////////////////////////////////
        //  цикл отсюда можно упаковать в цикл для завершения нанесения покрытия
        //  на всю площадь пластинки цикл отсюда можно упаковать в цикл для завершения
        //  нанесения покрытия на всю площадь пластинки
        for (int i1 = 0; i1 <= mm_long1; i1++) {
          digitalWrite(EN1, 1);
          digitalWrite(DIR1, 0);
          digitalWrite(STEP1, 1);
          delay(5);
          digitalWrite(STEP1, 0);
          digitalWrite(EN1, 0);
        }

        for (int i2 = 0; i2 <= mm_long2; i2++) {
          digitalWrite(EN2, 1);
          digitalWrite(STEP2, 1);
          delay(5);
          digitalWrite(STEP2, 0);
          digitalWrite(EN2, 0);
        }


        for (int i1 = 0; i1 <= mm_long1; i1++) {
          digitalWrite(EN1, 1);
          digitalWrite(DIR1, 1);
          digitalWrite(STEP1, 1);
          delay(5);
          digitalWrite(STEP1, 0);
          digitalWrite(EN1, 0);
        }


        for (int i2 = 0; i2 <= mm_long2; i2++) {
          digitalWrite(EN2, 1);
          digitalWrite(STEP2, 1);
          delay(5);
          digitalWrite(STEP2, 0);
          digitalWrite(EN2, 0);
        }

        //////////////////////////////////////////
      }
      //  delay(1000);
      //
    }
  }


  // запоминаем последнее состояние кнопки для новой итерации
  buttonWasUp = buttonIsUp;
}

