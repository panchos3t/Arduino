// Firmware para Controle de Cores do LED RGB
#define RED 3 // Define o pino 3 com PWM como RED
#define BLUE 5 // Define o pino 5 com PWM como BLUE
#define GREEN 6 // Define o pino 6 com PWM como GREEN
int red = 255, green = 255, blue = 255; // valores de 0 a 255 (variá-los para obter cores diferentes).
void setup() {
pinMode (RED, OUTPUT); // Pino 3 declarado como saída
pinMode (BLUE, OUTPUT); // Pino 5 declarado como saída
pinMode (GREEN, OUTPUT); // Pino 6 declarado como saída
}
void loop() {
analogWrite (GREEN, green); // Envia o sinal de "green" para o terminal de cor verde do LED
analogWrite (BLUE, blue); // Envia o sinal de "blue" para o terminal de cor azul do LED
analogWrite (RED, red); // Envia o sinal de "red" para o terminal de cor vvermelha do LED
}