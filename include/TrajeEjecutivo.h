#ifndef TRAJEEJECUTIVO_H
#define TRAJEEJECUTIVO_H
#include"TrajeAbstracto.h"
#include"Ejecutivo.h"
#include"DeVestir.h"
#include"MangaLarga.h"
class TrajeEjecutivo:public TrajeAbstracto
{
    public:
        TrajeEjecutivo();
        TrajeEjecutivo(double,std::string,std::string);
        virtual ~TrajeEjecutivo();
        CamisAbstr* creaCamisa()override;
        PantalonAbstr* creaPantalon()override;
        ZapatoAbstr* creaCalzado()override;
};

#endif // TRAJEEJECUTIVO_H
