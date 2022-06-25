#ifndef EJECUTIVO_H
#define EJECUTIVO_H
#include"ZapatoAbstr.h"

class Ejecutivo:public ZapatoAbstr
{
    public:
        Ejecutivo(double,std::string,std::string,bool);
        virtual ~Ejecutivo();
    private:
        bool fino;
};

#endif // EJECUTIVO_H
