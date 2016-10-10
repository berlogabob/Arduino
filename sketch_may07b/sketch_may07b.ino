
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
  Serial.println(pot_val);

//int vaal = 
//  motor.setSpeed(30);

// motor.step(100, HALF_STEP);
//delay(1000);
//motor.step(-1000);


}
