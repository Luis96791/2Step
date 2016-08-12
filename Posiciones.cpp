#include "Posiciones.h"

Posiciones::Posiciones(sf::Texture texture, sf::Sprite sprite, char* nombre_texture, int pos_x, int pos_y)
{
    this->texture = texture;
    this->sprite = sprite;
    this->nombre_texture = nombre_texture;
    this->pos_x = pos_x;
    this->pos_y = pos_y;
}

void Posiciones::setTexture(sf::Texture texture)
{
    this->texture = texture;
}

sf::Texture Posiciones::getTexture()
{
    return texture;
}

void Posiciones::setSprite(sf::Sprite sprite)
{
    this->sprite = sprite;
}

sf::Sprite Posiciones::getSprite()
{
    return sprite;
}

void Posiciones::setPosX(int pos_x)
{
    this->pos_x = pos_x;
}

int Posiciones::getPosX()
{
    return pos_x;
}

void Posiciones::setPosY(int pos_y)
{
    this->pos_y = pos_y;
}

int Posiciones::getPosY()
{
    return pos_y;
}

void Posiciones::setNombreTexture(char* nombre_texture)
{
    this->nombre_texture = nombre_texture;
}

char* Posiciones::getNombreTexture()
{
    return nombre_texture;
}

Posiciones::~Posiciones()
{
    //dtor
}
