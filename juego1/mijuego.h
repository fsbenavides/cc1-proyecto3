BITMAP *fondo;
BITMAP *choque;
BITMAP *superior;


BITMAP *casa;
BITMAP *casac;
BITMAP *casas;

BITMAP *bosque;
BITMAP *bosquec;
BITMAP *bosques;

player jugador;

int lugar;

void carga_juego()
{
    jugador.inicia();
    casa=load_bmp("casa.bmp",NULL);
    casac=load_bmp("casa-choque.bmp",NULL);
    casas=load_bmp("casa-sup.bmp",NULL);

    bosque=load_bmp("bosque.bmp",NULL);
    bosquec=load_bmp("bosque-choque.bmp",NULL);
    bosques=load_bmp("bosque-sup.bmp",NULL);

    fondo=casa;
    choque=casac;
    superior=casas;

    lugar=1;

}

void actualiza_juego()
{
    int cambio=0;
    int ax,ay;

    ax=jugador.getx();
    ay=jugador.gety();
    jugador.teclado();

    bool choca = false ;
    int px = jugador.getx();
    int py = jugador.gety()+16;

    if (lugar==1){
        px=jugador.getx()-160;
        py=jugador.gety()-160+16;
    }
    if (lugar==2){
        py=py+160;
    }
    for ( int ci=0; ci  < 32; ci++)
    {
        for (int cj=0; cj < 16; cj++)
        {

            if ( getpixel( choque, px+ci, py+cj) == 0xff0000 ){
                 choca = true;
            }
            if ( getpixel( choque, px+ci, py+cj) == 0x00ff00 ) cambio=1;
            if ( getpixel( choque, px+ci, py+cj) == 0x0000ff ) cambio=2;
            if ( getpixel( choque, px+ci, py+cj) == 0xffff00 ) salir = true;
        }
    }
    if ( choca ){
         jugador.posiciona( ax,ay );
    }

    switch (lugar)
    {
    case 1:
        if ( cambio == 1 )
         {
              lugar = 2;
              fondo  = bosque;
              choque = bosquec;
              superior = bosques;

              jugador.posiciona( 410,370 );
         }
         break;
    case 2:
         if ( cambio == 2 )
         {
              lugar = 1;
              fondo  = casa;
              choque = casac;
              superior = casas;


              jugador.posiciona( 290,440 );
         }
         break;
    default:
         break;
    }
}
void pinta_juego()
{
    int ancho,alto;
    int ax=0;
    int ay=0;
    int bx=0;
    int by=0;

    switch ( lugar )
    {
    case 1:
             bx=160;
             by=160;
             ancho = 480;
             alto = 325;
             break;
    case 2:
             ay=160;
             ancho = PANTALLA_ANCHO;
             alto  = PANTALLA_ALTO;
             break;
    default:
         break;
    }

    blit( fondo, buffer, ax,ay, bx, by, ancho,alto);

    jugador.pinta();

    masked_blit(superior, buffer, ax, ay, bx, by, ancho, alto);


}
