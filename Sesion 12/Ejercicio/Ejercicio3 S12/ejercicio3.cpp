#include <iostream>
#include <deque>

using namespace std;

int main() {
    // Declaracion del contenedor deque para almacenar la cadena de caracteres
    deque<char> caracteres;

    // Pedir al usuario que ingrese una cadena de caracteres
    cout << "Ingrese una cadena de caracteres: ";
    string input;
    getline(cin, input);

    // Almacenar cada caracter en el deque
    for (char c : input) {
        caracteres.push_back(c);
    }

    // Mostrar los caracteres originales utilizando un iterador
    cout << "Caracteres originales: ";
    for (auto it = caracteres.begin(); it != caracteres.end(); ++it) {
        cout << *it;
    }
    cout << endl;

    // Reemplazar todas las vocales por '*'
    for (auto it = caracteres.begin(); it != caracteres.end(); ++it) {
        char c = *it;
        // Comparar con vocales en minusculas y mayusculas
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            *it = '*';
        }
    }

    // Mostrar los caracteres despues de reemplazar las vocales
    cout << "Caracteres despues de reemplazar vocales: ";
    for (auto it = caracteres.begin(); it != caracteres.end(); ++it) {
        cout << *it;
    }
    cout << endl;

    // Mostrar los caracteres en orden inverso utilizando un iterador inverso
    cout << "Caracteres en orden inverso: ";
    for (auto rit = caracteres.rbegin(); rit != caracteres.rend(); ++rit) {
        cout << *rit;
    }
    cout << endl;

    return 0;
}
