int rcInput01 = 9;
int output01 = 2;
int output02 = 3;
int output03 = 4;
int output04 = 5;
int led = 13;
int ch1;

void setup() {
  pinMode(rcInput01, INPUT);
  pinMode(output01, OUTPUT);
  pinMode(output02, OUTPUT);
  pinMode(output03, OUTPUT);
  pinMode(output04, OUTPUT);
  pinMode(led, OUTPUT);
  digitalWrite(output01, HIGH);
  digitalWrite(output02, HIGH);
  digitalWrite(output03, HIGH);
  digitalWrite(output04, HIGH);
  delay(5000); //delay for flight controler to start
  digitalWrite(led, HIGH);
}

void loop() {
  ch1 = pulseIn(rcInput01, HIGH); 
  if(ch1 > 1050 && ch1 < 1249){
    digitalWrite(output01, LOW);
  }
  else {
    digitalWrite(output01, HIGH);
  }
  
  if(ch1 > 1250 && ch1 < 1499){
    digitalWrite(output02, LOW);
  }
  else {
    digitalWrite(output02, HIGH);
  }
  
  if(ch1 > 1500 && ch1 < 1849){
    digitalWrite(output03, LOW);
  }
  else {
    digitalWrite(output03, HIGH);
  }
  
  if(ch1 > 1850){
    digitalWrite(output04, LOW);
  }
  else {
    digitalWrite(output04, HIGH);
  }
}
