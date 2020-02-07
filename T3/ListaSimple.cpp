#include "ListaSimple.h"
#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

#include <algorithm>

using namespace std;

//-----------------------------------------------------------------------------------------------
//constructor
ListaSimple::ListaSimple()
{
    this->contador=0;
    this->inicio=0;

}
//-----------------------------------------------------------------------------------------------
//destructor
ListaSimple::~ListaSimple()
{
    //dtor
}

//-----------------------------------------------------------------------------------------------
//metodo que inserta al inicio al estudiante
void ListaSimple::insertar(int id, string nombre)
{
    NodoListaSimple *nuevo = new NodoListaSimple(id,nombre); // creacion del nodo para el estudiante

    //validar si la lista esta vacia
    if (estaVacia())
     {
        this->inicio=nuevo; //el nodo inicio se posiciona como el primero

     }
     else
    {
        NodoListaSimple *temporal = this->inicio; // nodo temporal

        nuevo->siguiente = temporal; // se inserta al inicio

        this->inicio = nuevo;  // se corre la referencia de la cabeza

    }
    contador++;

}
//-----------------------------------------------------------------------------------------------
//metodo que elimina un desde un nodo enviado de la lista
void ListaSimple::Eliminar(NodoListaSimple* nodo)
{
    //si el nodo no es nulo buscar y eliminar desde esa referencia
    if(nodo!=0 && this->inicio!=0)
    {
        NodoListaSimple *temporal = this->inicio;

        while(temporal!=0)
        {
            if(temporal==nodo)
            {
                temporal->siguiente=0; //se apunta a nulo
                contador--;
                break;
            }


            temporal = temporal->siguiente;
        }

    }
    else
    {
        cout<<"el nodo buscado no existe en la lista"<<endl;
    }

}
//-----------------------------------------------------------------------------------------------
//metodo que busca un estudiante y devuelve el nodo de encontrarlo, sino retorna un null
NodoListaSimple* ListaSimple::Buscar(int n)
{
    NodoListaSimple *temporal = this->inicio; // nodo temporal que devuelve el metodo

    if(estaVacia())
    {
        cout<<"LIsta Vacia"<<endl;
    }
    else
    {
        while(temporal!=0)
        {
            if(temporal->id == n)
            {
                return temporal;
                break;
            }

            temporal = temporal->siguiente;
        }
    }
    return temporal;
}

//-----------------------------------------------------------------------------------------------
//metodo que imprime en consola la lista
void ListaSimple::imprimir()
{
    if(estaVacia())
    {
        cout<<"esta Vacia"<<endl;
    }else
    {
        NodoListaSimple *temporal = this->inicio; // nodo temporal

        while(temporal!=0)
        {
            cout<<"datos del Estudiante, Id: "<<temporal->id<<" Nombre: "<<temporal->nombre<<endl;

            temporal = temporal->siguiente;
        }
    }

}
//-----------------------------------------------------------------------------------------------
bool ListaSimple::estaVacia()
{
    return this->inicio==0;
}
