#include <StepperAmperka.h>
StepperAmperka motor = StepperAmperka(200);

//
#include <math.h>
int minute = 1;

// Параметр конкретного типа термистора (из datasheet):
#define TERMIST_B 4300

#define VIN 5.0
//



#define btn_pin 2
#define led_pin 3
#define pot_pin A0



//
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval = 60000;           // interval at which to blink (milliseconds)
//
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(led_pin, OUTPUT);

  //
  Serial.println("Minute\tTemperature");
  //

  unsigned long previousMillis = 0;        // will store last time LED was updated

  // constants won't change :
  const long interval = 1000;           // interval at which to blink (milliseconds)
  //

}

void loop() {


  // put your main code here, to run repeatedly:
  int pot_val = analogRead (pot_pin);

  pot_val = map(pot_val, 0, 1023, 1, 50);
  motor.setSpeed(pot_val);
  motor.step(1, FULL_STEP);
  // delay (1000);
  //  Serial.print("RPM");
  //  Serial.print("\t");
  //
  //  Serial.print(pot_val);
  // Serial.print("\t");
  //  Serial.println();



  //
  float voltage = analogRead(A1) * VIN / 1024.0;
  float r1 = voltage / (VIN - voltage);


  float temperature = 1. / ( 1. / (TERMIST_B) * log(r1) + 1. / (25. + 273.) ) - 273;
  // печатаем текущую минуту и температуру, разделяя их табом.
  // println переводит курсор на новую строку, а print — нет
  Serial.print(minute);
  Serial.print("\t");
  Serial.println(temperature);

  //  delay(60000); // засыпаем на минуту
  //
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;
  }

  //

  ++minute;     // увеличиваем значение минуты на 1

  //
}
