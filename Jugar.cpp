#include "Jugar.h"

Jugar::Jugar()
{
    //ctor
}

void Jugar::ventanaJugar()
{
    sf::RenderWindow window;
    sf::Texture text_fondo, text_volteada;
    sf::Sprite sprite_fondo, back_volteada;
    sf::Vector2f mouse;

    int clicks = 0;

    window.create(sf::VideoMode(900,600),"2Step Cards Game");
    text_fondo.loadFromFile("fondo.png");
    sprite_fondo.setTexture(text_fondo);
    text_volteada.loadFromFile("mazo_principal/carta1.png");
    back_volteada.setTexture(text_volteada);
    back_volteada.setPosition(286,24);

    llenarPilaPrincipal();

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));

            if(utility->clickSprite(back_volteada,mouse)){
                clicks++;
                cout<<clicks<<endl;
            }

            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.draw(sprite_fondo);
        window.draw(drawMazoPrincipal(clicks, text_volteada, back_volteada));
        window.display();
    }

}

sf::Sprite Jugar::drawMazoPrincipal(int clicks, sf::Texture texture, sf::Sprite sprite)
{
    if(clicks > 13 && clicks <= 26)
    {
        texture.loadFromFile("mazo_principal/carta2.png");
        sprite.setPosition(286,32);
    }
    else if(clicks > 26 && clicks <= 39)
    {
        texture.loadFromFile("mazo_principal/carta3.png");
        sprite.setPosition(286,37);
    }
    else if(clicks > 39)
    {
        texture.loadFromFile("mazo_principal/carta4.png");
        sprite.setPosition(286,40);
    }

    sprite.setTexture(texture);

    return sprite;
}

MiPila* Jugar::llenarPilaPrincipal()
{
    pila_principal->push(1,"As","Corazon","Rojo");
    pila_principal->push(2,"2","Corazon","Rojo");
    pila_principal->push(3,"3","Corazon","Rojo");
    pila_principal->push(4,"4","Corazon","Rojo");
    pila_principal->push(5,"5","Corazon","Rojo");
    pila_principal->push(6,"6","Corazon","Rojo");
    pila_principal->push(7,"7","Corazon","Rojo");
    pila_principal->push(8,"8","Corazon","Rojo");
    pila_principal->push(9,"9","Corazon","Rojo");
    pila_principal->push(10,"10","Corazon","Rojo");
    pila_principal->push(11,"Joker","Corazon","Rojo");
    pila_principal->push(12,"Reina","Corazon","Rojo");
    pila_principal->push(13,"Rey","Corazon","Rojo");

    pila_principal->push(14,"As","Diamante","Rojo");
    pila_principal->push(15,"2","Diamante","Rojo");
    pila_principal->push(16,"3","Diamante","Rojo");
    pila_principal->push(17,"4","Diamante","Rojo");
    pila_principal->push(18,"5","Diamante","Rojo");
    pila_principal->push(19,"6","Diamante","Rojo");
    pila_principal->push(20,"7","Diamante","Rojo");
    pila_principal->push(21,"8","Diamante","Rojo");
    pila_principal->push(22,"9","Diamante","Rojo");
    pila_principal->push(23,"10","Diamante","Rojo");
    pila_principal->push(24,"Joker","Diamante","Rojo");
    pila_principal->push(25,"Reina","Diamante","Rojo");
    pila_principal->push(26,"Rey","Diamante","Rojo");

    pila_principal->push(27,"As","Trebol","Negro");
    pila_principal->push(28,"2","Trebol","Negro");
    pila_principal->push(29,"3","Trebol","Negro");
    pila_principal->push(30,"4","Trebol","Negro");
    pila_principal->push(31,"5","Trebol","Negro");
    pila_principal->push(32,"6","Trebol","Negro");
    pila_principal->push(33,"7","Trebol","Negro");
    pila_principal->push(34,"8","Trebol","Negro");
    pila_principal->push(35,"9","Trebol","Negro");
    pila_principal->push(36,"10","Trebol","Negro");
    pila_principal->push(37,"Joker","Trebol","Negro");
    pila_principal->push(38,"Reina","Trebol","Negro");
    pila_principal->push(39,"Rey","Trebol","Negro");

    pila_principal->push(40,"As","Espada","Negro");
    pila_principal->push(41,"2","Espada","Negro");
    pila_principal->push(42,"3","Espada","Negro");
    pila_principal->push(43,"4","Espada","Negro");
    pila_principal->push(44,"5","Espada","Negro");
    pila_principal->push(45,"6","Espada","Negro");
    pila_principal->push(46,"7","Espada","Negro");
    pila_principal->push(47,"8","Espada","Negro");
    pila_principal->push(48,"9","Espada","Negro");
    pila_principal->push(49,"10","Espada","Negro");
    pila_principal->push(50,"Joker","Espada","Negro");
    pila_principal->push(51,"Reina","Espada","Negro");
    pila_principal->push(52,"Rey","Espada","Negro");


    return pila_principal;
}

Jugar::~Jugar()
{
    delete pila_principal;
    delete utility;
}
