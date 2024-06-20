#include <iostream>
#include <exception>
using namespace std;


int main() {
    int numerador, denominador, resultado;


    cout << "Ingrese el numerador: ";
    cin >> numerador;
    cout << "Ingrese el denominador: ";
    cin >> denominador;


    try {
        // Intentamos realizar la división
        if (denominador == 0) {
            throw runtime_error("Error: División por cero.");
        }
        resultado = numerador / denominador;
        cout << "El resultado es: " << resultado << endl;
    }
    catch (const exception& e) {
        // Capturamos la excepción y mostramos el mensaje de error
        cerr << "Excepción capturada: " << e.what() << endl;
    }


    return 0;
}
