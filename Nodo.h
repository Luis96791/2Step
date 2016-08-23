#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
    public:
        Nodo* siguiente;
        Nodo(int id, char *nombre, char *new_nombre, char *palo, char *color);
        int getId();
        char* getNombre();
        char* getNewNombre();
        char* getPalo();
        char* getColor();
        void setNombre(char* nombre);
        virtual ~Nodo();

    protected:

    private:
        char *nombre, *new_nombre, *palo, *color;
        int id;
};

#endif // NODO_H
