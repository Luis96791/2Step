#include <SFML/Graphics.hpp>
#include <iostream>
#include "Nodo.h"
#include "MiPila.h"

using namespace std;

int main()
{
    MiPila* pila1 = new MiPila;
    MiPila* pila2 = new MiPila;
    MiPila* pila3 = new MiPila;

    cout<<"--Lista1--"<<endl;
    pila1->push("As","Diamante","Rojo");
    pila1->push("Rey","Corazon","Rojo");
    pila1->push("Reina","Trebol","Negro");
    pila1->push("Joker","Espada","Negro");
    pila1->pop();
    pila1->printAll();
    cout<<"--Lista2--"<<endl;
    pila2->push("As","Diamante","Rojo");
    pila2->push("Rey","Corazon","Rojo");
    pila2->push("Reina","Trebol","Negro");
    pila2->push("Joker","Espada","Negro");
    pila2->pop();
    pila2->printAll();
    cout<<"--Concatenada--"<<endl;

    pila3 = pila3->unir(pila1,pila2);
    pila3->pop();
    pila3->printAll();

    return 0;
}
