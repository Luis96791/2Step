#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
    public:
        Nodo* siguiente;
        Nodo(int id, char *nombre, char *palo, char *color);
        int getId();
        char* getNombre();
        char* getPalo();
        char* getColor();
        virtual ~Nodo();

    protected:

    private:
        char *nombre, *palo, *color;
        int id;
};

#endif // NODO_H
