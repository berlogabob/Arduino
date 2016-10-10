#define pin_btn 2
#define pin_led 13

void setup() {
  // put your setup code here, to run once:
pinMode(pin_led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(pin_btn)==LOW){
  digitalWrite(pin_led, HIGH);
}
else(digitalWrite(pin_led,LOW));
}
