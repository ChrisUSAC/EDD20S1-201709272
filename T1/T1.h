#ifndef T1_H
#define T1_H

#include<iostream> //libreria estandar de c++
#include<conio.h>

using namespace std;


class T1
{
    public:
        //metodo constructor
        T1();
        //metodo destructor
        virtual ~T1();
        void crearMatriz(int M); // metodo que crea la matriz con el valor, y rellena el borde con numeros 1
    protected:

    private:
};

#endif // T1_H
