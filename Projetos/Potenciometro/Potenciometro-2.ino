//
// http://www.ajudino.com/2013/04/3-utilizando-potenciometro-no-arduino.html
//
int potenciometro = 0;	// Define o pino do Arduino que o potenci�metro est� conectado
int valor = 0;   		//Vari�vel que ir� receber o valor do potenci�metro
int led = 6 ; 			// Define o pino do Arduino que o led est� conectado

void setup() 
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);	// Seta a porta do led como sa�da
}

void loop() 
{
  valor = analogRead(potenciometro);	//Recebe o valor do potenci�metro
  if(valor > 0)
  {
    analogWrite(led, (valor/4));		//Acende o led com intensidade proporcional ao valor obtido
    Serial.println(valor); 				//Mostra no Serial Monitor o valor obtido do potenci�metro
  }
}