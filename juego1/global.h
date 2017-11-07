const int PANTALLA_ANCHO = 800;
const int PANTALLA_ALTO  = 600;

BITMAP *buffer;

bool salir;

volatile unsigned int contador_tiempo_juego = 0;

const int FRAME_RATE = 30;

const int desplazamiento=4;

void pintar_pantalla()
{
    blit(buffer, screen, 0, 0, 0, 0, PANTALLA_ANCHO, PANTALLA_ALTO);
}

void inc_contador_tiempo_juego()
{
    contador_tiempo_juego++;
}
END_OF_FUNCTION(inc_contador_tiempo_juego)
