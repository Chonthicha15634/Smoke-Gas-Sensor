int ledPin = D0;
int analogPin = A0; 
int val = 0;
void setup() {
  pinMode(ledPin, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  val = analogRead(analogPin);   
  Serial.print("val = "); 
  Serial.println(val); 
  if (val > 150) { 
    digitalWrite(ledPin, HIGH); 
  }
  else {
    digitalWrite(ledPin, LOW); 
  }
  delay(100);
}
