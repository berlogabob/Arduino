
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
//  delay(5000);
motor.step(4000);
//  delay(5000);
 
 
 motor.step(-1000);
//  delay(5000);
motor.step(500);
//  delay(5000);
motor.step(-2000);
//  delay(5000);
motor.step(500);
//  delay(5000);

}
