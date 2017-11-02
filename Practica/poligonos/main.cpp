#include <iostream>
#include "poligono.h"
#include "cuadrado.h"
#include "triangulo.h"
#include "rectangulo.h"



using namespace std;

int main()
{
    rectangulo a(3,4);
    poligono *p;
    p=&a;
    p->area();

    return 0;
}
