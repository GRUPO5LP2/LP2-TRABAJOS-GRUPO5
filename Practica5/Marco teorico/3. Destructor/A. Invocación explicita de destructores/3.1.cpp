#include <iostream>
#include <string>


using namespace std;


class MiClase {
private:
    string nombre;


public:
    MiClase(string n) : nombre(n) {
        cout << "Constructor llamado para " << nombre << endl;
    }


    ~MiClase() {
        cout << "Destructor llamado para " << nombre << endl;
    }


    void mostrarNombre() {
        cout << "Nombre: " << nombre << endl;
    }
};

int main() {
    {
        MiClase objeto("Objeto 1");
        objeto.~MiClase();
        objeto.mostrarNombre();
    }


    return 0;
}

