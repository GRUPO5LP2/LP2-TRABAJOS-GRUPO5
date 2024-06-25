#include <iostream>
#include <deque>
#include <cctype> // Para la función tolower y toupper
using namespace std;

int main() {
    deque<char> caracteres;
    string input;

    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, input);

    for (char c : input) {
        caracteres.push_back(c);
    }


    cout << "Caracteres en el deque: ";
    for (auto it = caracteres.begin(); it != caracteres.end(); ++it) {
        cout << *it;
    }
    cout << "\n";

    for (auto it = caracteres.begin(); it != caracteres.end(); ++it) {
        char c = tolower(*it); // Convertir a minúscula para ser insensible a mayúsculas
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            *it = '*';
        }
    }

    cout << "Caracteres en orden inverso: ";
    for (auto rit = caracteres.rbegin(); rit != caracteres.rend(); ++rit) {
        cout << *rit;
    }
    cout << "\n";

    cout << "Cadena resultante: ";
    for (char c : caracteres) {
        cout << c;
    }
    cout << "\n";

    return 0;
}
