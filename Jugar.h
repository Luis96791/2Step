#include <SFML/Graphics.hpp>
#ifndef JUGAR_H
#define JUGAR_H
#include "Utility.h"
#include "Nodo.h"
#include "MiPila.h"
#include <iostream>

using namespace std;


class Jugar
{
    public:
        MiPila* pila_principal = new MiPila;
        Utility* utility = new Utility;
        Jugar();
        void ventanaJugar();
        sf::Sprite drawMazoPrincipal(int clicks, sf::Texture texture, sf::Sprite sprite);
        MiPila* llenarPilaPrincipal();
        virtual ~Jugar();

    protected:

    private:
};

#endif // JUGAR_H
