#include <iostream>
using namespace std;

class Calculadora {
public:
    double a, b;

    Calculadora(double num1, double num2) : a(num1), b(num2) {}

    // constructor por defecto necesario para la sobrecarga de polimorfismo
    Calculadora() : a(0), b(0) {}

    int sumar(int a, int b) {
        return a + b;
    }

    double sumar(double a, double b) {
        return a + b;
    }

    float sumar(float a, float b) {
        return a + b;
    }

    int sumar(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculadora calcular1;

    double resultado = calcular1.sumar(13.575, 24.65);

    cout << "El resultado de la suma es: " << resultado << endl;

    return 0;
}
