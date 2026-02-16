void blinkSOS() {
  for (int i = 0; i < 3; i++) {  
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  delay(400);
  
  for (int i = 0; i < 3; i++) {   
    digitalWrite(13, HIGH);
    delay(600);
    digitalWrite(13, LOW);
    delay(600);
  }
  delay(400);
  
  for (int i = 0; i < 3; i++) {   
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  delay(2000);  
}
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  blinkSOS();
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
}