#include <iostream>
using namespace std;

class Animal // Clase base Animal
{
public:
    virtual void hacerSonido() { // Método virtual para ser redefinido
        cout << "Sonido genérico de animal" << endl;
    }
};

class Perro : public Animal // Clase derivada Perro
{
public:
    void hacerSonido() override { // Redefinición del método hacerSonido()
        cout << "Guau!" << endl;
    }
};

class Gato : public Animal { // Clase derivada Gato
public:
    void hacerSonido() override { // Redefinición del método hacerSonido()
        cout << "Miau!" << endl;
    }
};

int main() {
    Animal *animal1 = new Perro(); // Polimorfismo: animal1 es un Perro
    Animal *animal2 = new Gato();  // Polimorfismo: animal2 es un Gato

    animal1->hacerSonido(); // Llamada polimórfica (salida: Guau!)
    animal2->hacerSonido(); // Llamada polimórfica (salida: Miau!)

    delete animal1;
    delete animal2;

    return 0;
}