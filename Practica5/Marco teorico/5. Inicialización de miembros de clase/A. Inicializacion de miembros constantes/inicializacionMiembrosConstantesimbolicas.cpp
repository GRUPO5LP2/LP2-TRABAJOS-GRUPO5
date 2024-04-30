#include <iostream>
using namespace std;
class otraClase
{
public:
    int getOtroAtributoInt()
    {
        return otroAtributoInt;
    }
    void setOtroAtributoInt(int i)
    {
        otroAtributoInt = i;
    }
    void mostrar()
    {
        cout << "otroAtributoInt: " << otroAtributoInt << endl;
        cout << "atributoEstaticoConstanteInt: "
            << atributoEstaticoConstanteInt << endl;
        cout << "atributoconstanteFloat: " << atributoconstanteFloat << endl;
        cout << "atributoEstaticoInt: " << atributoEstaticoInt << endl;
        cout << "atributoConstanteInt: " << atributoConstanteInt << endl;
        cout << "otroAtributoEstaticoConstanteInt: "
            << otroAtributoEstaticoConstanteInt << endl;
    }
    friend ostream& operator << (ostream &salida, otraClase& objeto);
private:
    enum{atributoEstaticoConstanteInt = 5,atributoconstanteFloat = 2,
atributoEstaticoInt = 6,atributoConstanteInt = 9,
otroAtributoEstaticoConstanteInt =12};
    int otroAtributoInt;
};
int main()
{
    otraClase objOtraClase;
    objOtraClase.setOtroAtributoInt(32);
        objOtraClase.mostrar();
        system("pause");
        return 0;
}
ostream& operator << (ostream &salida, otraClase& objeto)
{
    salida << "otroAtributoInt: " << objeto.otroAtributoInt << endl;
    return salida;
}