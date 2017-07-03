void setup() {
  Serial.begin(9600);
  Serial.println("Inicio ok");
}

void loop() {
  // Le valor do pino analógico
  int valorSensor = analogRead(A0);
  int pos = map(valorSensor,0,1023,0,450);
  Serial.flush();
  Serial.println(pos);
  delay(16);
}

