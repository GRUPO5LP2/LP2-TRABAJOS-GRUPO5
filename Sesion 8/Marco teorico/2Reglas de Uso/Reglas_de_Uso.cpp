#include <iostream>
using namespace std;


class Animal {
public:
    // Método virtual puro (sin implementación)
    virtual void hacerSonido() = 0;


    // Método concreto (con implementación)
    void comer() {
        cout << "Este animal está comiendo." << endl;
    }


    // Destructor virtual
    virtual ~Animal() {}
};


// Subclase concreta que extiende la clase abstracta
class Perro : public Animal {
public:
    // Implementación del método abstracto
    void hacerSonido() override {
        cout << "Guau" << endl;
    }
};


// Otra subclase concreta que extiende la clase abstracta
class Gato : public Animal {
public:
    // Implementación del método abstracto
    void hacerSonido() override {
        cout << "Miau" << endl;
    }
};


// Función principal para probar el código
int main() {
    // Crear instancias de las subclases
    Animal* perro = new Perro();
    Animal* gato = new Gato();


    // Llamar a los métodos
    perro->hacerSonido(); // Output: Guau
    perro->comer();       // Output: Este animal está comiendo.


    gato->hacerSonido(); // Output: Miau
    gato->comer();       // Output: Este animal está comiendo.


    // Liberar memoria
    delete perro;
    delete gato;
    return 0;
}
