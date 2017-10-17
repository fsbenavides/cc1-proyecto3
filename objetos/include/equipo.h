#ifndef EQUIPO_H
#define EQUIPO_H
#include "jugador.h"
#include <string>


class equipo
{
    public:
        string nombre;
        jugador p[11];

        equipo();
        equipo(string nombre,jugador p[11]);

        void setnom (string n);
        void setequipo (jugador p[11]);

        void printe();



};

#endif // EQUIPO_H
