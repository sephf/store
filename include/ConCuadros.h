#ifndef CONCUADROS_H
#define CONCUADROS_H
#include"CamisAbstr.h"
class ConCuadros:public CamisAbstr
{
    bool grandes;
    public:
        ConCuadros(double,std::string,std::string,bool);
        virtual ~ConCuadros();
};

#endif // CONCUADROS_H
