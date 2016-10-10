#include <StepperAmperka.h>
StepperAmperka motor = StepperAmperka(200);

#define FIRST_BUTTON_PIN 0
#define BUTTON_COUNT 3

#define led_pin 3
#define pot_pin A0




void setup() {

  pinMode(led_pin, OUTPUT);


  for (int i = 0; i < BUTTON_COUNT; ++i)
    pinMode(i + FIRST_BUTTON_PIN, INPUT);


}

void loop()
{

  for (int i = 0; i < BUTTON_COUNT; ++i) {
    if (digitalRead(i + FIRST_BUTTON_PIN))
      continue;


    int pot_val = analogRead (pot_pin);
    pot_val = map(pot_val, 0, 1023, 1, 75);

    if (i = 0)
    {
      motor.setSpeed(pot_val);
      motor.step(1, HALF_STEP);

    }
    else if (i = 1)
    {
      motor.setSpeed(30);
      motor.step(-10, HALF_STEP);
    }
    else (i = 2)
   ; {
      motor.setSpeed(0);
      motor.step(0, HALF_STEP);
    }
  }
}
