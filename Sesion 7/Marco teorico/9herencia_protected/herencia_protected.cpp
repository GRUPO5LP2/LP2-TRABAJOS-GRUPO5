#include <iostream>
using namespace std;
// Clase base
class Animal {
protected:
    int edad; // miembro protegido

public:
    Animal(int edad) : edad(edad) {}

    void mostrarEdad() {
        cout << "Edad del animal: " << edad << " años\n";
    }
};

// Clase derivada
class Perro : protected Animal {
public:
    Perro(int edad) : Animal(edad) {}

    void mostrarEdadDelPerro() {
        cout << "Edad del perro: " << edad << " años\n"; // Acceso al miembro protegido
    }
};

int main() {
    Perro miPerro(5);
    //miPerro.mostrarEdad(); // Esto daría un error, ya que edad es protegido
    miPerro.mostrarEdadDelPerro(); // Pero sí podemos acceder a él desde dentro de la clase derivada
    return 0;
}
