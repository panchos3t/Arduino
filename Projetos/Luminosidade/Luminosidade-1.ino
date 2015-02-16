int valor = 0;  //Vari�vel que receber� o valor do LDR
int led_pin = 10; // Pino do LED
int analogin = A2; // Pino em ser� ligado o LDR 

void setup(){
  Serial.begin(9600); 
  pinMode(led_pin, OUTPUT); 
}

void loop()
{
  valor = analogRead(analogin); // A vari�vel valor recebe o valor do LDR
  Serial.println("O valor Da LDR e igual a: ");
  Serial.println ( valor); // Valor ser� mostrado no Serial Monitor
  delay(250); // Faz uma pausa de 250 milissegundos
  
  if (valor < 30) // Se o valor for menor que 30
  { 
	digitalWrite(led_pin, HIGH); // acende o led da porta 10
  } 
  else
  {                       //Caso seja maior 
    digitalWrite(led_pin, LOW); //apaga o LED
  } 
}