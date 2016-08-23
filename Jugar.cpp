#include "Jugar.h"

Jugar::Jugar()
{
    posiciones[20];
}

void Jugar::ventanaJugar()
{
    sf::RenderWindow window;
    sf::Texture text_fondo, text_volteada, text_perdido, text_ganado, text_btnAceptar, text_ultima;
    sf::Sprite sprite_fondo, back_volteada, back_perdido, back_ganado, back_btnAceptar, back_ultima;
    sf::Texture texture[20];
    sf::Texture text;
    sf::Sprite sprite[20];
    sf::Vector2f mouse;
    sf::Font font;
    sf::Text txt_pts, txt_puntos;
    Nodo* asignador;

    int clicks = 0, ultimaPos = 0, puntos = 0;
    bool click = true;

    window.create(sf::VideoMode(900,600),"2Step Cards Game");
    text_fondo.loadFromFile("fondo.png");
    sprite_fondo.setTexture(text_fondo);
    text_volteada.loadFromFile("mazo_principal/carta1.png");
    back_volteada.setTexture(text_volteada);
    back_volteada.setPosition(286,24);
    text_perdido.loadFromFile("msjPerdido.png");
    text_btnAceptar.loadFromFile("btnAceptar.png");
    text_ultima.loadFromFile("null.png");
    text_ganado.loadFromFile("msjGanado.png");

    font.loadFromFile("arial.ttf");
    txt_pts.setFont(font);
    txt_pts.setString("Puntos: ");
    txt_pts.setCharacterSize(24);
    txt_pts.setColor(sf::Color::White);
    txt_pts.setPosition(50,50);

    txt_puntos.setFont(font);
    txt_puntos.setCharacterSize(24);
    txt_puntos.setColor(sf::Color::White);
    txt_puntos.setPosition(150,50);

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

    int a = 0;

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {

            for(a = 0; a < 20; a++){
                if(sprite[a].getTexture()==NULL)
                {
                    break;
                }
            }

            mouse = window.mapPixelToCoords(sf::Mouse::getPosition(window));

            if(utility->clickSprite(back_volteada,mouse)){
                clicks++;
                ultimaPos++;
                pila_mezclada->pop();
                click = true;
                cout<<pilaEnTablero->ultimaPos()->getNombre()<<endl;
                cout<<pilaEnTablero->size()<<endl;
            }

            if(pila_mezclada->size() == 0)
            {
                back_ganado.setTexture(text_ganado);
                back_ganado.setPosition(300,150);
                back_btnAceptar.setTexture(text_btnAceptar);
                back_btnAceptar.setPosition(370,260);
                if(utility->clickSprite(back_btnAceptar,mouse))
                {
                    window.close();
                }
            }

            if(utility->clickSprite(sprite[a-1],mouse))
            {
                if(moverAPenultima())
                {
//                    int ac = a;
//                    sprite[a-1].setPosition(sprite[a-2].getPosition().x, sprite[a-2].getPosition().y);
//                    texture[a].create(78,90);
//                    ultimaPos--;
//------------------------------------
//                    sprite[a-2].setTexture(texture[a-1]);
////                    texture[a].create(78,90);
//                    ultimaPos--;
//------------------------------------
                    sprite[a-1].setTexture(texture[a]);
                    ultimaPos--;
                    texture[a-1].create(78,90);
                    puntos+=5;
//------------------------------------

                }
                txt_puntos.setString(utility->toString(puntos));

//                if(pilaEnTablero->size() > 3 && moverAntepenultima())
//                {
//                    sprite[a-1].setTexture(texture[a]);
//                    ultimaPos--;
//                    texture[a-1].create(78,90);
//                }
            }

            if(pilaEnTablero->size()==19)
            {
                back_perdido.setTexture(text_perdido);
                back_perdido.setPosition(300,150);
                back_btnAceptar.setTexture(text_btnAceptar);
                back_btnAceptar.setPosition(370,260);
                back_ultima.setTexture(text_ultima);
                back_ultima.setPosition(778,461);
                if(utility->clickSprite(back_btnAceptar,mouse))
                {
                    window.close();
                }
            }

            if(event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.draw(sprite_fondo);
        window.draw(drawMazoPrincipal(clicks, text_volteada, back_volteada));
        if(click){
            if(/*sprite[0].getTexture()==NULL &&*/ ultimaPos==0){
                asignador = mostrarCartas();
                texture[0].loadFromFile(asignador->getNombre());
                sprite[0].setTexture(texture[0]);
            }
            if(/*sprite[1].getTexture()==NULL &&*/ ultimaPos==1){
                asignador = mostrarCartas();
                texture[1].loadFromFile(asignador->getNombre());
                sprite[1].setTexture(texture[1]);
            }
            if(/*sprite[2].getTexture()==NULL &&*/ ultimaPos==2){
                asignador = mostrarCartas();
                texture[2].loadFromFile(asignador->getNombre());
                sprite[2].setTexture(texture[2]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==3){
                asignador = mostrarCartas();
                texture[3].loadFromFile(asignador->getNombre());
                sprite[3].setTexture(texture[3]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==4){
                asignador = mostrarCartas();
                texture[4].loadFromFile(asignador->getNombre());
                sprite[4].setTexture(texture[4]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==5){
                asignador = mostrarCartas();
                texture[5].loadFromFile(asignador->getNombre());
                sprite[5].setTexture(texture[5]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==6){
                asignador = mostrarCartas();
                texture[6].loadFromFile(asignador->getNombre());
                sprite[6].setTexture(texture[6]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==7){
                asignador = mostrarCartas();
                texture[7].loadFromFile(asignador->getNombre());
                sprite[7].setTexture(texture[7]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==8){
                asignador = mostrarCartas();
                texture[8].loadFromFile(asignador->getNombre());
                sprite[8].setTexture(texture[8]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==9){
                asignador = mostrarCartas();
                texture[9].loadFromFile(asignador->getNombre());
                sprite[9].setTexture(texture[9]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==10){
                asignador = mostrarCartas();
                texture[10].loadFromFile(asignador->getNombre());
                sprite[10].setTexture(texture[10]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==11){
                asignador = mostrarCartas();
                texture[11].loadFromFile(asignador->getNombre());
                sprite[11].setTexture(texture[11]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==12){
                asignador = mostrarCartas();
                texture[12].loadFromFile(asignador->getNombre());
                sprite[12].setTexture(texture[12]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==13){
                asignador = mostrarCartas();
                texture[13].loadFromFile(asignador->getNombre());
                sprite[13].setTexture(texture[13]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==14){
                asignador = mostrarCartas();
                texture[14].loadFromFile(asignador->getNombre());
                sprite[14].setTexture(texture[14]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==15){
                asignador = mostrarCartas();
                texture[15].loadFromFile(asignador->getNombre());
                sprite[15].setTexture(texture[15]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==16){
                asignador = mostrarCartas();
                texture[16].loadFromFile(asignador->getNombre());
                sprite[16].setTexture(texture[16]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==17){
                asignador = mostrarCartas();
                texture[17].loadFromFile(asignador->getNombre());
                sprite[17].setTexture(texture[17]);
            }
            if(/*sprite[3].getTexture()==NULL &&*/ ultimaPos==18){
                asignador = mostrarCartas();
                texture[18].loadFromFile(asignador->getNombre());
                sprite[18].setTexture(texture[18]);
            }
            pilaEnTablero->push(asignador->getId(),asignador->getNombre(),asignador->getNewNombre(),asignador->getPalo(),asignador->getColor());
            pila_tablero->push(pilaEnTablero);
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
        window.draw(back_perdido);
        window.draw(back_ganado);
        window.draw(back_btnAceptar);
        window.draw(back_ultima);
        window.draw(txt_pts);
        window.draw(txt_puntos);
        window.display();
    }
}

bool Jugar::moverAPenultima()
{
    int acum = 0;
    int tamanio = pilaEnTablero->size();
    Nodo* temp1 = pilaEnTablero->inicio;

    while(acum < (tamanio-2))
    {
        temp1 = temp1->siguiente;
        acum++;
    }

    int temp = acum;
    Nodo* nodo_temp = pilaEnTablero->inicio;

    int viajero = 0;
    while(true)
    {
        if(temp == viajero)
        {
            if(nodo_temp->getPalo()==nodo_temp->siguiente->getPalo()||nodo_temp->getNewNombre()==nodo_temp->siguiente->getNewNombre()){
                pilaEnTablero->eliminar(viajero);
                return true;
            }
        }
        nodo_temp = nodo_temp->siguiente;
        viajero++;
        if(nodo_temp->siguiente == NULL)
        {
            break;
        }
    }
    return false;
}

bool Jugar::moverAntepenultima()
{
    int acum = 0;
    int tamanio = pilaEnTablero->size();
    Nodo* temp1 = pilaEnTablero->inicio;

    while(acum < (tamanio-3))
    {
        temp1 = temp1->siguiente;
        acum++;
    }

    int temp = acum;
    Nodo* nodo_temp = pilaEnTablero->inicio;

    int viajero = 0;
    while(true)
    {
        if(temp == viajero)
        {
            if(nodo_temp->getPalo()==nodo_temp->siguiente->siguiente->getPalo()||nodo_temp->getNewNombre()==nodo_temp->siguiente->siguiente->getNewNombre()){
                pilaEnTablero->eliminar(viajero);
                return true;
            }
        }
        nodo_temp = nodo_temp->siguiente;
        if(nodo_temp->siguiente == NULL)
        {
            break;
        }
        viajero++;
    }
    return false;
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
    pila_principal->push(1,"As","As","Corazon","Rojo");
    pila_principal->push(2,"2","2","Corazon","Rojo");
    pila_principal->push(3,"3","3","Corazon","Rojo");
    pila_principal->push(4,"4","4","Corazon","Rojo");
    pila_principal->push(5,"5","5","Corazon","Rojo");
    pila_principal->push(6,"6","6","Corazon","Rojo");
    pila_principal->push(7,"7","7","Corazon","Rojo");
    pila_principal->push(8,"8","8","Corazon","Rojo");
    pila_principal->push(9,"9","9","Corazon","Rojo");
    pila_principal->push(10,"10","10","Corazon","Rojo");
    pila_principal->push(11,"Joker","Joker","Corazon","Rojo");
    pila_principal->push(12,"Reina","Reina","Corazon","Rojo");
    pila_principal->push(13,"Rey","Rey","Corazon","Rojo");

    pila_principal->push(14,"As","As","Diamante","Rojo");
    pila_principal->push(15,"2","2","Diamante","Rojo");
    pila_principal->push(16,"3","3","Diamante","Rojo");
    pila_principal->push(17,"4","4","Diamante","Rojo");
    pila_principal->push(18,"5","5","Diamante","Rojo");
    pila_principal->push(19,"6","6","Diamante","Rojo");
    pila_principal->push(20,"7","7","Diamante","Rojo");
    pila_principal->push(21,"8","8","Diamante","Rojo");
    pila_principal->push(22,"9","9","Diamante","Rojo");
    pila_principal->push(23,"10","10","Diamante","Rojo");
    pila_principal->push(24,"Joker","Joker","Diamante","Rojo");
    pila_principal->push(25,"Reina","Reina","Diamante","Rojo");
    pila_principal->push(26,"Rey","Rey","Diamante","Rojo");

    pila_principal->push(27,"As","As","Trebol","Negro");
    pila_principal->push(28,"2","2","Trebol","Negro");
    pila_principal->push(29,"3","3","Trebol","Negro");
    pila_principal->push(30,"4","4","Trebol","Negro");
    pila_principal->push(31,"5","5","Trebol","Negro");
    pila_principal->push(32,"6","6","Trebol","Negro");
    pila_principal->push(33,"7","7","Trebol","Negro");
    pila_principal->push(34,"8","8","Trebol","Negro");
    pila_principal->push(35,"9","9","Trebol","Negro");
    pila_principal->push(36,"10","10","Trebol","Negro");
    pila_principal->push(37,"Joker","Joker","Trebol","Negro");
    pila_principal->push(38,"Reina","Reina","Trebol","Negro");
    pila_principal->push(39,"Rey","Rey","Trebol","Negro");

    pila_principal->push(40,"As","As","Espada","Negro");
    pila_principal->push(41,"2","2","Espada","Negro");
    pila_principal->push(42,"3","3","Espada","Negro");
    pila_principal->push(43,"4","4","Espada","Negro");
    pila_principal->push(44,"5","5","Espada","Negro");
    pila_principal->push(45,"6","6","Espada","Negro");
    pila_principal->push(46,"7","7","Espada","Negro");
    pila_principal->push(47,"8","8","Espada","Negro");
    pila_principal->push(48,"9","9","Espada","Negro");
    pila_principal->push(49,"10","10","Espada","Negro");
    pila_principal->push(50,"Joker","Joker","Espada","Negro");
    pila_principal->push(51,"Reina","Reina","Espada","Negro");
    pila_principal->push(52,"Rey","Rey","Espada","Negro");


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
        pila_mezclada->push(nodo->getId(),nodo->getNombre(),nodo->getNewNombre(),nodo->getPalo(),nodo->getColor());
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
