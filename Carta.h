#ifndef CARTA_H
#define CARTA_H

#include "MiPila.h"
#include <iostream>

using namespace std;

class Carta
{
    public:
        MiPila *pila_original, *pila_aux;
        Carta();
        void push(char carta[5], char palo[10], char color[10]);
        void mostrar();
        void pop(char carta[5], char palo[10], char color[10]);
        bool buscar(char carta[5]);
        virtual ~Carta();

    protected:

    private:

};

#endif // CARTA_H
