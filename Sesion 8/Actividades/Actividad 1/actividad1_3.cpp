#include <iostream>
#include <string>
using namespace std;


class Figura {
public:
    // Método virtual puro para calcular el área
    virtual float calcularArea() const = 0;
    // Destructor virtual para permitir la destrucción adecuada de las subclases
    virtual ~Figura() {}
};

class Circulo : public Figura {
private:
    float radio;

public:
    Circulo(float r) : radio(r) {}

    float calcularArea() const override {
        return 3.14159 * radio * radio;
    }
};


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
    cout << "Elija una figura geometrica:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;

    int opcion;
    cin >> opcion;

    Figura* figura = nullptr;

    switch (opcion) {
        case 1: {
            float radio;
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            figura = new Circulo(radio);
            break;
        }
        case 2: {
            float base, altura;
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            figura = new Rectangulo(base, altura);
            break;
        }
        case 3: {
            float base, altura;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            figura = new Triangulo(base, altura);
            break;
        }
        default:
            cout << "Opcion invalida" << endl;
            return 1;
    }

    cout << "El area de la figura elegida es: " << figura->calcularArea() << endl;

    delete figura;

    return 0;
}