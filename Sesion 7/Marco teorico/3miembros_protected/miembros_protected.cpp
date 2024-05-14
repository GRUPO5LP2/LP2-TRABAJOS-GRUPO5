#include <iostream>
#include <string>

using namespace std;

// Definición de la clase base
class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string _nombre, int _edad) : nombre(_nombre), edad(_edad) {}

    void saludar() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }
};

// Definición de la clase derivada
class Estudiante : public Persona {
private:
    int numero_estudiante;

public:
    Estudiante(string _nombre, int _edad, int _numero_estudiante) : Persona(_nombre, _edad), numero_estudiante(_numero_estudiante) {}

    void mostrarInfo() {
        cout << "Soy el estudiante número " << numero_estudiante << "." << endl;
        cout << "Mi nombre es: " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main() {
    Estudiante estudiante("Juan", 20, 12345);
    estudiante.saludar(); // Método público de la clase base
    estudiante.mostrarInfo(); // Método público de la clase derivada que accede a miembros protegidos de la clase base

    return 0;
}
