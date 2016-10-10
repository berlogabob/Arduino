#define pin_temp A0
#define pin_led 3
void setup() {
  Serial.begin(9600);
  pinMode(pin_led, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  int val_pin_temp = analogRead(pin_temp);
  //  int val_temp = map(val_temp, 0, 1023, -45, 125);


  //int val = analogRead(0);
  val_pin_temp = map(val_pin_temp, 0, 1023, 0, 125);
  analogWrite(3, pin_temp);
  

  Serial.print(pin_temp);
  Serial.print("\t");
  Serial.print(val_pin_temp);
  Serial.print("\t");
  //  Serial.print(val_temp);

  //  Serial.print();
  //  Serial.print("\t");

  Serial.println();


}
