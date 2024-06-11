#include <iostream>
using namespace std;
class Animal {
public:
    void hacerSonido() { // Método no virtual (enlace temprano)
        cout << "Sonido genérico de animal" << endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() { // Redefinición (sin virtual, enlace temprano)
        cout << "Guau!" << endl;
    }
};

int main() {
    Animal *animal1 = new Perro(); // animal1 es un puntero a Animal

    animal1->hacerSonido(); // Llamada no polimórfica (salida: Sonido genérico de animal)

    delete animal1;
    return 0;
}