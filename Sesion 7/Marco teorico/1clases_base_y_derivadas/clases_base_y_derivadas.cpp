#include <iostream>
using namespace std;

// Definición de la clase base
class Vehiculo {
protected:
    int ruedas;
public:
    Vehiculo(int n_ruedas) {
        ruedas = n_ruedas;
    }

    void info() {
        cout << "Este vehículo tiene " << ruedas << " ruedas." << endl;
    }
};

// Definición de la clase derivada
class Automovil : public Vehiculo {
private:
    int puertas;
public:
    Automovil(int n_ruedas, int n_puertas) : Vehiculo(n_ruedas) {
        puertas = n_puertas;
    }

    void info() {
        Vehiculo::info();
        cout << "Este automóvil tiene " << puertas << " puertas." << endl;
    }
};

int main() {
    // Creación de un objeto de la clase derivada
    Automovil a(4, 2);
    a.info();
    return 0;
}
