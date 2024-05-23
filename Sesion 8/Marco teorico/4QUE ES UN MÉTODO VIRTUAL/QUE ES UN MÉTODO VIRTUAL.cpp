#include <iostream>
using namespace std;


// Clase base
class Animal {
public:
    // Método virtual
    virtual void hacerSonido() {
        cout << "El animal hace un sonido." << endl;
    }
};


// Clase derivada
class Perro : public Animal {
public:
    // Sobrescribiendo el método virtual
    void hacerSonido() override {
        cout << "El perro ladra." << endl;
    }
};


// Clase derivada
class Gato : public Animal {
public:
    // Sobrescribiendo el método virtual
    void hacerSonido() override {
        cout << "El gato maúlla." << endl;
    }
};

int main() {
    Animal* miAnimal;
    Perro miPerro;
    Gato miGato;


    // Apuntando a un objeto de la clase Perro
    miAnimal = &miPerro;
    miAnimal->hacerSonido();  // Salida: El perro ladra.


    // Apuntando a un objeto de la clase Gato
    miAnimal = &miGato;
    miAnimal->hacerSonido();  // Salida: El gato maúlla.


    return 0;
}
