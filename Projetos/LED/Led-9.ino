
int iVermelho   = 2;
int iAzul       = 3;
int iAmarelo    = 4;
int iBotao      = 6;
int iEstado     = 0;


void setup ()
{
 pinMode ( iVermelho, OUTPUT );
 pinMode ( iAzul,     OUTPUT );
 pinMode ( iAmarelo,  OUTPUT );
 pinMode ( iBotao,    INPUT_PULLUP );
}

void loop ()
{
  if ( digitalRead (iBotao))
  {
      if ( iEstado == 0 )
      {
        DefineLuz ( HIGH, HIGH, HIGH );
        iEstado = 3;
      }    
      else
        if ( iEstado == 1 )
        {
          DefineLuz ( LOW, HIGH, HIGH );
          iEstado = 2;
        }
        else
          if ( iEstado == 2 )
          {
            DefineLuz ( LOW, LOW, HIGH );
            iEstado = 0;
          }
          else 
            if ( iEstado == 3 )
            {
              DefineLuz ( LOW, LOW, LOW );
              iEstado = 1;
            } 
        //delay (1000);
    
  }
}

void DefineLuz ( int iRed, int iGreen, int iYellow )
{
 digitalWrite ( iVermelho, iRed );
 digitalWrite ( iAzul,     iGreen );
 digitalWrite ( iAmarelo,  iYellow );
}

