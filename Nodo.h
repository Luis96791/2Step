#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
    public:
        Nodo* siguiente;
        Nodo(char *nombre, char *palo, char *color);
        char* getNombre();
        char* getPalo();
        char* getColor();
        virtual ~Nodo();

    protected:

    private:
        char *nombre, *palo, *color;
};

#endif // NODO_H
