#include "Vista.h"

int Vista::interfazMenu0()
{
        std::cout<<"\tMENU"<<std::endl
        <<"1- Venta directa"<<std::endl
        <<"2- Venta en linea"<<std::endl
        <<"3- Mantenimiento"<<std::endl
        <<"4- Salir"<<std::endl;
        int opcion=Servicio::ingresoDato("Digite una opcion: ",1,4);
        return opcion;
}
int Vista::menuVentaEnLinea()
{
        std::cout<<"1.Iniciar sesion\n2.Suscribirse\n3.Regresar al menu principal\n";
        int opcion2=Servicio::ingresoDato("Digite una opcion: ",1,3);
        return opcion2;
}
char Vista::subMenuVentaEnLinea()
{
    std::cout<<"a. Suscripcion para personas fisicas"<<std::endl
    <<"b. Suscripcion para empresas"<<std::endl;
    char subOpcion1=Servicio::ingresoDato("Digite una opcion: ",'a','b');
    return subOpcion1;
}
int Vista::menuMantenimiento()
{
             std::cout<<"1.Ingresar nuevo traje al stock\n"
            <<"2.Eliminar traje vendido\n"
            <<"3.Desplegar informacion de la tienda\n"
            <<"4.Regresar al menu principal\n";
            int opcion3=Servicio::ingresoDato("Digite una opcion: ",1,4);
            return opcion3;
}
int Vista::subMenuTraje()
{
                std::cout<<"1.Crear traje Ejecutivo"<<std::endl
                <<"2.Crear traje deportivo"<<std::endl
                <<"3.Crear traje de trabajo"<<std::endl
                <<"4.Salir"<<std::endl;
                int subopcion=Servicio::ingresoDato("Seleccione el tipo: ",1,4);
                return subopcion;
}
std::string Vista::codigoDelTraje()
{
        std::string codigo;
        std::cout<<"Ingrese el codigo del traje: ";
        getline(std::cin,codigo);
        std::cin.ignore(255,'\n');
        return codigo;
}
int Vista::menuInformacion()
{
        std::cout<<"1.Mostrar traje mas vendido\n"
        <<"2.Ventas totales sin ganancia\n"
        <<"3.Ventas totales con ganancia\n"
        <<"4.Ganancia neta de la tienda\n"
        <<"5.Imprimir stock de la tienda\n"
        <<"6.Ver clientes empresariales\n"
        <<"7.Ver clientes fisicos\n"
        <<"8.Regresar al menu principal\n";
        int subOpcion=Servicio::ingresoDato("Digite una opcion: ",1,8);
        return subOpcion;
}
Cliente* Vista::creaPersona()
{
    std::string nombre,cedula,correo,pais,ciudad,nacionalidad;
    std::cout<<"Ingrese su nombre completo: ";
    getline(std::cin,nombre);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese su numero de cedula: ";
    getline(std::cin,cedula);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese su correo electronico: ";
    getline(std::cin,correo);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese su ciudad: ";
    getline(std::cin,ciudad);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese su pais: ";
    getline(std::cin,pais);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese su nacionalidad: ";
    getline(std::cin,nacionalidad);
    std::cin.ignore(255,'\n');
    return new Persona(nombre,cedula,correo,200,ciudad,pais,nacionalidad);
}
Cliente* Vista::creaEmpresa()
{
     std::string nombre,cedula,correo,pais,ciudad;
    std::cout<<"Ingrese el nombre de la empresa: ";
    getline(std::cin,nombre);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese la cedula juridica: ";
    getline(std::cin,cedula);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese el correo electronico: ";
    getline(std::cin,correo);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese la ciudad: ";
    getline(std::cin,ciudad);
    std::cin.ignore(255,'\n');
    std::cout<<"Ingrese el pais: ";
    getline(std::cin,pais);
    std::cin.ignore(255,'\n');
    return new Empresa(nombre,cedula,correo,400,ciudad,pais,false);
}
std::string Vista::solicitudCodigo()
{
    std::string codigo;
    std::cout<<"Ingrese el codigo del traje que desee comprar: ";
    getline(std::cin,codigo);
    return codigo;
}
