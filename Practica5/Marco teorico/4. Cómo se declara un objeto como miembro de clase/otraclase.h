#ifndef OTRACLASE_H
#define OTRACLASE_H
#include <iostream>
using namespace std;
class otraClase
{
public:
    otraClase();
    otraClase(int, float);
    void setOtroAtributoInt(int);
    void setOtroAtributoFloat(float);
    int getOtroAtributoInt(int);
    float getOtroAtributoFloat(float);
    friend ostream& operator <<(ostream&,otraClase&);
private:
    int otroAtributoInt;
    float otroAtributoFloat;
};
#endif
