#include <iostream>
using namespace std;

template <typename T>
T obtenerMayor(T a, T b) {
    return (a > b) ? a : b;
}

int main() {

    int entero1 = 5;
    int entero2 = 10;
    cout << "El mayor entre " << entero1 << " y " << entero2 << " es " << obtenerMayor(entero1, entero2) << endl;

    double doble1 = 5.5;
    double doble2 = 3.3;
    cout << "El mayor entre " << doble1 << " y " << doble2 << " es " << obtenerMayor(doble1, doble2) << endl;

    char char1 = 'a';
    char char2 = 'z';
    cout << "El mayor entre '" << char1 << "' y '" << char2 << "' es '" << obtenerMayor(char1, char2) << "'" << endl;

    return 0;
}
