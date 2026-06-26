int pin =9;
int brightness_1=0;
int brightness_2=20;
int brightness_3=100;
int brightness_4=190;
int brightness_5=255; 
int delay_time=700;

void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
  analogWrite(pin,brightness_1);
  delay(delay_time);

  analogWrite(pin,brightness_2);
  delay(delay_time);

  analogWrite(pin,brightness_3);
  delay(delay_time);

  analogWrite(pin,brightness_4);
  delay(delay_time);

  analogWrite(pin,brightness_5);
  delay(delay_time);
}
