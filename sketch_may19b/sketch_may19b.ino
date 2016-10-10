#define pin_1 4
#define pin_2 7
#define pin_3 8

#define btn1_pin 0
#define btn2_pin 1



void setup() {
  pinMode(pin_1, OUTPUT);
  pinMode(pin_2, OUTPUT);
  pinMode(pin_3, OUTPUT);


}

void loop() {
  
  // определить момент «клика» несколько сложнее, чем факт того,
  // что кнопка сейчас просто нажата. Для определения клика мы
  // сначала понимаем, отпущена ли кнопка прямо сейчас...
digitalRead(btn1_pin);
  if(btn1_pin==HIGH){
    digitalWrite(pin_1, HIGH);
  delay(100);
  digitalWrite(pin_1, LOW);
  //  delay(100);

  digitalWrite(pin_2, HIGH);
  delay(100);
  digitalWrite(pin_2, LOW);
  //  delay(100);

  digitalWrite(pin_3, HIGH);
  delay(100);
  digitalWrite(pin_3, LOW);
  //  delay(100);
  }
  else
  {
    digitalWrite(pin_3, HIGH);
  }

  
}
