#include "equipo.h"
#include "jugador.h"
#include <iostream>

equipo::equipo()
{
    nombre="";
    p[11];
}

equipo::equipo(string nombre,jugador p[11])
{
    setnom(nombre);
    setequipo(p);



}

void equipo::setnom(string n){
    nombre=n;
}

void equipo::setequipo(jugador p[11]){
    for(int i=0;i<11;i++){
        string w,y;
        int x,z;
        cout<<"ingrese nombre del jugador"<<endl;
        cin>>w;
        cout<<"ingrese numero del jugador"<<endl;
        cin>>x;
        cout<<"ingrese posicion del jugador"<<endl;
        cin>>y;
        cout<<"ingrese agresividad del jugador"<<endl;
        cin>>z;

        p[i](w,x,y,z);

    }
}

void equipo::printe(){
    cout<<nombre<<endl;


}

