#include <iostream>
using namespace std;
// Clase base
class Base {
public:
    int publico = 10;
protected:
    int protegido = 20;
private:
    int privado = 30;
};

// Clase derivada con herencia pública
class DerivadaPublica : public Base {
public:
    void mostrar() {
        cout << "Herencia pública: " << publico << ", " << protegido << endl;
        //cout << privado << endl; // Esto daría un error, ya que privado es privado en la clase base
    }
};

// Clase derivada con herencia protegida
class DerivadaProtegida : protected Base {
public:
    void mostrar() {
        cout << "Herencia protegida: " << publico << ", " << protegido << endl;
        //cout << privado << endl; // Esto daría un error, ya que privado es privado en la clase base
    }
};

// Clase derivada con herencia privada
class DerivadaPrivada : private Base {
public:
    void mostrar() {
        cout << "Herencia privada: " << publico << ", " << protegido << endl;
        //cout << privado << endl; // Esto daría un error, ya que privado es privado en la clase base
    }
};

int main() {
    DerivadaPublica d1;
    d1.mostrar(); // Accede a miembros públicos y protegidos de Base

    DerivadaProtegida d2;
    //d2.mostrar(); // Esto daría un error, ya que los miembros de Base son protegidos en DerivadaProtegida

    DerivadaPrivada d3;
    //d3.mostrar(); // Esto daría un error, ya que los miembros de Base son privados en DerivadaPrivada

    return 0;
}
