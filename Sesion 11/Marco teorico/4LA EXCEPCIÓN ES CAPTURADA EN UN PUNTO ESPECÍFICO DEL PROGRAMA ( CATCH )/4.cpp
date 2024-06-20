#include <iostream>
#include <exception>
using namespace std;
void verificar(int value) {
    if (value > 100) {
        throw out_of_range("Error: El valor es mayor a 100.");
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
    catch (const out_of_range& e) {
        cerr << "Excepción capturada: " << e.what() << endl;
    }


    return 0;
}

