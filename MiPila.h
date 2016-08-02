#ifndef MIPILA_H
#define MIPILA_H

#include <iostream>

using namespace std;

class MiPila
{
    public:
        MiPila *anterior;
        char carta[5], palo[10], color[10];
        MiPila(char carta[5], char palo[10], char color[10]);
        virtual ~MiPila();

    protected:

    private:

};

#endif // MIPILA_H
