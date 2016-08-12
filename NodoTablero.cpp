#include "NodoTablero.h"

NodoTablero::NodoTablero(MiPila* pila)
{
    this->pila = pila;
    siguiente = NULL;
}

void NodoTablero::setPila(MiPila *p)
{
    pila = p;
}

MiPila* NodoTablero::getPila()
{
    return pila;
}

NodoTablero::~NodoTablero()
{
    //dtor
}
