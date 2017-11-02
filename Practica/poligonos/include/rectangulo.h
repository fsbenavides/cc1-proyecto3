#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "poligono.h"


class rectangulo : public poligono
{
    public:
        rectangulo();
        rectangulo(int a,int b);

        int area(int a,int b);

};

#endif // RECTANGULO_H
