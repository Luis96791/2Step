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
    sf::Texture texture[20];
    sf::Sprite sprite[20];
    sf::Vector2f mouse;

    int clicks = 0;

    window.create(sf::VideoMode(900,600),"2Step Cards Game");
    text_fondo.loadFromFile("fondo.png");
    sprite_fondo.setTexture(text_fondo);
    text_volteada.loadFromFile("mazo_principal/carta1.png");
    back_volteada.setTexture(text_volteada);
    back_volteada.setPosition(286,24);

    llenarPilaMezclada();

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));

            if(utility->clickSprite(back_volteada,mouse)){
                clicks++;
                cout<<clicks<<endl;
                pila_mezclada->pop();
            }

            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.draw(sprite_fondo);
        window.draw(drawMazoPrincipal(clicks, text_volteada, back_volteada));
        window.draw(mostrarCartas(texture[0],sprite[0]));
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
    else if(clicks > 39 && clicks < 52)
    {
        texture.loadFromFile("mazo_principal/carta4.png");
        sprite.setPosition(286,40);
    }
    else if(clicks >= 52)
    {
        sprite.setPosition(-100,-100);
    }

    sprite.setTexture(texture);

    return sprite;
}

MiPila* Jugar::llenarPila()
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

MiPila* Jugar::llenarPilaMezclada()
{
    llenarPila();
    generar->llenar();
    Nodo* nodo = NULL;

    for(int c = 0; c < generar->tamanio; c++)
    {
        nodo = pila_principal->buscar(generar->numeros[c]);
        pila_mezclada->push(nodo->getId(),nodo->getNombre(),nodo->getPalo(),nodo->getColor());
    }
    return pila_mezclada;
}

/*** EN PROCESO ***/
PilaTablero* Jugar::llenarPilaTablero(MiPila* pila, sf::Texture texture, sf::Sprite sprite)
{
    pila_tablero->push(pila, texture, sprite, 385, 40);
    pila_tablero->push(pila, texture, sprite, 40, 40);
    pila_tablero->push(pila, texture, sprite, 60, 60);
    pila_tablero->push(pila, texture, sprite, 80, 80);

    return pila_tablero;
}

sf::Sprite Jugar::mostrarCartas(sf::Texture texture, sf::Sprite sprite)
{
    Nodo* nodo = pila_mezclada->ultimaPos();

    if(nodo->getId()==1){texture.loadFromFile("Corazones/As.png");}
    else if(nodo->getId()==2){texture.loadFromFile("Corazones/2.png");}
    else if(nodo->getId()==3){texture.loadFromFile("Corazones/3.png");}
    else if(nodo->getId()==4){texture.loadFromFile("Corazones/4.png");}
    else if(nodo->getId()==5){texture.loadFromFile("Corazones/5.png");}
    else if(nodo->getId()==6){texture.loadFromFile("Corazones/6.png");}
    else if(nodo->getId()==7){texture.loadFromFile("Corazones/7.png");}
    else if(nodo->getId()==8){texture.loadFromFile("Corazones/8.png");}
    else if(nodo->getId()==9){texture.loadFromFile("Corazones/9.png");}
    else if(nodo->getId()==10){texture.loadFromFile("Corazones/10.png");}
    else if(nodo->getId()==11){texture.loadFromFile("Corazones/joker.png");}
    else if(nodo->getId()==12){texture.loadFromFile("Corazones/reina.png");}
    else if(nodo->getId()==13){texture.loadFromFile("Corazones/rey.png");}

    else if(nodo->getId()==14){texture.loadFromFile("Diamantes/As.png");}
    else if(nodo->getId()==15){texture.loadFromFile("Diamantes/2.png");}
    else if(nodo->getId()==16){texture.loadFromFile("Diamantes/3.png");}
    else if(nodo->getId()==17){texture.loadFromFile("Diamantes/4.png");}
    else if(nodo->getId()==18){texture.loadFromFile("Diamantes/5.png");}
    else if(nodo->getId()==19){texture.loadFromFile("Diamantes/6.png");}
    else if(nodo->getId()==20){texture.loadFromFile("Diamantes/7.png");}
    else if(nodo->getId()==21){texture.loadFromFile("Diamantes/8.png");}
    else if(nodo->getId()==22){texture.loadFromFile("Diamantes/9.png");}
    else if(nodo->getId()==23){texture.loadFromFile("Diamantes/10.png");}
    else if(nodo->getId()==24){texture.loadFromFile("Diamantes/joker.png");}
    else if(nodo->getId()==25){texture.loadFromFile("Diamantes/reina.png");}
    else if(nodo->getId()==26){texture.loadFromFile("Diamantes/rey.png");}

    else if(nodo->getId()==27){texture.loadFromFile("Espadas/As.png");}
    else if(nodo->getId()==28){texture.loadFromFile("Espadas/2.png");}
    else if(nodo->getId()==29){texture.loadFromFile("Espadas/3.png");}
    else if(nodo->getId()==30){texture.loadFromFile("Espadas/4.png");}
    else if(nodo->getId()==31){texture.loadFromFile("Espadas/5.png");}
    else if(nodo->getId()==32){texture.loadFromFile("Espadas/6.png");}
    else if(nodo->getId()==33){texture.loadFromFile("Espadas/7.png");}
    else if(nodo->getId()==34){texture.loadFromFile("Espadas/8.png");}
    else if(nodo->getId()==35){texture.loadFromFile("Espadas/9.png");}
    else if(nodo->getId()==36){texture.loadFromFile("Espadas/10.png");}
    else if(nodo->getId()==37){texture.loadFromFile("Espadas/joker.png");}
    else if(nodo->getId()==38){texture.loadFromFile("Espadas/reina.png");}
    else if(nodo->getId()==39){texture.loadFromFile("Espadas/rey.png");}

    else if(nodo->getId()==40){texture.loadFromFile("Treboles/As.png");}
    else if(nodo->getId()==41){texture.loadFromFile("Treboles/2.png");}
    else if(nodo->getId()==42){texture.loadFromFile("Treboles/3.png");}
    else if(nodo->getId()==43){texture.loadFromFile("Treboles/4.png");}
    else if(nodo->getId()==44){texture.loadFromFile("Treboles/5.png");}
    else if(nodo->getId()==45){texture.loadFromFile("Treboles/6.png");}
    else if(nodo->getId()==46){texture.loadFromFile("Treboles/7.png");}
    else if(nodo->getId()==47){texture.loadFromFile("Treboles/8.png");}
    else if(nodo->getId()==48){texture.loadFromFile("Treboles/9.png");}
    else if(nodo->getId()==49){texture.loadFromFile("Treboles/10.png");}
    else if(nodo->getId()==50){texture.loadFromFile("Treboles/joker.png");}
    else if(nodo->getId()==51){texture.loadFromFile("Treboles/reina.png");}
    else if(nodo->getId()==52){texture.loadFromFile("Treboles/rey.png");}

    sprite.setTexture(texture);
    sprite.setPosition(385,40);

    return sprite;
}

Jugar::~Jugar()
{
    delete pila_principal;
    delete utility;
}
