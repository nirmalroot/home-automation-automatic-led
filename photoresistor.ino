void setup() {
  pinMode (8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
Serial.println (analogRead(A1));
delay (1000);
if (analogRead(A1)>25)
{
  digitalWrite(8, LOW);
  }
  else{
  digitalWrite(8, HIGH);
    }
}
