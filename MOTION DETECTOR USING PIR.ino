// C++ code
//
int sen=3;
int motor=5;

void setup()
{
  pinMode(sen,INPUT);
  pinMode(motor,OUTPUT);
}
void loop()
{
  if(digitalRead(sen)==0){
    digitalWrite(motor,HIGH);
  }
  else{
       digitalWrite(motor,LOW); 
  }
}MOTO