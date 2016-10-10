#include <StepperAmperka.h>
StepperAmperka motor = StepperAmperka(200);


#define pot_pin A0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);



}

void loop() {
  // put your main code here, to run repeatedly
  int pot_val = analogRead (pot_pin);



//  pot_val = map(pot_val, 0, 1023, 1, 50);
  motor.setSpeed(50);
  motor.step(100, FULL_STEP);
  motor.step(-100, FULL_STEP);

  Serial.println(pot_val);
}
