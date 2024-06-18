#include <iostream>
using namespace std;

template <typename T>
class Caja {
private:
    T contenido;

public:

    Caja(T c) : contenido(c) {}

    void establecerContenido(T nuevoContenido) {
        contenido = nuevoContenido;
    }
    T obtenerContenido() const {
        return contenido;
    }
};

int main() {

    Caja<int> cajaEntero(123);
    cout << "Contenido de cajaEntero: " << cajaEntero.obtenerContenido() << endl;

    Caja<double> cajaDouble(456.78);
    cout << "Contenido de cajaDouble: " << cajaDouble.obtenerContenido() << endl;

    cajaEntero.establecerContenido(456);
    cout << "Nuevo contenido de cajaEntero: " << cajaEntero.obtenerContenido() << endl;

    return 0;
}
