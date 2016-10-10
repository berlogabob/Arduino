#define pin_buzzler  3
#define pin_btn1 2
boolean buttonWasUp = true;  // была ли кнопка отпущена?
boolean ledEnabled = false; // включен ли свет?
////////////////////////////////////////////////////////
int BPM =100;
int note_lenght 
////////////////////////////////////////////////////////


void setup() {
  pinMode(pin_buzzler, OUTPUT);
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
      ////////////////////////////////////////////////
      tone(pin_buzzler, 440, 500);
      noTone(pin_buzzler);
      delay(100);
      ///////////////////////////////////////////////
    }
  }
  buttonWasUp = buttonIsUp;
}
