#include <StepperAmperka.h>
StepperAmperka motor = StepperAmperka(200);

#define btn_pin 2
#define led_pin 3
#define pot_pin A0
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);



}

void loop() {


  // put your main code here, to run repeatedly:
  int pot_val = analogRead (pot_pin);

  pot_val = map(pot_val, 0, 1023, 1, 50);
  motor.setSpeed(pot_val);
  motor.step(1, FULL_STEP);
  // delay (1000);
  Serial.print("RPM");
  Serial.print("\t");

  Serial.print(pot_val);
 // Serial.print("\t");
  Serial.println();

}
