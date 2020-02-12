#include <iostream>
#include <conio.h>
#include "ListaDoble.h"


using namespace std;

int main()
{
    //creacion de objeto
    ListaDoble* lista = new ListaDoble();
    cout<<"Insercion de nodos"<<endl;
    lista->insertarInicio('c');
    lista->insertarInicio('b');
    lista->insertarInicio('a');
    lista->imprimir();
    cout<<endl;
    lista->EliminarUltimo();
    cout<<"Eliminacion del ultimo nodo"<<endl;
    lista->imprimir();
    cout<<endl;
    cout<<"Insercion de nodos"<<endl;
    lista->insertarInicio('z');
    lista->insertarInicio('y');
    lista->insertarInicio('x');
    lista->imprimir();
    cout<<endl;
    NodoListaDoble* aux = lista->Buscar("yellow");
    if(aux==0)
    {
        cout<<"caracter no encontrado"<<endl;
    }
    else
    {
        cout<<"Resultado de busqueda: "<<aux->c<<endl;
    }

    return 0;
}
