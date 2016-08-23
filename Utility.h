#ifndef UTILITY_H
#define UTILITY_H
#include "SFML/Graphics.hpp"
#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Utility
{
    public:
        Utility();
        bool clickSprite(sf::Sprite s, sf::Vector2f mouse);
        string toString(int num);
        virtual ~Utility();

    protected:

    private:
};

#endif // UTILITY_H
