int pin=13;
int time1=50;
int time2=700;
int time3=1500;

void setup() {
  pinMode(pin,OUTPUT);
}

void loop() {
digitalWrite(pin,HIGH);
delay(time1);
digitalWrite(pin,LOW);
delay(time1);
digitalWrite(pin,HIGH);
delay(time1);
digitalWrite(pin,LOW);
delay(time1);
digitalWrite(pin,HIGH);
delay(time1);
digitalWrite(pin,LOW);
delay(time1);

digitalWrite(pin,HIGH);
delay(time2);
digitalWrite(pin,LOW);
delay(time2);
digitalWrite(pin,HIGH);
delay(time2);
digitalWrite(pin,LOW);
delay(time2);
digitalWrite(pin,HIGH);
delay(time2);
digitalWrite(pin,LOW);
delay(time2);

digitalWrite(pin,HIGH);
delay(time3);
digitalWrite(pin,LOW);
delay(time3);
digitalWrite(pin,HIGH);
delay(time3);
digitalWrite(pin,LOW);
delay(time3);
digitalWrite(pin,HIGH);
delay(time3);
digitalWrite(pin,LOW);
delay(time3);
}
