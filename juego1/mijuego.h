BITMAP *fondo;
BITMAP *choque;

player jugador;

void carga_juego()
{
    jugador.inicia();
    fondo=load_bmp("casa.bmp",NULL);
    choque=load_bmp("casa-choque.bmp",NULL);
}

void actualiza_juego()
{
    int ax,ay;

    ax=jugador.getx();
    ay=jugador.gety();
    jugador.teclado();

    bool choca = false ;
    int px=jugador.getx()-160;
    int py = jugador.gety()-160+16;
    for ( int ci=0; ci  < 32; ci++)
    {
        for (int cj=0; cj < 16; cj++)
        {

            if ( getpixel( choque, px+ci, py+cj) == 0xff0000 ){
                 choca = true;
                 ci = 32;
                 cj = 16;
            }
            if ( getpixel( choque, px+ci, py+cj) == 0x00ff00 ) salir = true;
        }
    }
    if ( choca ){
         jugador.posiciona( ax,ay );
    }
}
void pinta_juego()
{
    blit( fondo, buffer, 0,0, 160, 160, 480,325);
    jugador.pinta();

}
