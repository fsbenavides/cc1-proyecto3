#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>

using namespace std;


class jugador
{
    public:
        string nombre,posicion;
        int numero,agresividad;

        jugador();
        jugador(string nombre,int numero,string posicion,int agresividad);

        void setnombre(string n);
        void setnum(int num);
        void setposicion(string pos);
        void setagresividad(int agr);

        void print();

};

#endif // JUGADOR_H
