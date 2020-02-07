#include "NodoListaSimple.h"
#include <string>
using namespace std;

//-----------------------------------------------------------------------------------------------
//metodo constructor
NodoListaSimple::NodoListaSimple(int id, string nombre)
{
    this->id = id;
    this->nombre = nombre;
    this->siguiente = 0;

}
//-----------------------------------------------------------------------------------------------
//metodo destructor
NodoListaSimple::~NodoListaSimple()
{

}
