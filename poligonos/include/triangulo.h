#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "poligono.h"


class triangulo : public poligono
{
    public:
        triangulo();
        triangulo(int a,int b);

        int area(int a,int b);
};

#endif // TRIANGULO_H
