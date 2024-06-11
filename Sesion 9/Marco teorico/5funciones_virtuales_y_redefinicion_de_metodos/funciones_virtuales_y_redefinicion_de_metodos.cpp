#include <iostream>
using namespace std;

class Animal {
public:
    virtual void hacerSonido() { // Función virtual
        cout << "Sonido genérico de animal" << endl;
    }
    void mostrarNombre(const string& nombre) { // Función no virtual
        cout << "Animal: " << nombre << endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() override { // Redefinición de función virtual
        cout << "Guau!" << endl;
    }
};

int main() {
    Animal *animal1 = new Perro();

    animal1->hacerSonido();        // Llamada a la versión redefinida (Guau!)
    animal1->mostrarNombre("Fido"); // Llamada a la versión de la clase base

    delete animal1;
    return 0;
}