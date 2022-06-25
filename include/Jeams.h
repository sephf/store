#ifndef JEAMS_H
#define JEAMS_H
#include"PantalonAbstr.h"
class Jeams:public PantalonAbstr
{
    public:
        Jeams(double,std::string,std::string,bool);
        virtual ~Jeams();
    private:
        bool ajustado;
};

#endif // JEAMS_H
