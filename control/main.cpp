#include <iostream>

using namespace std;



int main()
{
    cout << "==== Pregunta 2 ====" << endl;
    int a = 5;
    int &b = a;
    while(a <= 10){
        if(b++ == 5)
            continue;
        else
            break;

    }
    cout << a << endl;

    cout << "==== Pregunta 3 ====" << endl;
    int m = 5;
    int *ptr = &m;
    while(*ptr <= 10) {
        cout << (*ptr)++ << endl;
    }
    cout << m << endl;
    return 0;
}
