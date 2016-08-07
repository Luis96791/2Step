#ifndef MIPILA_H
#define MIPILA_H
#include "Nodo.h"
#include <iostream>

using namespace std;

class MiPila
{
    public:
        Nodo* inicio = NULL;
        Nodo* fin = NULL;
        MiPila();
        bool vacio();
        void push(int id, char* nombre, char* palo, char* color);
        int size();
        void printAll();
        void print(int index);
        void pop();
        MiPila* unir(MiPila* pila1, MiPila* pila2);
        virtual ~MiPila();

    protected:

    private:
};

#endif // MIPILA_H
