#include "unaclase.h"
#include <iostream>
using namespace std;
unaClase::unaClase()
{
    atributoInt = 0;
    atributoFloat = 0;
}
unaClase::unaClase(int i, float f, otraClase &X) : objetoPublico(X),
    objetoProtegido(X), objetoPrivado(X)
{
    atributoInt = i;
    atributoFloat = f;
}
ostream& operator <<(ostream& salida,unaClase& obj)
{
    salida << "atributoInt: " << obj.atributoInt << endl
        << "atributoFloat: " << obj.atributoFloat << endl
        << "objetoPublico: " << obj.objetoPublico << endl
        << "objetoPrivado: " << obj.objetoPrivado << endl
        << "objetoProtegido: " << obj.objetoProtegido << endl;
    return salida;
}
