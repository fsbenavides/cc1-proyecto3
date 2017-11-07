#include "arraypoligono.h"
#include "poligono.h"
#include <iostream>

using namespace std;

arraypoligono::arraypoligono()
{
    largo=0;
    h=new poligono*[0];
}
arraypoligono::arraypoligono(int t){
    largo=t;
    h=new poligono*[largo];

}

void arraypoligono::addpol(poligono a,int pos){
    *h[pos]=a;
}
void arraypoligono::delpol(poligono a,int pos){
    delete h[pos];
}

void arraypoligono::print(){
    for (int i=0;i<largo;i++){
        h[i]->area();
    }
}

arraypoligono::~arraypoligono()
{
    delete[] h;
}
