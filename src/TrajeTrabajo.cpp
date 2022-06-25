#include "TrajeTrabajo.h"

TrajeTrabajo::TrajeTrabajo(double pre,std::string tip,std::string cod):TrajeAbstracto(pre,tip,cod)
{
}
TrajeTrabajo::TrajeTrabajo():TrajeAbstracto()
{
}
TrajeTrabajo::~TrajeTrabajo()
{
}
CamisAbstr* TrajeTrabajo::creaCamisa()
{
    std::cout<<"a-Grande\nb-mediano\nc-pequue�o\nd-ni�o\n";
    char medida=Servicio::ingresoDato("Seleccione la medida de la camisa: ",'a','d');
    bool grandes=Servicio::ingresoDato("La camisa tiene cuadros (1:Grandes , 0:peque�os)?: ",0,1);
    std::cin.clear();
    std::cin.ignore(255, '\n');
    std::string color;
    std::cout<<"Ingrese el color: ";
    std::getline(std::cin,color);
    double precio=Servicio::precioConCuadros(medida,grandes);
    std::string codigo1=Servicio::generaCodigo();
    return new ConCuadros(precio,color,codigo1,grandes);
}
PantalonAbstr* TrajeTrabajo::creaPantalon()
{
    std::cout<<"a-Grande\nb-mediano\nc-pequue�o\nd-ni�o\n";
    char medida=Servicio::ingresoDato("Seleccione la medida del pantalon: ",'a','d');
    bool ajustado=Servicio::ingresoDato("El Jeams es ajustado (1:s� , 0:no)?: ",0,1);
    std::cin.clear();
    std::cin.ignore(255, '\n');
    std::string color;
    std::cout<<"Ingrese el color: ";
    std::getline(std::cin,color);
    double precio=Servicio::precioJeams(medida,ajustado);
    std::string codigo1=Servicio::generaCodigo();
    return new Jeams(precio,color,codigo1,ajustado);
}
ZapatoAbstr* TrajeTrabajo::creaCalzado()
{
    std::cout<<"a-Grande\nb-mediano\nc-pequue�o\nd-ni�o\n";
    char medida=Servicio::ingresoDato("Seleccione la medida del calzado: ",'a','d');
    bool alta=Servicio::ingresoDato("La bota es alta (1:s� , 0:no)?: ",0,1);
    std::cin.clear();
    std::cin.ignore(255, '\n');
    std::string color;
    std::cout<<"Ingrese el color: ";
    std::getline(std::cin,color);
    double precio=Servicio::precioBota(medida,alta);
    std::string codigo1=Servicio::generaCodigo();
    return new Bota(precio,color,codigo1,alta);
}
