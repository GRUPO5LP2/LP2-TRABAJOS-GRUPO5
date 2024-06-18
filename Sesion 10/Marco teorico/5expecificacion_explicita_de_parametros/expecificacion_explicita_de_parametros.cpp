#include <iostream>
using namespace std;

template <typename T>
T multiplicar(T a, T b) {
    return a * b;
}

int main() {
    cout << "Multiplicacion de enteros: " << multiplicar(3, 4) << endl;

    cout << "Multiplicacion de dobles: " << multiplicar<double>(2.5, 4.0) << endl;

    cout << "Multiplicacion de enteros con especificación explicita: " << multiplicar<int>(6, 5) << endl;

    return 0;
}
