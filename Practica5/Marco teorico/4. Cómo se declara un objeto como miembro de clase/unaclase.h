#include "otraclase.h"
#ifndef UNACLASE_H
#define UNACLASE_H
#include <iostream>
using namespace std;
class unaClase
{
public:
    otraClase objetoPublico;
    unaClase();
    unaClase(int, float, otraClase&);
    friend ostream& operator <<(ostream&,unaClase&);
protected:
    otraClase objetoProtegido;
private:
    int atributoInt;
    float atributoFloat;
    otraClase objetoPrivado;
};
#endif
