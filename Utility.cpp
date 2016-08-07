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

void Utility::mezclar()
{
    int num;
    for(int s = 1;s <= 52; s++)
    {
        num = 1+rand()%(53-1);
        cout<<num<<endl;
    }
}


Utility::~Utility()
{
    //dtor
}
