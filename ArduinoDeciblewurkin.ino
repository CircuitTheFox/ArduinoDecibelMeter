void setup() {
  pinMode(A5, INPUT);
  pinMode(A4, INPUT);
  for(int z = 0; z < 10; z++){
    pinMode(z, OUTPUT);
  }
}
void loop() {
  int volume = analogRead(A5);
  int volume2 = analogRead(A4);
  int avgVol = (volume + volume2) / 2;
  int v2 = map(avgVol, 0, 900, 0, 10);
  
  for(int a = 0; a < 10; a++){ 
    if(v2 > a){
      Serial.println(v2);
      digitalWrite(a, HIGH);
      delay(10);
    }else{
      digitalWrite(a, LOW);
    }
  }
}
