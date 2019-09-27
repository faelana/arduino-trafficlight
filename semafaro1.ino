  int vermelho = 9;
  int amarelo = 8;
  int verde = 7;
  
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT); //vermelho
  pinMode(8,OUTPUT); //amarelo
  pinMode(7,OUTPUT); //verde
}

void loop() {
  Serial.println("Verde");
  digitalWrite(verde, HIGH);
  delay(2000);
  digitalWrite(verde, LOW);
  delay(500);
  Serial.println("Amarelo");
  digitalWrite(amarelo, HIGH);
  delay(1000);
  digitalWrite(amarelo, LOW);
  delay(500);
  Serial.println("Vermelho");
  digitalWrite(vermelho, HIGH);
  delay(2500);
  digitalWrite(vermelho, LOW);
  delay(500);

}
