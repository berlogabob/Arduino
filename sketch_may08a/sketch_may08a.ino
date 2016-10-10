#include <StepperAmperka.h>
StepperAmperka motor = StepperAmperka(200);

#define btn_pin 2
#define led_pin 3
#define pot_pin A0
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(led_pin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(btn_pin, INPUT);
  
  
  
  
  
}

void loop() {
  motor.setSpeed(30);
  // read the state of the pushbutton value:
  buttonState = digitalRead(btn_pin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(led_pin, HIGH);
  }
  else {
    // turn LED off:
    digitalWrite(led_pin, LOW);
  }
  
  
  motor.step(1);
  
  
  
}
