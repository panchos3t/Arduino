/*
** Definindo os Pinos a serem usados
*/

int iVerde = 13;  
int iVermelho = 12;  
int iAzul = 11;  

/*
** Definindo a Direcao do Pino
*/
  
void setup ()  
{  
   pinMode ( iVerde, OUTPUT );  
   pinMode ( iVermelho, OUTPUT );  
   pinMode ( iAzul, OUTPUT );  
}  

/*
** Programa Exemplo de Controle dos Pinos
*/

void loop () 
{ 
   digitalWrite ( iVerde, HIGH ); 
   delay ( 1000 ); 
   digitalWrite ( iVerde, LOW ); 
   delay ( 1000 ); 
 
   digitalWrite ( iVermelho, HIGH ); 
   delay ( 2000 ); 
   digitalWrite ( iVermelho, LOW ); 
   delay ( 2000 ); 
 
   digitalWrite ( iAzul, HIGH ); 
   delay ( 3000 ); 
   digitalWrite ( iAzul, LOW ); 
   delay ( 3000 ); 
}