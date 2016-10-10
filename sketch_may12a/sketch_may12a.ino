#define pin_motor 3
#define pin_pot A0
#define pin_temp1 A1

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(pin_motor, OUTPUT);
  pinMode(pin_pot, INPUT);
}

void loop() {


  // put your main code here, to run repeatedly:
  int rotation;
  rotation = analogRead (pin_pot);
  //int maped = map(maped, 0, 1023, 0, 153);
  // int val = analogRead(0);
  int  maped = map(rotation, 0, 1023, 0, 153);
  analogWrite(pin_motor, rotation);

  //digitalWrite (pin_motor, rotation);




  Serial.print(rotation);
  Serial.print("\t");
  Serial.print(maped);
  Serial.println();
  Serial.print(pin_temp1);
  Serial.print("\t");

}
