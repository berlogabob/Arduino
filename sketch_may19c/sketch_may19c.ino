
void setup() {
  pinMode(0, INPUT); // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(0, HIGH) == HIGH)
  {
    digitalWrite(8, HIGH);
  }
}
