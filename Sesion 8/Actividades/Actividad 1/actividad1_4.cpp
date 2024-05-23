#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Declaración de la clase abstracta Figura
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

class Triangulo : public Figura {
private:
    float base, altura;

public:
    Triangulo(float b, float h) : base(b), altura(h) {}
    float calcularArea() const override {
        return (base * altura) / 2;
    }
};

class Cuadrado : public Figura {
private:
    float lado;

public:
    Cuadrado(float l) : lado(l) {}

    float calcularArea() const override {
        return lado * lado;
    }
};

class Pentagono : public Figura {
private:
    float lado;

public:
    Pentagono(float l) : lado(l) {}

    float calcularArea() const override {
        return 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * lado * lado;
    }
};

int main() {
    cout << "Elija una figura geométrica:" << endl;
    cout << "1. Circulo" << endl;
    cout << "2. Rectangulo" << endl;
    cout << "3. Triangulo" << endl;
    cout << "4. Cuadrado" << endl;
    cout << "5. Pentagono" << endl;

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
        case 4: {
            float lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            figura = new Cuadrado(lado);
            break;
        }
        case 5: {
            float lado;
            cout << "Ingrese el lado del pentagono: ";
            cin >> lado;
            figura = new Pentagono(lado);
            break;
        }
        default:
            cout << "Opción invalida" << endl;
            return 1;
    }

    cout << "El area de la figura elegida es: " << figura->calcularArea() << endl;

    delete figura;

    return 0;
}
