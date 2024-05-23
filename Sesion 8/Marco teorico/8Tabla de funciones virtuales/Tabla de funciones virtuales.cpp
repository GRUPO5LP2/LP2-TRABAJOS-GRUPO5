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
