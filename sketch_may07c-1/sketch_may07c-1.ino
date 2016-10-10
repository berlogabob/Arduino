#include <StepperAmperka.h>

#define pot_pin A5
#define btn_1 2

StepperAmperka motor = StepperAmperka(200);

void setup() {
  pinMode(pot_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int btn_state = digitalRead(btn_1);
  int pot_val = analogRead(pot_pin);



boolean tt;

  


  int vaal = map (pot_val, 0, 1023, 0, 255);
  motor.setSpeed(30);

  Serial.print(pot_val);
  Serial.print("\t");

  Serial.print(vaal);
  Serial.print("\t");

  Serial.println();



  //  motor.step(1000, WAVE_DRIVE);
  //  delay(100);



  //  motor.step(1000, FULL_STEP);
  //  delay(100);
  //  motor.step(1000, HALF_STEP);
  //  delay(100);

 // do
//  {
    motor.step(1000, HALF_STEP);
//    boolean tt = digitalRead(btn_state);
//  } while (tt = false);
}
