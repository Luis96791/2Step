#include "Jugar.h"

Jugar::Jugar()
{
    posiciones[20];
}

void Jugar::ventanaJugar()
{
    sf::RenderWindow window;
    sf::Texture text_fondo, text_volteada,t_prueba;
    sf::Sprite sprite_fondo, back_volteada, s_prueba;
    sf::Texture texture[20];
    sf::Sprite sprite[20];
    sf::Vector2f mouse;
    Nodo* asignador;

    int clicks = 0, ultimaPos = 0;
    bool click = true;

    window.create(sf::VideoMode(900,600),"2Step Cards Game");
    text_fondo.loadFromFile("fondo.png");
    sprite_fondo.setTexture(text_fondo);
    text_volteada.loadFromFile("mazo_principal/carta1.png");
    back_volteada.setTexture(text_volteada);
    back_volteada.setPosition(286,24);

    sprite[0].setPosition(385,40);
    sprite[1].setPosition(484,40);
    sprite[2].setPosition(581,40);
    sprite[3].setPosition(679,40);
    sprite[4].setPosition(778,40);
    sprite[5].setPosition(778,150);
    sprite[6].setPosition(778,256);
    sprite[7].setPosition(679,256);
    sprite[8].setPosition(581,256);
    sprite[9].setPosition(483,256);
    sprite[10].setPosition(385,256);
    sprite[11].setPosition(287,256);
    sprite[12].setPosition(287,358);
    sprite[13].setPosition(287,461);
    sprite[14].setPosition(385,461);
    sprite[15].setPosition(483,461);
    sprite[16].setPosition(581,461);
    sprite[17].setPosition(679,461);
    sprite[18].setPosition(778,461);

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
                ultimaPos++;
                pila_mezclada->pop();
                click = true;
            }

            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.draw(sprite_fondo);
        window.draw(drawMazoPrincipal(clicks, text_volteada, back_volteada));
        if(click){
            if(sprite[0].getTexture()==NULL && ultimaPos==0){
                asignador = mostrarCartas();
                texture[0].loadFromFile(asignador->getNombre());
                sprite[0].setTexture(texture[0]);
//                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[1].getTexture()==NULL && ultimaPos==1){
                asignador = mostrarCartas();
                texture[1].loadFromFile(asignador->getNombre());
                sprite[1].setTexture(texture[1]);
//                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[2].getTexture()==NULL && ultimaPos==2){
                asignador = mostrarCartas();
                texture[2].loadFromFile(asignador->getNombre());
                sprite[2].setTexture(texture[2]);
//                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[3].getTexture()==NULL && ultimaPos==3){
                asignador = mostrarCartas();
                texture[3].loadFromFile(asignador->getNombre());
                sprite[3].setTexture(texture[3]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[4].getTexture()==NULL && ultimaPos==4){
                asignador = mostrarCartas();
                texture[4].loadFromFile(asignador->getNombre());
                sprite[4].setTexture(texture[4]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[5].getTexture()==NULL && ultimaPos==5){
                asignador = mostrarCartas();
                texture[5].loadFromFile(asignador->getNombre());
                sprite[5].setTexture(texture[5]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[6].getTexture()==NULL && ultimaPos==6){
                asignador = mostrarCartas();
                texture[6].loadFromFile(asignador->getNombre());
                sprite[6].setTexture(texture[6]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[7].getTexture()==NULL && ultimaPos==7){
                asignador = mostrarCartas();
                texture[7].loadFromFile(asignador->getNombre());
                sprite[7].setTexture(texture[7]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[8].getTexture()==NULL && ultimaPos==8){
                asignador = mostrarCartas();
                texture[8].loadFromFile(asignador->getNombre());
                sprite[8].setTexture(texture[8]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[9].getTexture()==NULL && ultimaPos==9){
                asignador = mostrarCartas();
                texture[9].loadFromFile(asignador->getNombre());
                sprite[9].setTexture(texture[9]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[10].getTexture()==NULL && ultimaPos==10){
                asignador = mostrarCartas();
                texture[10].loadFromFile(asignador->getNombre());
                sprite[10].setTexture(texture[10]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[11].getTexture()==NULL && ultimaPos==11){
                asignador = mostrarCartas();
                texture[11].loadFromFile(asignador->getNombre());
                sprite[11].setTexture(texture[11]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[12].getTexture()==NULL && ultimaPos==12){
                asignador = mostrarCartas();
                texture[12].loadFromFile(asignador->getNombre());
                sprite[12].setTexture(texture[12]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[13].getTexture()==NULL && ultimaPos==13){
                asignador = mostrarCartas();
                texture[13].loadFromFile(asignador->getNombre());
                sprite[13].setTexture(texture[13]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[14].getTexture()==NULL && ultimaPos==14){
                asignador = mostrarCartas();
                texture[14].loadFromFile(asignador->getNombre());
                sprite[14].setTexture(texture[14]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[15].getTexture()==NULL && ultimaPos==15){
                asignador = mostrarCartas();
                texture[15].loadFromFile(asignador->getNombre());
                sprite[15].setTexture(texture[15]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[16].getTexture()==NULL && ultimaPos==16){
                asignador = mostrarCartas();
                texture[16].loadFromFile(asignador->getNombre());
                sprite[16].setTexture(texture[16]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            if(sprite[17].getTexture()==NULL && ultimaPos==17){
                asignador = mostrarCartas();
                texture[17].loadFromFile(asignador->getNombre());
                sprite[17].setTexture(texture[17]);
                pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getPalo(),asignador->getColor());
                pila_tablero->push(pilaEnTablero);
            }
            click = false;
        }


        window.draw(sprite[0]);
        window.draw(sprite[1]);
        window.draw(sprite[2]);
        window.draw(sprite[3]);
        window.draw(sprite[4]);
        window.draw(sprite[5]);
        window.draw(sprite[6]);
        window.draw(sprite[7]);
        window.draw(sprite[8]);
        window.draw(sprite[9]);
        window.draw(sprite[10]);
        window.draw(sprite[11]);
        window.draw(sprite[12]);
        window.draw(sprite[13]);
        window.draw(sprite[14]);
        window.draw(sprite[15]);
        window.draw(sprite[16]);
        window.draw(sprite[17]);
        window.draw(sprite[18]);
        window.display();
    }
    for(int c = 0; c <pila_tablero->size(); c++){
        pilaEnTablero->printAll();
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



Nodo* Jugar::mostrarCartas()
{
    Nodo* nodo = pila_mezclada->ultimaPos();

    if(nodo->getId()==1){nodo->setNombre("Corazones/As.png");}
    else if(nodo->getId()==2){nodo->setNombre("Corazones/2.png");}
    else if(nodo->getId()==3){nodo->setNombre("Corazones/3.png");}
    else if(nodo->getId()==4){nodo->setNombre("Corazones/4.png");}
    else if(nodo->getId()==5){nodo->setNombre("Corazones/5.png");}
    else if(nodo->getId()==6){nodo->setNombre("Corazones/6.png");}
    else if(nodo->getId()==7){nodo->setNombre("Corazones/7.png");}
    else if(nodo->getId()==8){nodo->setNombre("Corazones/8.png");}
    else if(nodo->getId()==9){nodo->setNombre("Corazones/9.png");}
    else if(nodo->getId()==10){nodo->setNombre("Corazones/10.png");}
    else if(nodo->getId()==11){nodo->setNombre("Corazones/joker.png");}
    else if(nodo->getId()==12){nodo->setNombre("Corazones/reina.png");}
    else if(nodo->getId()==13){nodo->setNombre("Corazones/rey.png");}

    else if(nodo->getId()==14){nodo->setNombre("Diamantes/As.png");}
    else if(nodo->getId()==15){nodo->setNombre("Diamantes/2.png");}
    else if(nodo->getId()==16){nodo->setNombre("Diamantes/3.png");}
    else if(nodo->getId()==17){nodo->setNombre("Diamantes/4.png");}
    else if(nodo->getId()==18){nodo->setNombre("Diamantes/5.png");}
    else if(nodo->getId()==19){nodo->setNombre("Diamantes/6.png");}
    else if(nodo->getId()==20){nodo->setNombre("Diamantes/7.png");}
    else if(nodo->getId()==21){nodo->setNombre("Diamantes/8.png");}
    else if(nodo->getId()==22){nodo->setNombre("Diamantes/9.png");}
    else if(nodo->getId()==23){nodo->setNombre("Diamantes/10.png");}
    else if(nodo->getId()==24){nodo->setNombre("Diamantes/joker.png");}
    else if(nodo->getId()==25){nodo->setNombre("Diamantes/reina.png");}
    else if(nodo->getId()==26){nodo->setNombre("Diamantes/rey.png");}

    else if(nodo->getId()==27){nodo->setNombre("Treboles/As.png");}
    else if(nodo->getId()==28){nodo->setNombre("Treboles/2.png");}
    else if(nodo->getId()==29){nodo->setNombre("Treboles/3.png");}
    else if(nodo->getId()==30){nodo->setNombre("Treboles/4.png");}
    else if(nodo->getId()==31){nodo->setNombre("Treboles/5.png");}
    else if(nodo->getId()==32){nodo->setNombre("Treboles/6.png");}
    else if(nodo->getId()==33){nodo->setNombre("Treboles/7.png");}
    else if(nodo->getId()==34){nodo->setNombre("Treboles/8.png");}
    else if(nodo->getId()==35){nodo->setNombre("Treboles/9.png");}
    else if(nodo->getId()==36){nodo->setNombre("Treboles/10.png");}
    else if(nodo->getId()==37){nodo->setNombre("Treboles/joker.png");}
    else if(nodo->getId()==38){nodo->setNombre("Treboles/reina.png");}
    else if(nodo->getId()==39){nodo->setNombre("Treboles/rey.png");}

    else if(nodo->getId()==40){nodo->setNombre("Espadas/As.png");}
    else if(nodo->getId()==41){nodo->setNombre("Espadas/2.png");}
    else if(nodo->getId()==42){nodo->setNombre("Espadas/3.png");}
    else if(nodo->getId()==43){nodo->setNombre("Espadas/4.png");}
    else if(nodo->getId()==44){nodo->setNombre("Espadas/5.png");}
    else if(nodo->getId()==45){nodo->setNombre("Espadas/6.png");}
    else if(nodo->getId()==46){nodo->setNombre("Espadas/7.png");}
    else if(nodo->getId()==47){nodo->setNombre("Espadas/8.png");}
    else if(nodo->getId()==48){nodo->setNombre("Espadas/9.png");}
    else if(nodo->getId()==49){nodo->setNombre("Espadas/10.png");}
    else if(nodo->getId()==50){nodo->setNombre("Espadas/joker.png");}
    else if(nodo->getId()==51){nodo->setNombre("Espadas/reina.png");}
    else if(nodo->getId()==52){nodo->setNombre("Espadas/rey.png");}

//    sprite.setTexture(texture);

    return nodo;
}

Jugar::~Jugar()
{
    delete pila_principal;
    delete pila_mezclada;
    delete utility;
}
