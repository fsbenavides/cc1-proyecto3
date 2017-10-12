#include "jugador.h"
#include <iostream>


jugador::jugador()
{
    nombre="";
    numero=0;
    posicion="";
    agresividad=0;

}

jugador::jugador(string nombre,int numero,string posicion,int agresividad){
    setnombre(nombre);
    setnum(numero);
    setposicion(posicion);
    setagresividad(agresividad);

    print();
}

void jugador::setnombre(string n){
        nombre=n;
    }

void jugador::setposicion(string p){
        posicion=p;
    }
void jugador::setnum(int num){
    numero=num;
    }
void jugador::setagresividad(int agr){
    agresividad=agr;
    }

void jugador::print(){
    cout<<nombre<<" , "<<numero<<" , "<<posicion<<endl;
    if(agresividad==10)
        cout<<" el jugador es muy agresivo y no puede jugar"<<endl;
    else
        cout<<" el jugador puede jugar "<<endl;
}

