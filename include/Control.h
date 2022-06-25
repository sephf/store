#ifndef CONTROL_H
#define CONTROL_H
#include"Vista.h"
class Control
{
    public:
        Control();
        virtual ~Control();
        void menuPrincipal();
        void ventaDirecta();
        void ventaEnLinea();
        void mantenimiento();
    private:
        TiendaEnCostaRica* tienda;
};

#endif // CONTROL_H
