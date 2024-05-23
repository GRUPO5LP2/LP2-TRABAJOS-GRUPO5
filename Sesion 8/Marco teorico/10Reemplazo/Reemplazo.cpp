#include <iostream>
using namespace std;


class Animal {
public:
    virtual void hacerSonido() {
        cout << "El animal hace un sonido." << endl;
    }
};


class Perro : public Animal {
public:
    void hacerSonido() override {
        cout << "El perro ladra." << endl;
    }
};


class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "El gato maúlla." << endl;
    }
};

int main() {
    Animal* animal;
    Perro miPerro;
    Gato miGato;


    // Apuntando a un objeto de la clase Perro
    animal = &miPerro;
    animal->hacerSonido();  // Salida: El perro ladra.


    // Apuntando a un objeto de la clase Gato
    animal = &miGato;
    animal->hacerSonido();  // Salida: El gato maúlla.


    return 0;
}
