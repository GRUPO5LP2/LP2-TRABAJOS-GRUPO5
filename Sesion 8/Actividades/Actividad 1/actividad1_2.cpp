#include <iostream>
using namespace std;
// Declaración de la clase abstracta Figura
class Figura {
public:
    // Método virtual puro para calcular el área
    virtual float calcularArea() const = 0;
    // Destructor virtual para permitir la destrucción adecuada de las subclases
    virtual ~Figura() {}
};

// Clase derivada Círculo
class Circulo : public Figura {
private:
    float radio;

public:
    Circulo(float r) : radio(r) {}

    float calcularArea() const override {
        return 3.14159 * radio * radio;
    }
};

// Clase derivada Rectángulo
class Rectangulo : public Figura {
private:
    float base, altura;

public:
    Rectangulo(float b, float h) : base(b), altura(h) {}

    float calcularArea() const override {
        return base * altura;
    }
};

// Clase derivada Triángulo
class Triangulo : public Figura {
private:
    float base, altura;

public:
    Triangulo(float b, float h) : base(b), altura(h) {}

    float calcularArea() const override {
        return (base * altura) / 2;
    }
};

int main() {

    Circulo circulo(5);
    Rectangulo rectangulo(4, 6);
    Triangulo triangulo(3, 8);

    cout << "Área del círculo: " << circulo.calcularArea() << endl;
    cout << "Área del rectángulo: " << rectangulo.calcularArea() << endl;
    cout << "Área del triángulo: " << triangulo.calcularArea() << endl;

    return 0;
}
