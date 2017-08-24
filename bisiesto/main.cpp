#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"ingrese un año"<<endl;
    cin>>x;
    if(x%4==0){
        if((x%100)!=0 || (x%400)==0)
            cout<<"es bisiesto"<<endl;
    }
    else
        cout<<"no es bisiesto"<<endl;

    return 0;
}
