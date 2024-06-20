#include <iostream>
#include <exception>
using namespace std;
// Función que lanza una excepción si se intenta dividir por cero
double dividir(double a, double b) {
    if (b == 0) {
        throw runtime_error("Error: Division por cero.");
    }
    return a / b;
}


int main() {
    double num1, num2, result;


    cout << "Ingrese el primer numero: "; cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;


    try {
        result = dividir(num1, num2);
        cout << "El resultado es: " << result << endl;
    }
    catch (const exception& exception) {
        // Capturamos la excepción y mostramos el mensaje de error
        cerr << "Excepcion capturada: " << exception.what() << endl;
    }
    return 0;
}

