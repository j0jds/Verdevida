int estadoSensor = 0;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
  estadoSensor = analogRead(A0);
  int porcento = map(estadoSensor, 0, 1023, 0, 100); 
  Serial.print(porcento);
  Serial.println("%");

  if (porcento < 45) { // Corrigido: remover a barra extra
    digitalWrite(7, HIGH);
    Serial.println("IRRIGANDO O SOLO...");
  } else {
    digitalWrite(7, LOW);
    Serial.println("SOLO TOTALMENTE IRRIGADO!!");
  }

  delay(1000); 
}
