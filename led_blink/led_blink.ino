int pin =13;
int delay_time=500;
void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
  digitalWrite(pin,HIGH);
  delay(delay_time);
  digitalWrite(pin,LOW);
  delay(delay_time);
}
