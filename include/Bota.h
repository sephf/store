#ifndef BOTA_H
#define BOTA_H
#include"ZapatoAbstr.h"
class Bota:public ZapatoAbstr
{
    public:
        Bota(double,std::string,std::string,bool);
        virtual ~Bota();
    private:
    bool alta;
};

#endif // BOTA_H
