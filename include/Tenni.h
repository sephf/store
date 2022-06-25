#ifndef TENNI_H
#define TENNI_H
#include"ZapatoAbstr.h"
class Tenni:public ZapatoAbstr
{
    public:
        Tenni(double,std::string,std::string,bool);
        virtual ~Tenni();
    private:
        bool adidas;
};

#endif // TENNI_H
