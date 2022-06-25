#ifndef SUBJECT_H
#define SUBJECT_H
#include"Persona.h"
#include"Empresa.h"
#include<sstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<cxxabi.h>
using namespace std;
class Subject
{
    public:
        Subject();
        virtual ~Subject();
        virtual bool agregaSuscriptor(Cliente*);
        virtual std::string clientesFisicos();
        virtual std::string clientesEmpresa();
        Observa* getSuscriptor(std::string);
        void guardarClientes();
        void recuperarClientes();
    protected:
        std::vector<Observa*> contenedor;

};

#endif // SUBJECT_H
