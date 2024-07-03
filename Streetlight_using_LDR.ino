int ldr =2 ;  
int ledPin = 7;   
int ldrState = 0;  
void setup() {
  
  pinMode(ledPin, OUTPUT);
  
  pinMode(ldr, INPUT);
}

void loop() {
  
  ldrState = digitalRead(ldr);

  if (ldrState == 1) {
    
    digitalWrite(ledPin, HIGH);
  } else {
    
    digitalWrite(ledPin, LOW);
  }
}
