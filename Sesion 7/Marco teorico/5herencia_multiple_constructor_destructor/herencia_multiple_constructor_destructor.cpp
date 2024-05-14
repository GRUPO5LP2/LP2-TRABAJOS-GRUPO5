#include <iostream>
using namespace std;

// Definición de la primera clase base
class Base1 {
public:
    Base1() {
        cout << "Constructor de Base1" << endl;
    }
    ~Base1() {
        cout << "Destructor de Base1" << endl;
    }
};

// Definición de la segunda clase base
class Base2 {
public:
    Base2() {
        cout << "Constructor de Base2" << endl;
    }
    ~Base2() {
        cout << "Destructor de Base2" << endl;
    }
};

// Definición de la clase derivada que hereda de Base1 y Base2
class Derivada : public Base1, public Base2 {
public:
    Derivada() {
        cout << "Constructor de Derivada" << endl;
    }
    ~Derivada() {
        cout << "Destructor de Derivada" << endl;
    }
};

int main() {
    // Creación de un objeto de la clase derivada
    Derivada obj;

    return 0;
}
