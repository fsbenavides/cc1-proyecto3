#include <iostream>



using namespace std;



int *getptrtofive(){
    int*x = new int;
    *x = 5;
    return x;
}



class integer{
    public:
        int val;

        //integer(){
        //val=0; cout<<"integer default constructor"<< endl;
        //}

        integer(int val=0){


            this->setVal(val);
            cout<<"constructor with arg "<<val<<endl;
        }

        void setVal(int val) {
            this->val = val;
        }
};

class point{
public:
    int x,y;
    point(){ cout<<"invocar constructor"<<endl;}

    ~point(){cout <<"destructor invoker"<<endl;}




};

class integerwrapper{
public:
    integer val;
    integerwrapper(){
        cout<<"integerwrapper default constructor"<<endl;
    }
};

class integerarray{
public:
    int *data;
    int length;

    integerarray(int length){
    data=new int[length];
    this -> length=length;
    }

    ~integerarray(){
        delete[] data;
    }


};



int main()
{
    int tam;
    cout<<"ingrese largo "<<endl;
    cin>>tam;
    integerarray arr(tam);


    arr.data = new int[arr.length];
    for(int i =0;i<arr.length;++i){
        cout<<" enter item "<<i<<": ";
        cin>>arr.data[i];
    }
    for (int i=0;i<arr.length;++i){
        cout << arr.data[i]<<endl;
    }



    int numitems;
    cout<<"cuantos numeros"<<endl;
    cin>>numitems;
    /*int *arr = new int [numitems];
    for(int i =0;i<numitems;++i){
        cout<<" enter item "<<i<<": ";
        cin>>arr[i];

    }
    for (int i=0;i<numitems;++i){
        cout << arr[i]<<endl;

    }

    if(true){
        point p;
    }
    cout <<"p out of scope"<<endl;
    delete[] arr;
    int *p =getptrtofive();
    cout<<*p<<endl;
    integer i(3);
    integer j;
    */
    return 0;
}
