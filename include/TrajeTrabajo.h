#ifndef TRAJETRABAJO_H
#define TRAJETRABAJO_H
#include"TrajeAbstracto.h"
#include"ConCuadros.h"
#include"Jeams.h"
#include"Bota.h"
class TrajeTrabajo:public TrajeAbstracto
{
    public:
        TrajeTrabajo();
        TrajeTrabajo(double,std::string,std::string);
        virtual ~TrajeTrabajo();
        CamisAbstr* creaCamisa()override;
        PantalonAbstr* creaPantalon()override;
        ZapatoAbstr* creaCalzado()override;
};

#endif // TRAJETRABAJO_H
