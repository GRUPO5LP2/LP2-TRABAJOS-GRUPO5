#include <iostream>
using namespace std;

template <typename T>
T sumar(T a, T b) {
    return a + b;
}

int main() {
    int x = 5;
    double y = 10.5;

    // Llamada ambigua, el compilador no puede deducir el tipo
    // cout << "La suma de x e y es: " << sumar(x, y) << endl; // Error de compilación

    cout << "La suma de x e y como double es: " << sumar<double>(x, y) << std::endl;

    return 0;
}
