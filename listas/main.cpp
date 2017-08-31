#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    double suma;
    int mayor;
    int menor;
    double prom;
    mayor=0;
    suma=0;
    cout<<"ingrese una cantidad"<<endl;
    cin>>x;
    z=x;
    if(x<2)
        cout<<"el numero no es valido"<<endl;
    else
    {
        while(x>0)
        {

            cout<<"ingrese un numero"<<endl;
            cin>>y;
            if(x==z)
                menor=y;
            if(y>mayor)
                mayor=y;
            if(y<menor)
                menor=y;
            suma=suma+y;

            x=x-1;
        }
        prom=suma/z;

        cout<<"el mayor numero es "<<mayor<<endl<<"el menor numero es "<<menor<<endl<<"el promedio es "<<prom;
    }
    return 0;
}
