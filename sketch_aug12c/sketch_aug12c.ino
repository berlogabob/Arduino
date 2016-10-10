#define  i 2
#define  j 3
int k;

int mu(int x, int y){
  int result;
  result = x*y;
  return result;
}


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}


void loop() {
  // put your main code here, to run repeatedly:

k = mu(i, j);
Serial.println(k);
delay(500);
}

