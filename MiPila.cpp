#include "MiPila.h"

MiPila::MiPila()
{
    //ctor
}

bool MiPila::vacio()
{
    return inicio==NULL;
}

void MiPila::push(int id, char* nombre, char* palo, char* color)
{
    Nodo* temp = new Nodo(id, nombre, palo, color);

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

int MiPila::size()
{
    int tamanio = 0;
    Nodo* temp = inicio;

    while(temp != NULL)
    {
        tamanio++;
        temp = temp->siguiente;
    }
    return tamanio;
}

void MiPila::printAll()
{
    Nodo* temp = inicio;

    while(temp != NULL)
    {
        cout<<temp->getId()<<" , "<<temp->getNombre()<<" , "<<temp->getPalo()<<" , "<<temp->getColor()<<endl;
        temp = temp->siguiente;
    }
}

void MiPila::print(int index)
{
    Nodo* temp = inicio;
    int contador = 0;

    while(temp != NULL)
    {
        if(contador==index)
        {
            cout<<temp->getId()<<" , "<<temp->getNombre()<<" , "<<temp->getPalo()<<" , "<<temp->getColor()<<endl;
            return;
        }
        contador++;
        temp = temp->siguiente;
    }
}

void MiPila::pop()
{
    Nodo* temp = inicio;
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

Nodo* MiPila::ultimaPos()
{
    Nodo* temp = inicio;
    int cont = 0;
    while(temp != NULL)
    {
        if(cont == size()-1)
        {
            return temp;
        }
        temp = temp->siguiente;
        cont++;
    }
}

MiPila* MiPila::unir(MiPila* pila1, MiPila* pila2)
{
    Nodo* temporal = pila1->inicio;
    MiPila* newPila = new MiPila;

    while(temporal != NULL)
    {
        newPila->push(temporal->getId(),temporal->getNombre(),temporal->getPalo(),temporal->getColor());
        temporal = temporal->siguiente;
    }

    temporal = pila2->inicio;

    while(temporal != NULL)
    {
        newPila->push(temporal->getId(),temporal->getNombre(),temporal->getPalo(),temporal->getColor());
        temporal = temporal->siguiente;
    }

    return newPila;
}

Nodo* MiPila::buscar(int num)
{
    Nodo* temp = inicio;

    while(temp != NULL)
    {
        if(num == temp->getId())
        {
            return temp;
        }
        temp = temp->siguiente;
    }
    return NULL;
}

MiPila::~MiPila()
{
    //dtor
}
