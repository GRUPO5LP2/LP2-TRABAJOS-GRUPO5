#include <iostream>
#include <string>
using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) { // Sobrecarga para enteros
        cout << "Sumando enteros..." << endl;
        return a + b;
    }

    double sumar(double a, double b) { // Sobrecarga para doubles
        cout << "Sumando doubles..." << endl;
        return a + b;
    }

    string sumar(string a, string b) { // Sobrecarga para strings
        cout << "Concatenando strings..." << endl;
        return a + b;
    }
};

int main() {
    Calculadora calc;

    cout << calc.sumar(5, 3) << endl;       // Llama a sumar(int, int)
    cout << calc.sumar(2.5, 3.7) << endl;   // Llama a sumar(double, double)
    cout << calc.sumar("Hola", " mundo") << endl; // Llama a sumar(string, string)

    return 0;
}