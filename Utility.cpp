#include "Utility.h"

Utility::Utility()
{
    //ctor
}

bool Utility::clickSprite(sf::Sprite s, sf::Vector2f mouse)
{
    sf::FloatRect bounds = s.getGlobalBounds();

    if(bounds.contains(mouse))
    {
        if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
         return true;
        }
    }
    return false;
}


Utility::~Utility()
{
    //dtor
}
