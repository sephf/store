#ifndef CAMISABSTR_H
#define CAMISABSTR_H
#include<iostream>
class CamisAbstr
{
    public:
        CamisAbstr(double,std::string,std::string);
        virtual ~CamisAbstr();
        virtual double getPrecio();
    private:
    double precio;
    std::string color;
    std::string codigo;
};

#endif // CAMISABSTR_H
