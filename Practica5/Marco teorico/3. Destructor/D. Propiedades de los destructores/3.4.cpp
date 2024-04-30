#include <iostream>
#include <string>


using namespace std;


class Ejemplo {
private:
    string nombre;


public:
    // Constructor
    Ejemplo(string n) : nombre(n) {
        cout << "Constructor llamado para " << nombre << endl;
    }


    // Destructor
    ~Ejemplo() {
        cout << "Destructor llamado para " << nombre << endl;
    }


    // Método para mostrar el nombre
    void mostrarNombre() {
        cout << "Nombre: " << nombre << endl;
    }
};

int main() {
    cout << "Creación de objetos:" << endl;
    Ejemplo objeto1("Objeto 1");
    Ejemplo objeto2("Objeto 2");


    cout << "\nMétodos llamados:" << endl;
    objeto1.mostrarNombre();
    objeto2.mostrarNombre();


    cout << "\nFin del ámbito de objeto2:" << endl;


    {
        Ejemplo objeto3("Objeto 3");
    } // Al llegar al final del ámbito, se llama al destructor de objeto3


    cout << "\nFin del ámbito de objeto1:" << endl;


    return 0;
}
