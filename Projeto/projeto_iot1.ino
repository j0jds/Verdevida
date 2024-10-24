//c++ code
// 
int estadoSensor = 45;

void setup(){
 pinMode(A0, INPUT);
 Serial.begin(9600);
 pinMode(7, OUTPUT);
}

void loop(){
estadoSensor = analogRead(A0);
int Porcento = map(estadoSensor, 0, 53, 0, 6);
Serial.print(Porcento);
Serial.println("%");

  
  
  if(Porcento <= 45){
  digitalWrite(7, HIGH);
  Serial.println("IRRIGANDO O SOLO...");
  }
  else{
  digitalWrite(7, LOW);
    Serial.println("SOLO TOTALMENTE IRIIGADO!!");
  }
  delay(1);
}
