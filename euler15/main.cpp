#include <iostream>

using namespace std;


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
    int pal;
    int mayor;

    for (int p=0;p<1000;p++)
    {
        for (int r=0;r<1000;r++)
        {
            int t=p*r;



        }
    }

   return mayor;
}

int mcm()
{
    int respuesta;
    for (int p=2;p<=20;p++)
    return 0;

}




int main()
{
    int y;
    cout << "Hello world!" << endl;
    cin>>y;
    if(y==1)
        cout<<fibonacci()<<endl;
        cout<<multiplo35()<<endl;
        cout<<mayorprimo()<<endl;

    return 0;
}
