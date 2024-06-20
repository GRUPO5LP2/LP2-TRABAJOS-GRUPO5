#include <iostream>
#include <exception>
using namespace std;
// Función que lanza una excepción si el valor es negativo
void verificar(int value) {
    if (value < 0) {
        throw runtime_error("Error: Valor negativo no permitido.");
    }
}


int main() {
    int num;


    cout << "Ingrese un número: ";
    cin >> num;


    try {
        verificar(num);
        cout << "El valor es: " << num << endl;
    }
    catch (const exception& e) {
        // Capturamos la excepción y mostramos el mensaje de error
        cerr << "Excepción capturada: " << e.what() << endl;
    }


    return 0;
}

