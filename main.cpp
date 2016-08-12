#include <SFML/Graphics.hpp>
#include <iostream>
#include "Jugar.h"
#include "MiPila.h"
#include "PilaTablero.h"
#include "Nodo.h"

using namespace std;

int main()
{
    PilaTablero* pila_tablero = new PilaTablero;
    sf::Texture texture;
    sf::Sprite sprite;

    Jugar* jugar = new Jugar;

    jugar->pila_mezclada->printAll();
    jugar->ventanaJugar();
    cout<<"--pila mezclada menos pop's--"<<endl;
    jugar->pila_mezclada->printAll();
    cout<<jugar->pila_mezclada->size()<<endl;
    jugar->mostrarCartas();
    return 0;
}
