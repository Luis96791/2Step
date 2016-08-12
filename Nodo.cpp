#include "Nodo.h"

Nodo::Nodo(int id, char *nombre, char *palo, char *color)
{
    this->id = id;
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
