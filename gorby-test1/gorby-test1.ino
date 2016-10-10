#define led_1_pin 4
#define led_2_pin 7
#define led_3_pin 8

void setup() {
  pinMode(led_1_pin, OUTPUT);
  pinMode(led_2_pin, OUTPUT);
  pinMode(led_3_pin, OUTPUT);


  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(1pin, HIGH);
  delay(50);
  digitalWrite(1pin, LOW);

  delay(10);

  digitalWrite(2pin, HIGH);
  delay(10);
  digitalWrite(2pin, LOW);

  delay(10);


  digitalWrite(3pin, HIGH);
  delay(10);
  digitalWrite(3pin, LOW);

  delay(10);


  // put your main code here, to run repeatedly:

}
