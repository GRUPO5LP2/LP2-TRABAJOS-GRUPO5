#include <iostream>
using namespace std;
// Clase base
class A {
private:
    int x;
public:
    A(int value) : x(value) {}
    void display() {
        cout << "Valor de x: " << x << endl;
    }
};

// Clase derivada
class B : virtual private A {
public:
    B(int value) : A(value) {}
    void show() {
        display(); // Accede al miembro protegido de la clase base
    }
};

int main() {
    B objB(10);
    // objB.display(); // Esto daría un error ya que A es virtualmente privada
    objB.show(); // Accede al miembro protegido de la clase base a través de B
    return 0;
}
