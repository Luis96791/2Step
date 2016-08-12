#ifndef POSICIONES_H
#define POSICIONES_H
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class Posiciones
{
    public:
        int pos_x, pos_y;
        char* nombre_texture;
        sf::Texture texture;
        sf::Sprite sprite;
        Posiciones(sf::Texture texture, sf::Sprite sprite, char* nombre_texture, int pos_x, int pos_y);
        void setTexture(sf::Texture texture);
        void setSprite(sf::Sprite sprite);
        void setPosX(int pos_x);
        void setPosY(int pos_y);
        void setNombreTexture(char* nombre_texture);
        sf::Texture getTexture();
        sf::Sprite getSprite();
        char* getNombreTexture();
        int getPosX();
        int getPosY();
        virtual ~Posiciones();

    protected:

    private:
};

#endif // POSICIONES_H
