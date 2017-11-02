#include "triangulo.h"

triangulo::triangulo()
{
    largo=0;
    altura=0;
}

triangulo::triangulo(int a,int b){
    getlargo(a);
    getaltura(b);

    area(a,b);

}

int triangulo::area(int a,int b){
    return a*b;
}

