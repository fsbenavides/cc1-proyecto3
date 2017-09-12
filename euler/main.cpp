#include <iostream>

using namespace std;


int lista()
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


int factorial ()
{
    short x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    if(x<0)
        return 0;

    else
        cout<<"El factorial de "<<x<<" es ";
        long long acumulador=1;
        for(;x>0;acumulador *= x--);
        return acumulador;
    if(x==0)
        return 0;

}

int bisiesto()
{
    int x;
    cout<<"ingrese un año"<<endl;
    cin>>x;
    if(x%4==0){
        if((x%100)!=0 || (x%400)==0)
            cout<<"es bisiesto"<<endl;
    }
    else
        return 0;

}


int primo()
{
    int x;
    int y;
    int z;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
    if(x<2)
        cout<<"el numero no es primo"<<endl;
    y=0;
    z=1;
    while(z<=x){
        if(x%z==0)
            y=y+1;
        z=z+1;
    }
    if(y>2)
        return 1;
    else
        return 0;


}

int multiplo35()
{
    int p=0;
    int suma=0;
    for(int x=0;p<1000;p++)
    {
        if(p%3==0||p%5==0)
            suma=suma+p;

    }
    return suma;
}

int fibonacci()
{
    int x = 0;
    int y = 1;

	int z = 0;
	int suma = 0;

	while ( z < 4000000)
	{
		z = x + y;
		if(z % 2 == 0)
			suma += z;

		x = y;
		y = z;
	}
	return suma;
}

int mayorprimo()
{
    long long int k=600851475143;
    long long int x;

    for (x=2;x<k;x++)
    {
        while(k%x==0)
        {
            k/=x;
        }
    }

    return k;


}

int mayorpalindromo()
{
    int x=1000;
    long long pal;
    long long mayor=0;

    for (int p=100;p<1000;p++)
    {
        for (int r=100;r<1000;r++)
        {
            long long n=p*r;
            long long t=p*r;
            long long aux;
            int a;

            if(n>99999)
                a=5;
            if(n>9999)
                a=4;


            aux=(n%10)*(10*a);
            n=n/(10*a);
            n+=aux;

            if(n==t)
                pal=n;

            if(pal>mayor)
                mayor=pal;




        }
    }

   return mayor;
}






int main()
{
    int y;
    cout << "Hello world!" << endl;
    cin>>y;
    if(y==1)
        cout<<mayorpalindromo()<<endl;

    return 0;
}
