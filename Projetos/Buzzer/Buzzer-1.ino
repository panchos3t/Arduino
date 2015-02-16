
const int buzzer = 10;
 
void setup() 
{
  pinMode(buzzer,OUTPUT);
}
 
void loop() 
{  
  //Ligando o buzzer com uma frequencia de 1500 hz.
  tone(buzzer,1500);   
  delay(500);
   
  //Desligando o buzzer.
  noTone(buzzer);
  delay(500);  
}