#include <iostream>
#include <conio.h>
#include "ListaSimple.h"
using namespace std;

int main()
{
    //creacion de objeto
    ListaSimple* lista = new ListaSimple();
    lista->insertar(5,"Juan");
    lista->insertar(4,"Maria");
    lista->insertar(3,"Emerson");
    lista->insertar(2,"Carmen");
    lista->insertar(1,"Maria");
    lista->imprimir();
    cout<<"Se utiliza el metodo eliminar, y el metodo Buscar"<<endl;
    lista->Eliminar(lista->Buscar(3));
    cout<<"Se imprime la lista despues de la eliminacion"<<endl;
    lista->imprimir();
    return 0;
}
