#include "cuadrado.h"
#include <iostream>

using namespace std;

cuadrado::cuadrado()
{
    altura=0;
    largo=altura;
}


int cuadrado::area(int a){
    cout<<"area: "<<a*a<<endl;
    return a*a;

}


