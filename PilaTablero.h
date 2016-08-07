#ifndef PILATABLERO_H
#define PILATABLERO_H
#include <iostream>
#include "NodoTablero.h"
#include "MiPila.h"

using namespace std;

class PilaTablero
{
    public:
        NodoTablero* inicio = NULL;
        NodoTablero* fin = NULL;
        PilaTablero();
        bool vacio();
        void push(MiPila* pila, sf::Texture texture, sf::Sprite sprite, int pos_x, int pos_y);
        void pop();
        int size();
        virtual ~PilaTablero();

    protected:

    private:
};

#endif // PILATABLERO_H
