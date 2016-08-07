#include <SFML/Graphics.hpp>
#ifndef JUGAR_H
#define JUGAR_H
#include "Utility.h"
#include "Nodo.h"
#include "MiPila.h"
#include "PilaTablero.h"
#include "GenerarMazo.h"
#include <iostream>

using namespace std;


class Jugar
{
    public:
        GenerarMazo* generar = new GenerarMazo;
        MiPila* pila_principal = new MiPila;
        MiPila* pila_mezclada = new MiPila;
        PilaTablero* pila_tablero = new PilaTablero;
        Nodo* nodo = NULL;
        Utility* utility = new Utility;
        Jugar();
        void ventanaJugar();
        sf::Sprite drawMazoPrincipal(int clicks, sf::Texture texture, sf::Sprite sprite);
        MiPila* llenarPila();
        MiPila* llenarPilaMezclada();
        PilaTablero* llenarPilaTablero(MiPila* pila, sf::Texture texture, sf::Sprite sprite);
        sf::Sprite mostrarCartas(sf::Texture texture, sf::Sprite sprite);

        virtual ~Jugar();

    protected:

    private:
};

#endif // JUGAR_H
