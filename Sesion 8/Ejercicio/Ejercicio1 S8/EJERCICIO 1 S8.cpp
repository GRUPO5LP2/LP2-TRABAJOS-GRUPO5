#include <iostream>
using namespace std;

const double PI = 3.1416; 

// Clase abstracta Padre Figura
class Figura {
public:
    virtual void dibujar() = 0;
    virtual double calcularArea() = 0;
};


// Clase derivada Círculo
class Círculo : public Figura {
private:
    double radio;

public:
    Círculo(double r) : radio(r) {}

    void dibujar() {
        cout << "Dibujando un círculo" << endl;
    }

    double calcularArea() {
        return PI * radio * radio;
    }
};


// Clase derivada Rectángulo
class Rectángulo : public Figura {
private:
    double base, altura;

public:
    Rectángulo(double b, double h) : base(b), altura(h) {}

    void dibujar() {
        cout << "Dibujando un rectángulo" << endl;
    }

    double calcularArea() {
        return base * altura;
    }
};


// Clase derivada Triangulo
class Triangulo : public Figura {
private:
    double base, altura;

public:
    Triangulo(double b, double h) : base(b), altura(h) {}

    void dibujar() {
        cout << "Dibujando un triangulo" << endl;
    }

    double calcularArea() {
        return 0.5 * base * altura;
    }
};


int main() {
    Rectángulo rectangulo(4, 6);
    rectangulo.dibujar();
    cout << "El area del rectángulo: " << rectangulo.calcularArea() << endl;

    Círculo circulo(5);
    circulo.dibujar();
    cout << "El area del círculo: " << circulo.calcularArea() << endl;

    Triangulo triangulo(3, 8);
    triangulo.dibujar();
    cout << "El area del triangulo: " << triangulo.calcularArea() << endl;

    return 0;
}