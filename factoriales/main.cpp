#include <iostream>

using namespace std;

int main()
{
    short x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    if(x<0)
        cout<<"el valor ingresado no es valido"<<endl;

    else
        cout<<"El factorial de "<<x<<" es ";
        long long acumulador=1;
        for(;x>0;acumulador *= x--);
        cout<<acumulador<<".\n";
    if(x==0)
        cout<<"El factorial de"<<x<<" es 0"<<endl;

    return 0;
}
