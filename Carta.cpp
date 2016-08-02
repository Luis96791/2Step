#include "Carta.h"

Carta::Carta()
{
    //ctor
}

void Carta::push(char carta[5], char palo[10], char color[10])
{
    if(pila_original==NULL){
        pila_original = new MiPila(carta,palo,color);
        pila_original->anterior = NULL;
        return;
    }
    pila_aux = new MiPila(carta,palo,color);
    pila_aux->anterior = NULL;
    pila_original = pila_aux;
}

void Carta::mostrar()
{
    if(pila_original==NULL){
        cout<<"No hay datos en la pila"<<endl;
    }
    pila_aux = pila_original;
    cout<<"Datos: "<<endl;
    while(pila_aux!=NULL){
        cout<<pila_aux->carta<<endl;
        cout<<pila_aux->palo<<endl;
        cout<<pila_aux->color<<endl;
        pila_aux = pila_aux->anterior;
        cout<<'\n';
    }
    cout<<"--End--"<<endl;
}

void Carta::pop(char carta[5], char palo[10], char color[10])
{
    if(pila_original==NULL){
        cout<<"No hay datos en la pila"<<endl;
        return;
    }
    pila_aux = new MiPila(carta, palo, color);
    pila_aux = pila_original;
    pila_original = pila_aux->anterior;
    delete(pila_aux);
}

bool Carta::buscar(char carta[5])
{
    if(pila_original == NULL){
        cout<<"No hay datos en la pila"<<endl;
        return false;
    }
    char buscar[5];
    pila_aux = pila_original;

    while(pila_aux!=NULL){
        if(carta = pila_aux->carta){
            return true;
        }
        pila_aux = pila_aux->anterior;
    }
    return false;
}

Carta::~Carta()
{
    //dtor
}
