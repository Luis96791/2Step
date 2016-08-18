#include <SFML/Graphics.hpp>
#ifndef JUGAR_H
#define JUGAR_H
#include "Utility.h"
#include "Nodo.h"
#include "MiPila.h"
#include "PilaTablero.h"
#include "GenerarMazo.h"
#include "Posiciones.h"
#include <iostream>

using namespace std;


class Jugar
{
    public:
        Posiciones posiciones[];
        GenerarMazo* generar = new GenerarMazo;
        MiPila* pila_principal = new MiPila;
        MiPila* pila_mezclada = new MiPila;
        MiPila* pilaEnTablero = new MiPila;
        PilaTablero* pila_tablero = new PilaTablero;
        Nodo* nodo = NULL;
        NodoTablero* nodo_tablero = NULL;
        Utility* utility = new Utility;
        Jugar();
        void ventanaJugar();
        sf::Sprite drawMazoPrincipal(int clicks, sf::Texture texture, sf::Sprite sprite);
        MiPila* llenarPila();
        MiPila* llenarPilaMezclada();
        Nodo* mostrarCartas();
        sf::Sprite llenarPosiciones(sf::Texture texture, sf::Sprite sprite);
        bool moverAPenultima();

        virtual ~Jugar();

    protected:

    private:
};

#endif // JUGAR_H
