#ifndef MANGALARGA_H
#define MANGALARGA_H
#include"CamisAbstr.h"

class MangaLarga: public CamisAbstr
{
    public:
        MangaLarga(double,std::string,std::string,bool);
        virtual ~MangaLarga();
    private:
        bool lisa;
};

#endif // MANGALARGA_H
