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
    }
    friend ostream& operator << (ostream &salida, otraClase& objeto);
private:
    static const int atributoEstaticoConstanteInt = 5;

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
