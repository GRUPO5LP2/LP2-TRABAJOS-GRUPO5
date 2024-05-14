#include <iostream>
using namespace std;


// Clase base
class Base {
public:
    Base() {
        cout << "Constructor de la clase base" << endl;
    }


    ~Base() {
        cout << "Destructor de la clase base" << endl;
    }
};


// Clase derivada que hereda de Base
class Derivada : public Base {
public:
    Derivada() {
        cout << "Constructor de la clase derivada" << endl;
    }


    ~Derivada() {
        cout << "Destructor de la clase derivada" << endl;
    }
};

int main() {
    // Creación de un objeto de la clase derivada
    Derivada obj;


    return 0;
}
