#include <iostream>
#include <allegro.h>
#include "global.h"
#include "player.h"
#include "mijuego.h"

using namespace std;

void inicia_allegro()
{
 allegro_init();
 install_keyboard();

 set_color_depth(32);
 set_gfx_mode(GFX_AUTODETECT_WINDOWED, PANTALLA_ANCHO, PANTALLA_ALTO, 0, 0);

 buffer = create_bitmap(PANTALLA_ANCHO, PANTALLA_ALTO);

    LOCK_VARIABLE(contador_tiempo_juego);
    LOCK_FUNCTION(inc_contador_tiempo_juego);


    install_int_ex(inc_contador_tiempo_juego, BPS_TO_TIMER( FRAME_RATE ));
}
int main()
{
 inicia_allegro();
 carga_juego();
 salir = false;

 while ( !salir )
    {
        if ( contador_tiempo_juego )
          {
            while ( contador_tiempo_juego )
            {
                actualiza_juego();

                contador_tiempo_juego--;
            }

            clear_to_color(buffer, 0x00000);

            pinta_juego();

            pintar_pantalla();

          }else{

            rest(1);
          }

       if ( key[KEY_ESC] ) salir = true;

    }

 destroy_bitmap(buffer);

 return 0;
}
END_OF_MAIN();
