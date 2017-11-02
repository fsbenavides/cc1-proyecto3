#include "rectangulo.h"

rectangulo::rectangulo()
{
    largo=0;
    altura=0;
}

rectangulo::rectangulo(int a,int b){
    getlargo(a);
    getaltura(b);

    area(a,b);

}

int rectangulo::area(int a,int b){
    return a*b;
}


