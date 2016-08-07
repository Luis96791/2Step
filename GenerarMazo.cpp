#include "GenerarMazo.h"

GenerarMazo::GenerarMazo()
{
    //ctor
}

bool GenerarMazo::verificar(int num, int pos)
{
    for(int n = 0; n < pos; n++)
    {
        if(num == numeros[n])
        {
            return true;
        }
    }
    return false;
}

int GenerarMazo::semilla(int n)
{
    return 1+rand() % (n + 1 -1);
}

void GenerarMazo::llenar()
{
    int num;
    srand(time(0));
    for(int i = 0; i < tamanio; i++)
    {
        num = semilla(tamanio);
        while(verificar(num,i))
        {
            num = semilla(tamanio);
        }
        numeros[i] = num;
    }
}

GenerarMazo::~GenerarMazo()
{
    //dtor
}
