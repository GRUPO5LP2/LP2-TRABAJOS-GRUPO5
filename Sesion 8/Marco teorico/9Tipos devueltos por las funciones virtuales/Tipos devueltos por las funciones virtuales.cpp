#include <iostream>
using namespace std;


class Animal {
public:
    virtual Animal* clonar() const {
        return new Animal(*this);
    }
    virtual void hacerSonido() const {
        cout << "El animal hace un sonido." << endl;
    }
};


class Perro : public Animal {
public:
    Perro* clonar() const override {
        return new Perro(*this); // Covarianza de tipos devueltos
    }
    void hacerSonido() const override {
        cout << "El perro ladra." << endl;
    }
};


class Gato : public Animal {
public:
    Gato* clonar() const override {
        return new Gato(*this); // Covarianza de tipos devueltos
    }
    void hacerSonido() const override {
        cout << "El gato maúlla." << endl;
    }
};

int main() {
    Animal* animal = new Animal();
    Animal* perro = new Perro();
    Animal* gato = new Gato();


    Animal* animalClonado = animal->clonar();
    Animal* perroClonado = perro->clonar();
    Animal* gatoClonado = gato->clonar();


    animalClonado->hacerSonido();  // Salida: El animal hace un sonido.
    perroClonado->hacerSonido();   // Salida: El perro ladra.
    gatoClonado->hacerSonido();    // Salida: El gato maúlla.


    delete animal;
    delete perro;
    delete gato;
    delete animalClonado;
    delete perroClonado;
    delete gatoClonado;


    return 0;
}
