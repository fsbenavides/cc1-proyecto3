class player
{
    BITMAP *prota;
 int x,y;
 int direccion;
 int animacion;

    public:
       void inicia();
       void pinta();
       void teclado();
       int getx(){ return x; };
       int gety(){ return y; };
       void posiciona( int _x, int _y);
};


void player::inicia()
{
 prota  = load_bmp("personaje.bmp",NULL);
 direccion = 0;
 animacion = 0;
 x = 540;
 y = 280;
}


void player::pinta()
{
    masked_blit(prota, buffer, animacion*32, direccion*32, x, y, 32,32);
}

void player::teclado()
{
      int ax = x;
      int ay = y;
      // teclas control usuario
      if ( key[KEY_UP] )
      {
           y-=desplazamiento;
           direccion = 3;
      }
      if ( key[KEY_DOWN] )
      {
           y+=desplazamiento;
           direccion = 0;
      }
      if ( key[KEY_LEFT] )
      {
           x-=desplazamiento;
           direccion = 1;
      }
      if ( key[KEY_RIGHT] )
      {
           x+=desplazamiento;
           direccion = 2;
      }
      if ( ax != x || ay != y )
      {
           // entra si a cambiado alguna de las variables x,y
           animacion++;
           if ( animacion > 2 ) animacion = 0;
      }

      // limites globales
      if ( x < 0 ) x = 0;
      if ( x > PANTALLA_ANCHO ) x = PANTALLA_ANCHO;
      if ( y < 0 ) y = 0;
      if ( y > PANTALLA_ALTO )  y = PANTALLA_ALTO;
}

void player::posiciona( int _x, int _y)
{
     x=_x;
     y=_y;
}
