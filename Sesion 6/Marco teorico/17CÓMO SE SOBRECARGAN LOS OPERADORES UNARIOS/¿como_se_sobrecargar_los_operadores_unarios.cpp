#include <iostream>
using namespace std;


class Numero {
private:
    int valor;


public:
    // Constructor
    Numero(int val = 0) : valor(val) {}


    // Sobrecarga del operador de negación unario (-)
    Numero operator-() const {
        return Numero(-valor);
    }


    // Método para obtener el valor del número
    int obtenerValor() const {
        return valor;
    }
};

int main() {
    Numero num(10);


    // Operador de negación unario
    Numero negativo = -num;


    cout << "Número original: " << num.obtenerValor() << endl;
    cout << "Número negativo: " << negativo.obtenerValor() << endl;

    return 0;
}




