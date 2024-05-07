#include <iostream>
using namespace std;
// Declaración de la clase MiClase
class MiClase {
private:
    int datoPrivado;


public:
    MiClase(int dato) : datoPrivado(dato) {}


    // Declaración de la clase amiga
    friend class ClaseAmiga;
};


// Definición de la clase amiga
class ClaseAmiga {
public:
    void mostrarDatoPrivado(MiClase obj) {
        // Accediendo al miembro privado de MiClase
        cout << "El dato privado de MiClase es: " << obj.datoPrivado << endl;
    }
};

int main() {
    MiClase objeto(42);
    ClaseAmiga amigo;


    // Llamando al método de ClaseAmiga que accede al miembro privado de MiClase
    amigo.mostrarDatoPrivado(objeto);


    return 0;
}




