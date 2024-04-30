#include <iostream>
#include <string>


using namespace std;


class Persona {
private:
    string nombre;
    int edad;


public:
    // Constructor
    Persona(string n, int e) {
        nombre = n;
        edad = e;
    }


    // Método para mostrar los detalles de la persona
    void mostrarDetalles() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};
int main() {
    // Crear un objeto Persona utilizando el constructor
    Persona persona1("Juan", 30);


    // Llamar al método para mostrar los detalles de la persona
    persona1.mostrarDetalles();


    return 0;
}
