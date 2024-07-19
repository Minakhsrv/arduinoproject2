void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(0,HIGH);
  delay(1000);
  digitalWrite(0,LOW);
  digitalWrite(3,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
}
