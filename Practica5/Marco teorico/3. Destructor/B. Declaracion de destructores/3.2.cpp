#include <iostream>
#include <string>


using namespace std;


class MiClase {
private:
    string nombre;


public:
    // Constructor
    MiClase(string n) : nombre(n) {
        cout << "Constructor llamado para " << nombre << endl;
    }


    // Destructor
    ~MiClase() {
        cout << "Destructor llamado para " << nombre << endl;
    }


    // Método para mostrar el nombre
    void mostrarNombre() {
        cout << "Nombre: " << nombre << endl;
    }
};

int main() {
    // Crear un objeto de la clase MiClase
    MiClase objeto("Ejemplo");


    // Llamar al método para mostrar el nombre
    objeto.mostrarNombre();


    return 0;
}
