#ifndef NODOTABLERO_H
#define NODOTABLERO_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "MiPila.h"

using namespace std;

class NodoTablero
{
    public:
        NodoTablero* siguiente;
        NodoTablero(MiPila* pila);
        void setPila(MiPila* p);
        MiPila* getPila();

        virtual ~NodoTablero();

    protected:

    private:
        MiPila* pila;
};

#endif // NODOTABLERO_H
