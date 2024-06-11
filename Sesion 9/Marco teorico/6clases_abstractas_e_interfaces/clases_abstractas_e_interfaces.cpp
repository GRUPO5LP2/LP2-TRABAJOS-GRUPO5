#include <iostream>
using namespace std;
class Figura { // Clase abstracta Figura
public:
    virtual double calcularArea() const = 0; // Método virtual puro
};

class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() const override {
        return 3.14159 * radio * radio;
    }
};

class Rectangulo : public Figura {
private:
    double base, altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double calcularArea() const override {
        return base * altura;
    }
};

int main() {
    Circulo circulo(5.0);  // Objeto Círculo
    Rectangulo rectangulo(4.0, 6.0); // Objeto Rectángulo

    // No se puede crear un objeto Figura directamente, ya que es abstracta
    // Figura figura; // Error: no se puede instanciar una clase abstracta

    Figura *figura1 = &circulo;  // Puntero a Figura que apunta a un Círculo
    Figura *figura2 = &rectangulo; // Puntero a Figura que apunta a un Rectángulo

    cout << "Área del círculo: " << figura1->calcularArea() << endl;
    cout << "Área del rectángulo: " << figura2->calcularArea() << endl;

    return 0;
}