#include <iostream>
using namespace std;

//PLANTILLA
template <typename T>
T sumar(T a, T b) {
    return a + b;
}

int main() {
    cout << "Suma de enteros: " << sumar<int>(3, 4) << endl;
    cout << "Suma de dobles: " << sumar<double>(2.5, 4.3) << endl;

    return 0;
}
