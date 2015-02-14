#include <LiquidCrystal.h> //Inclui a biblioteca do LCD
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Configura os pinos do Arduino para se comunicar com o LCD
 
int temp; //Inicia uma vari�vel inteira(temp), para escrever no LCD a contagem do tempo
 
void setup()
{

lcd.begin(16, 2); //Inicia o LCD com dimens�es 16x2(Colunas x Linhas)
lcd.setCursor(0, 0); //Posiciona o cursor na primeira coluna(0) e na primeira linha(0) do LCD
lcd.print("Ola Garagista!"); //Escreve no LCD "Ol� Garagista!"
lcd.setCursor(0, 1); //Posiciona o cursor na primeira coluna(0) e na segunda linha(1) do LCD
lcd.print("LabdeGaragem"); //Escreve no LCD "LabdeGaragem"
 
}
 
void loop()
{

lcd.setCursor(13, 1); //Posiciona o cursor na d�cima quarta coluna(13) e na segunda linha(1) do LCD
lcd.print(temp); //Escreve o valor atual da vari�vel de contagem no LCD
delay(1000); //Aguarda 1 segundo
temp++; //Incrementa vari�vel de contagem
 
if(temp == 600) //Se a vari�vel temp chegar em 600(10 Minutos),...
  {
  temp = 0; //...zera a vari�vel de contagem
  }

}