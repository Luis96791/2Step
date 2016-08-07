#ifndef GENERARMAZO_H
#define GENERARMAZO_H

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GenerarMazo
{
    public:
        int tamanio = 52;
        int numeros[52];
        GenerarMazo();
        bool verificar(int num, int pos);
        int semilla(int n);
        void llenar();
        virtual ~GenerarMazo();

    protected:

    private:
};

#endif // GENERARMAZO_H
