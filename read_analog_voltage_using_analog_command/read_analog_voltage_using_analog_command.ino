int pin=A5 ;
int read_value;
float V2;
int delay_time=500;

void setup() {
  pinMode(pin,INPUT);
  Serial.begin(9600);
}

void loop() {
read_value=analogRead(pin);
V2=(5./1023.)*read_value;
Serial.print("V2 = ");
Serial.println(V2);
delay(delay_time);
}
  
