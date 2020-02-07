#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
#include <string>
#include "NodoListaSimple.h"


using namespace std;

class ListaSimple
{
    public:
        ListaSimple(); // metodo constructor
        virtual ~ListaSimple(); // metodo destructor

        NodoListaSimple* inicio; // puntero que indica el inicio de la lista
        int contador; //lleva el control de cuantos nodos tiene la lista

        void insertar(int id, string nombre); // metodo que agrega nodos al inicio
        void Eliminar(NodoListaSimple* nodo);
        NodoListaSimple* Buscar(int n);

        void imprimir(); // metodo que imprime en consola
        bool estaVacia(); //metodo que avisa si la lista esta vacia o no


    protected:

    private:
};

#endif // LISTASIMPLE_H
