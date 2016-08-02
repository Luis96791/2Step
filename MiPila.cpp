#include "MiPila.h"

MiPila::MiPila(char carta[5], char palo[10], char color[10])
{
    this->carta[5] = carta[5];
    this->palo[10] = palo[10];
    this->color[10] = color[10];
}

MiPila::~MiPila()
{
    //dtor
}
