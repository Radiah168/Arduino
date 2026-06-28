int pin=A5 ;
int read_val ;
float V2;
int delay_time=700;
void setup() {
  Serial.begin(9600);
  pinMode(pin,INPUT);
}

void loop() {
  read_val=analogRead(pin);
  V2=(5./1023)*read_val;
  Serial.print("V2 = ");
  Serial.println(V2);
  delay(delay_time);
}
