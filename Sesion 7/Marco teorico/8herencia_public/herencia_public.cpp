#include <iostream>
using namespace std;

// Clase base
class Vehiculo {
public:
    void conducir() {
        cout << "¡El vehículo está en movimiento!" << endl;
    }
};

// Clase derivada que hereda públicamente de Vehiculo
class Automovil : public Vehiculo {
public:
    void encenderLuces() {
        cout << "Luces encendidas" << endl;
    }
};

int main() {
    // Crear un objeto de la clase derivada Automovil
    Automovil miAuto;

    // Llamar a métodos de la clase base y derivada
    miAuto.conducir(); // Método de la clase base
    miAuto.encenderLuces(); // Método de la clase derivada

    return 0;
}
