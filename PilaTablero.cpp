#include "PilaTablero.h"

PilaTablero::PilaTablero()
{
    //ctor
}

bool PilaTablero::vacio()
{
    return inicio==NULL;
}

void PilaTablero::push(MiPila* pila, sf::Texture texture, sf::Sprite sprite, int pos_x, int pos_y)
{
    NodoTablero* temp = new NodoTablero(pila, texture, sprite, pos_x, pos_y);

    if(vacio())
    {
        inicio = fin = temp;
    }
    else
    {
        fin->siguiente = temp;
        fin = temp;
    }
}

void PilaTablero::pop()
{
    NodoTablero* temp = inicio;
    int contador = 1;

    while(temp->siguiente != NULL)
    {
        if(contador == size()-1)
        {
            temp->siguiente = temp->siguiente->siguiente;
            return;
        }
        temp = temp->siguiente;
        contador++;
    }
}

int PilaTablero::size()
{
    int tamanio = 0;
    NodoTablero* temp = inicio;

    while(temp != NULL)
    {
        tamanio++;
        temp = temp->siguiente;
    }
    return tamanio;
}

PilaTablero::~PilaTablero()
{
    //dtor
}
