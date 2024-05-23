#include <iostream>
using namespace std;


class Animal {
public:
    virtual void hacerSonido() {
        cout << "El animal hace un sonido genérico." << endl;
    }
};


class Perro : public Animal {
public:
    void hacerSonido() override {
        Animal::hacerSonido(); // Llamada al método de la clase base
        cout << "El perro ladra." << endl;
    }
};

int main() {
    Animal* animal = new Animal();
    Perro* perro = new Perro();


    animal->hacerSonido();  // Salida: El animal hace un sonido genérico.
    perro->hacerSonido();   // Salida: El animal hace un sonido genérico.
                            //         El perro ladra.


    delete animal;
    delete perro;


    return 0;
}
