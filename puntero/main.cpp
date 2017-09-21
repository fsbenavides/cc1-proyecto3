#include <iostream>

using namespace std;

int suma(int *a,int n)
{
    int *aux=a;
    int temp=0;
    for (int i=0;i<n;i++)
        temp=temp+*(aux+i);

    return temp;
}
void len(char *a)
{
    char *aux=a;
    int cont=0;
    for (;*a!='\0';a++)
        cont++;
    cout<<cont<<endl;
}

void cambio(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x=2;
    int y=3;
    cambio(x,y);
    cout<<x<<" "<<y<<endl;

    int w=5;
    int *p_w = &w;
    cout<<*p_w<<endl;

    int a[4]={11,12,13,14};
    int b,c;
    int *pa;
    pa= &a[0];
    b=*pa;
    c=*(pa+2);
    c=c+3;
    cout<<*pa<<" "<<b<<" "<<c<<" "<<a[2]<<endl;


    int *pl;
    pl=&a[0];
    int z=0;
    for (int i=0;i<4;i++)
        z=z+*(pl+i);
    cout<<z<<endl;

    char s[]="asdasdasdsad";

    len(s);




    return 0;


}
