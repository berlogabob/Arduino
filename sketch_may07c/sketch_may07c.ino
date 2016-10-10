
#define pot_pin A5
#define btn_1 2

void setup() {
  pinMode(pot_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int btn_state = digitalRead(btn_1);
  int pot_val = analogRead(pot_pin);

  int vaal = map (pot_val, 0, 1023, 1, 255);

  Serial.print(pot_val);
  Serial.print("\t");

  Serial.print(vaal);
  Serial.print("\t");
  
  Serial.println();
  //  Serial.println(vaal);

}
