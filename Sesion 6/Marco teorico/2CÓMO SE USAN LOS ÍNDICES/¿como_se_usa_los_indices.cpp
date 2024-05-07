#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    cout << "El primer elemento es: " << numeros[0] << endl;
    cout << "El tercer elemento es: " << numeros[2] << endl;
    numeros[1] = 25;

    cout << "Después de modificar, el segundo elemento es: " << numeros[1] << endl;
    return 0;
}
