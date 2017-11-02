#include "arraypoligono.h"
#include "poligono.h"
#include <iostream>

using namespace std;

arraypoligono::arraypoligono()
{
    largo=0;
    h=new poligono[0];
}
arraypoligono::arraypoligono(int t){
    largo=t;
    h=new poligono*[largo];

}

void arraypoligono::addpol(poligono a){

}
void arraypoligono::delpol(poligono a){

}

void arraypoligono::print(){

}

arraypoligono::~arraypoligono()
{
    delete[] h;
}
