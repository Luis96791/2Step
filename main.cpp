#include <SFML/Graphics.hpp>
#include "MiPila.h"
#include "Carta.h"

int main()
{
    Carta carta;

    carta.push("As","Treboles","Negro");
    carta.push("Joker","Corazones","Rojo");
    carta.push("Queen","Diamantes","Rojo");
    carta.push("King","Espadas","Negro");

    carta.mostrar();
//    sf::RenderWindow window;
//    sf::Texture texture;
//    sf::Sprite background;
//
//    window.create(sf::VideoMode(900, 600), "2Step Card Game");
//    texture.loadFromFile("fondo.png");
//    background.setTexture(texture);
//
//    while(window.isOpen())
//    {
//        sf::Event Event;
//        while(window.pollEvent(Event))
//        {
//            if(Event.type == sf::Event::Closed || Event.key.code == sf::Keyboard::Escape)
//                window.close();
//        }
//
//        window.draw(background);
//        window.display();
//    }
    return 0;
}
