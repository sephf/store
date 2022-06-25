#include "Venta.h"

Venta::Venta(Hora* h,Fecha* f,double pt):hora(h),fecha(f),valorTraje(pt)
{
}

Venta::~Venta()
{
    if(hora)
    {
        delete hora;
    }
    if(fecha)
    {
        delete fecha;
    }
}
double Venta::getValorTraje()
{
    return valorTraje;
}
std::string Venta::toString(Cliente* c, TrajeAbstracto* t)
{
    std::stringstream s;
    int codigo;
    s<<"---------------------Factura------------------------\n";
    s<<fecha->toString()<<std::endl;
    s<<hora->toString()<<std::endl;
    if(c!=NULL)
    {
        s<<c->toString();
        std::string pais=c->getPais();
        std::string ciudad=c->getCiudad();
        codigo=Servicio::codigoTraslado(pais,ciudad);

    }else
    {
        codigo=0;
    }
    double precioFinal=Servicio::calculaPrecioFinal(getValorTraje());
    double conIva=Servicio::calculoIVA(precioFinal);
    double traslado=Servicio::precioTraslado(codigo);
    s<<t->toString();
    s<<"\nCosto final del traje: "<<precioFinal<<std::endl;
    s<<"IVA: "<<conIva<<std::endl;
    s<<"Traslado: "<<traslado<<std::endl;
    s<<"Total a pagar: "<<precioFinal+conIva+traslado<<std::endl;
    s<<"-------------------------------------------------------\n";
    return s.str();
}

