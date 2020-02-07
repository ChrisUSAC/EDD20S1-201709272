#ifndef NODOLISTASIMPLE_H
#define NODOLISTASIMPLE_H
#include <string>

using namespace std;

class NodoListaSimple
{
    public:
        //captura de datos
        int id; // identificador para cada estudiante
        string nombre; // nombre del estudiante

        NodoListaSimple *siguiente; //apuntador al nodo siguiente

        NodoListaSimple(int id, string nombre); // metodo constructor
        virtual ~NodoListaSimple(); //metodo destructor

    protected:

    private:
};

#endif // NODOLISTASIMPLE_H
