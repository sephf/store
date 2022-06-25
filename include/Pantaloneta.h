#ifndef PANTALONETA_H
#define PANTALONETA_H
#include"PantalonAbstr.h"
class Pantaloneta:public PantalonAbstr
{
    public:
        Pantaloneta(double,std::string,std::string,bool);
        virtual ~Pantaloneta();
    private:
        bool estampada;
};

#endif // PANTALONETA_H
