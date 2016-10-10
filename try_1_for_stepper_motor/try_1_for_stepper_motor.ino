
#include <StepperAmperka.h>

// Параметр конструктора — количество шагов на 1 оборот.
// Фикированная характеристика используемого шагового двигателя
StepperAmperka motor = StepperAmperka(200);

void setup()
{
  // Устанавливаем скорость вращения 30 оборотов в минуту.
  motor.setSpeed(70);
}

void loop()
{

  motor.step(-2000);
  motor.step(4000);
  motor.step(-10000);
  motor.step(4000);
  motor.step(-1000);

  motor.step(5000);
  motor.step(-8000);
  motor.step(6000);
  motor.step(-14000);
  motor.step(10000);

  motor.step(-1000);
  motor.step(6000);
  motor.step(-3000);
  motor.step(10000);
  motor.step(-6000);
  delay(5000);


}
