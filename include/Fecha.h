#ifndef FECHA_H
#define FECHA_H
#include<sstream>
#include"Servicio.h"
class Fecha
{
    public:
        Fecha(int,int,int);
        virtual ~Fecha();
        std::string toString()const;
        static Fecha* creaFecha();
    private:
        int dia;
        int mes;
        int annio;
};

#endif // FECHA_H
