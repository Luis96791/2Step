#include "Nodo.h"

Nodo::Nodo(char *nombre, char *palo, char *color)
{
    this->nombre = nombre;
    this->palo = palo;
    this->color = color;
    siguiente = NULL;
}

char* Nodo::getNombre()
{
    return nombre;
}

char* Nodo::getPalo()
{
    return palo;
}

char* Nodo::getColor()
{
    return color;
}

Nodo::~Nodo()
{
    //dtor
}
