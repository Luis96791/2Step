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
        NodoTablero(MiPila* pila, sf::Texture texture, sf::Sprite sprite, int pos_x, int pos_y);
        void setPila(MiPila* p);
        void setSprite(sf::Sprite spt);
        void setTexture(sf::Texture text);
        MiPila* getPila();
        sf::Sprite getSprite();
        sf::Texture getTexture();
        int posX();
        int posY();

        virtual ~NodoTablero();

    protected:

    private:
        MiPila* pila;
        sf::Texture texture;
        sf::Sprite sprite;
        int pos_x, pos_y;
};

#endif // NODOTABLERO_H
