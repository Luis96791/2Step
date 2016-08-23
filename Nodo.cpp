#include "Nodo.h"

Nodo::Nodo(int id, char *nombre, char * new_nombre, char *palo, char *color)
{
    this->id = id;
    this->nombre = nombre;
    this->new_nombre = new_nombre;
    this->palo = palo;
    this->color = color;
    siguiente = NULL;
}

char* Nodo::getNombre()
{
    return nombre;
}

char* Nodo::getNewNombre()
{
    return new_nombre;
}

char* Nodo::getPalo()
{
    return palo;
}

char* Nodo::getColor()
{
    return color;
}

int Nodo::getId()
{
    return id;
}

void Nodo::setNombre(char* nombre)
{
    this->nombre = nombre;
}

Nodo::~Nodo()
{
    //dtor
}
