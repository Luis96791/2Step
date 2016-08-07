#include <SFML/Graphics.hpp>
#include <iostream>
#include "Utility.h"
#include "Jugar.h"

using namespace std;

int main()
{
    Utility* utility = new Utility;
    Jugar* jugar = new Jugar;

    utility->mezclar();

    jugar->llenarPilaPrincipal();
    jugar->pila_principal->printAll();
    jugar->ventanaJugar();
    return 0;
}
