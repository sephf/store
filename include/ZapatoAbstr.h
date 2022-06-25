#ifndef ZAPATOABSTR_H
#define ZAPATOABSTR_H
#include<iostream>

class ZapatoAbstr
{
    public:
        ZapatoAbstr(double,std::string,std::string);
        virtual ~ZapatoAbstr();
        virtual double getPrecio();
    private:
        double precio;
        std::string color;
        std::string codigo;
};

#endif // ZAPATOABSTR_H
