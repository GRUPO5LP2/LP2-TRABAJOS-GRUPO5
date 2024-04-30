#include <iostream>
#include <cstdlib> // Para abort() y exit()


using namespace std;


class MiClase {
public:
    MiClase() {
        cout << "Constructor llamado" << endl;
    }


    ~MiClase() {
        // Simulando una condición de error
        bool error = true;


        if (error) {
            cout << "Error detectado en el destructor" << endl;
            // Abortar el programa abruptamente
            abort();
        } else {
            cout << "Destructor llamado normalmente" << endl;
        }
    }
};

int main() {
    cout << "Inicio del programa" << endl;


    MiClase objeto;


    // Forzar una condición de error
    bool error = true;


    if (error) {
        cout << "Error detectado en main()" << endl;
        // Salir del programa con un código de error
        exit(EXIT_FAILURE);
    }


    cout << "Fin del programa" << endl;


    return 0;
}
