int viPot;
int pinPot = A1;

void setup ()
{
	Serial.begin (9600);
}

void loop ()
{
	viPot = analogRead (pinPot);
	Serial.print ( "Potenciometro: ");
	Serial.println (viPot);
	delay (100);
}
