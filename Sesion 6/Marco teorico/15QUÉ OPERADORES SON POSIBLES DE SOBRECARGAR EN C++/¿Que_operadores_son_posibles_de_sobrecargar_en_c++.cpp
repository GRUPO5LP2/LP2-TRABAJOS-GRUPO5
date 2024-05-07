#include <iostream>
using namespace std;

class Numero {
private:
    int valor;


public:
    Numero(int v) : valor(v) {}


    // Sobrecarga del operador de suma
    Numero operator+(const Numero& otro) const {
        return Numero(valor + otro.valor);
    }


    void mostrar() const {
        cout << "Valor: " << valor << endl;
    }
};


int main() {
    Numero num1(5);
    Numero num2(10);


    Numero suma = num1 + num2;
    suma.mostrar();


    return 0;
}

