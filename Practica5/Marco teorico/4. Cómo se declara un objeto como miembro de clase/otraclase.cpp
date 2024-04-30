#include "otraclase.h"
#include <iostream>
using namespace std;
otraClase::otraClase()
{
    otroAtributoInt = 0;
    otroAtributoFloat = 0;
}
otraClase::otraClase(int i, float f)
{
    otroAtributoInt = i;
    otroAtributoFloat = f;
}
ostream& operator <<(ostream& salida,otraClase& obj)
{
    salida << "otroAtributoInt: " << obj.otroAtributoInt << endl
    << "otroAtributoFloat: " << obj.otroAtributoFloat << endl;
    return salida;
}
