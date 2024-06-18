#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Par {
private:
    T1 primero;
    T2 segundo;

public:
    Par(T1 p, T2 s) : primero(p), segundo(s) {}

    T1 obtenerPrimero() const {
        return primero;
    }

    T2 obtenerSegundo() const {
        return segundo;
    }

    void establecerPrimero(T1 p) {
        primero = p;
    }

    void establecerSegundo(T2 s) {
        segundo = s;
    }
};

int main() {

    Par<int, double> par1(10, 20.5);
    cout << "Primero: " << par1.obtenerPrimero() << ", Segundo: " << par1.obtenerSegundo() << endl;

    Par<string, int> par2("tilin", 30);
    cout << "Tercero: " << par2.obtenerPrimero() << ", Cuarto: " << par2.obtenerSegundo() << endl;


    par1.establecerPrimero(15);
    par1.establecerSegundo(25.5);
    cout << "Nuevo Primero: " << par1.obtenerPrimero() << ", Nuevo Segundo: " << par1.obtenerSegundo() << endl;

    par2.establecerPrimero("Nose");
    par2.establecerSegundo(46.7);
    cout << "Nuevo Primero: " << par2.obtenerPrimero() << ", Nuevo Segundo: " << par2.obtenerSegundo() << endl;

    return 0;
}
