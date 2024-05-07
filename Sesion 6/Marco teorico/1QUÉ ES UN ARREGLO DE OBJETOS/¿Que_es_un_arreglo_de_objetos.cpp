#include <iostream>
#include <string>
using namespace std;


class Persona {
private:
    string nombre;
    int edad;
    char genero;

public:

    Persona(string n, int e, char g) : nombre(n), edad(e), genero(g) {}


    void mostrarDatos() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << ", Género: " << genero << endl;
    }
};

int main() {

    const int tamano = 3;
    Persona personas[tamano] = {
        Persona("Juan", 25, 'M'),
        Persona("María", 30, 'F'),
        Persona("Pedro", 40, 'M')
    };

    for (int i = 0; i < tamano; ++i) {
        personas[i].mostrarDatos();
    }

    return 0;
}




