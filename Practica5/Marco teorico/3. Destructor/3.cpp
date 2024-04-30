#include <iostream>
#include <string>


using namespace std;


class Persona {
private:
    string nombre;


public:
    // Constructor
    Persona(string n) : nombre(n) {
        cout << "Constructor llamado para " << nombre << endl;
    }


    // Destructor
    ~Persona() {
        cout << "Destructor llamado para " << nombre << endl;
    }


    // Método para mostrar el nombre de la persona
    void mostrarNombre() {
        cout << "Nombre: " << nombre << endl;
    }
};


int main() {
    // Crear un objeto Persona
    Persona* persona1 = new Persona("Juan");


    // Llamar al método para mostrar el nombre de la persona
    persona1->mostrarNombre();


    // Liberar la memoria asignada al objeto persona1
    delete persona1;


    return 0;
}
