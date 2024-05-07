#include <iostream>
#include <string>
using namespace std;
class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}


    void mostrarInfo() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

int main() {
    const int tamanoArreglo = 3;
    Persona personas[tamanoArreglo] = {
        Persona("Juan", 25),
        Persona("María", 30),
        Persona("Carlos", 40)
    };


    for (int i = 0; i < tamanoArreglo; ++i) {
        personas[i].mostrarInfo();
    }
    return 0;
}


