#include <iostream>
using namespace std;

class Figura { // Clase base Figura
public:
    virtual double calcularArea() const = 0; // Método virtual puro
};

class Circulo : public Figura { // Clase derivada Círculo
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double calcularArea() const override { // Redefinición del método
        return 3.14159 * radio * radio;
    }
};

class Rectangulo : public Figura { // Clase derivada Rectángulo
private:
    double base, altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double calcularArea() const override { // Redefinición del método
        return base * altura;
    }
};

int main() {
    Figura *figuras[2]; // Arreglo de punteros a Figura

    figuras[0] = new Circulo(5.0);  // Objeto Círculo
    figuras[1] = new Rectangulo(4.0, 6.0); // Objeto Rectángulo

    for (int i = 0; i < 2; ++i) {
        cout << "Área de la figura " << i + 1 << ": "
                  << figuras[i]->calcularArea() << endl; // Llamada polimórfica
    }

    delete figuras[0];
    delete figuras[1];
    return 0;
}