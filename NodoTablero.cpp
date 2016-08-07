#include "NodoTablero.h"

NodoTablero::NodoTablero(MiPila* pila, sf::Texture texture, sf::Sprite sprite,int pos_x, int pos_y)
{
    this->pila = pila;
    this->texture = texture;
    this->sprite = sprite;
    this->pos_x = pos_x;
    this->pos_y = pos_y;
    siguiente = NULL;
}

void NodoTablero::setPila(MiPila *p)
{
    pila = p;
}

void NodoTablero::setSprite(sf::Sprite spt)
{
    sprite = spt;
}

void NodoTablero::setTexture(sf::Texture text)
{
    texture = text;
}

MiPila* NodoTablero::getPila()
{
    return pila;
}

sf::Texture NodoTablero::getTexture()
{
    return texture;
}

sf::Sprite NodoTablero::getSprite()
{
    return sprite;
}

int NodoTablero::posX()
{
    return pos_x;
}

int NodoTablero::posY()
{
    return pos_y;
}

NodoTablero::~NodoTablero()
{
    //dtor
}
