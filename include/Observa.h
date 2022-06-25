#ifndef OBSERVA_H
#define OBSERVA_H
#include<iostream>
#include"TrajeAbstracto.h"
class Observa
{
    public:
        Observa();
        virtual ~Observa();
        virtual void actualizar(TrajeAbstracto*)const=0;
};

#endif // OBSERVA_H
