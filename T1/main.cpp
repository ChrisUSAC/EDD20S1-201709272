#include <iostream>
#include<conio.h>
#include "T1.h"
using namespace std;

int main()
{

    //creacion de objeto
    T1* n = new T1();
    int num; //variable que almacena el valor de M para la matriz
    cout << "Matriz MxM" << endl;
    cout << "Ingrese el parametro para M" << endl;
    cin>>num;
    //metodo que crea la matriz y la grafica
    n->crearMatriz(num);


    return 0;
}
