#include <iostream>
using namespace std;

// Plantilla
template <typename T>

class Calculadora {
private:
    T numero1;
    T numero2;

public:
    Calculadora(T num1, T num2) : numero1(num1), numero2(num2) {}

    T Sumar() {
        return (numero1 + numero2);
    }
};

int main() {

    Calculadora<int> calcular_int(5, 10);
    Calculadora<double> calcular_double(3.5, 8.2);
    Calculadora<float> calcular_float(4.9999, 8.222);

    cout << "El mayor valor en ints: " << calcular_int.Sumar() << endl;
    cout << "El mayor valor en doubles: " << calcular_double.Sumar() << endl;
    cout << "El mayor valor en floats: " << calcular_float.Sumar() << endl;

    return 0;
}
