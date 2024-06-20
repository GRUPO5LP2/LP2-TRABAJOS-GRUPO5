#include <iostream>
#include <stdexcept> // Para runtime_error
using namespace std;

// Definición de la función divide
int divide(int numerador, int denominador) {
    if (denominador == 0) {
        throw runtime_error("Error: No se puede dividir por cero.");
    }
    return numerador / denominador;
}
int main() {
    int a, b;

    // Solicitar al usuario los valores de a y b
    cout << "Ingrese el numerador: ";
    cin >> a;
    cout << "Ingrese el denominador: ";
    cin >> b;

    try {
        // Intentar realizar la división y mostrar el resultado
        int resultado = divide(a, b);
        cout << "Resultado: " << resultado << endl;
    }
    catch (const runtime_error& e) {
        // Capturar y manejar la excepción de división por cero
        cerr << e.what() << endl;
    }

    return 0;
}
