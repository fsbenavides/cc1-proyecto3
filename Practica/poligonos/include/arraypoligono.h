#ifndef ARRAYPOLIGONO_H
#define ARRAYPOLIGONO_H
#include "poligono.h"


class arraypoligono
{
    public:

        int largo;
        poligono **h;

        arraypoligono();
        arraypoligono(int t);
        ~arraypoligono();

        void addpol(poligono a);
        void delpol(poligono a);

        void print();

};

#endif // ARRAYPOLIGONO_H
