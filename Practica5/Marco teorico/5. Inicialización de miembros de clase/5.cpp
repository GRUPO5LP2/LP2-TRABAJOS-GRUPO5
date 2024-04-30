#include "otraclase.h"
#include<iostream>
using namespace std;
class unaClase
{
public:
    unaClase(int arg1, otraClase &objeto ): atributoConstanteInt(arg1),
        objetoMiembro(objeto), referenciaObjetoMiembro(objetoMiembro)
    {
        unAtributoInt = arg1;
    }
    void mostrar()
    {
        cout << "atributoConstanteInt: " << atributoConstanteInt << endl;
        cout << "unAtributoInt: " << unAtributoInt << endl;
        cout << "objetoMiembro: " << objetoMiembro << endl;
        cout << "referenciaObjetoMiembro: " << referenciaObjetoMiembro << endl;
    }
private:
    int const atributoConstanteInt;
    int unAtributoInt;
    otraClase objetoMiembro;
    otraClase &referenciaObjetoMiembro;
};

int main()
{
    otraClase objOtraClase;
    objOtraClase.setOtroAtributoInt(32);
    unaClase objetoUnaClase(3, objOtraClase);
    objOtraClase.mostrar();
    objetoUnaClase.mostrar();
    system("pause");
    return 0;
}
ostream& operator << (ostream &salida, otraClase& objeto)
{
    salida << "otroAtributoInt: " << objeto.otroAtributoInt << endl;
    return salida;
}
