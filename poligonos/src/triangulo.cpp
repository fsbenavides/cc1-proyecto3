#include "triangulo.h"
#include <iostream>

using namespace std;

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
    cout<<"area: "<<a*b<<endl;
    return a*b;
}

