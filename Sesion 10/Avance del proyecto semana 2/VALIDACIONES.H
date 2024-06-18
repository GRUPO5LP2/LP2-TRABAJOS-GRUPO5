#ifndef VALIDACIONES_H
#define VALIDACIONES_H

#include <iostream>
#include <limits>
using namespace std;

// Función para validar la entrada de un entero
int validarEntero() {
    int valor;
    while (!(cin >> valor)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Intente de nuevo: ";
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer del enter
    return valor;
}

// Función para validar la entrada de una cadena de texto (nombre, descripción, etc.)
string validarCadena() {
    string valor;
    getline(cin, valor);
    return valor;
}

#endif // VALIDACIONES_H
