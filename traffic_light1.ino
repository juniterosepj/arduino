// C++ code
//
int led1=10;
int led2=6;
int led3=2;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT); 
  pinMode(led3, OUTPUT);
}

void loop()
{
  digitalWrite(led1, HIGH);
  delay(3000); 
  digitalWrite(led1, LOW);
  delay(1000); 
  digitalWrite(led2, HIGH);
  delay(3000); 
  digitalWrite(led2, LOW);
  delay(1000); 
  digitalWrite(led3, HIGH);
  delay(3000); 
  digitalWrite(led3, LOW);
  delay(1000);
}