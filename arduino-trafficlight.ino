  int red = 9;
  int yellow = 8;
  int green = 7;
  
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT); //red
  pinMode(8,OUTPUT); //yellow
  pinMode(7,OUTPUT); //green
}

void loop() {
  Serial.println("Green");
  digitalWrite(green, HIGH);
  delay(2000);
  digitalWrite(green, LOW);
  delay(500);

  Serial.println("Yellow");
  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  delay(500);

  Serial.println("Red");
  digitalWrite(red, HIGH);
  delay(2500);
  digitalWrite(red, LOW);
  delay(500);
}
