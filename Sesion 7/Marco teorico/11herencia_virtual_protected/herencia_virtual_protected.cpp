#include <iostream>
using namespace std;

// Clase base
class Figura {
public:
    virtual void dibujar() {
        cout << "Dibujando Figura" << endl;
    }
};

// Clase derivada Triangulo
class Triangulo : virtual protected Figura {
public:
    void dibujar() override {
        cout << "Dibujando Triangulo" << endl;
    }
};

// Clase derivada Rectangulo
class Rectangulo : virtual public Figura {
public:
    void dibujar() override {
        cout << "Dibujando Rectangulo" << endl;
    }
};

int main() {
    // Creamos objetos de las clases derivadas
    Triangulo t;
    Rectangulo r;

    // Llamamos al método dibujar() de cada objeto
    t.dibujar(); // Salida: Dibujando Triangulo
    r.dibujar(); // Salida: Dibujando Rectangulo

    return 0;
}
