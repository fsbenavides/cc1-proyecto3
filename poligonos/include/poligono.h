#ifndef POLIGONO_H
#define POLIGONO_H


class poligono
{
    protected:

        int largo;
        int altura;


    public:

        virtual int area();
        void getlargo(int l);
        void getaltura(int a);



};

#endif // POLIGONO_H
