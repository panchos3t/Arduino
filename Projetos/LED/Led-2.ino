
int iVerde = 13;  
  
void setup ()  
{  
   pinMode ( iVerde, OUTPUT );   
}  

void loop () 
{ 
   digitalWrite ( iVerde, HIGH ); 
   delay ( 1000 ); 
   digitalWrite ( iVerde, LOW ); 
   delay ( 1000 ); 
}