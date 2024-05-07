#include <iostream>
using namespace std;


// Declaración de la clase
class MiClase {
private:
    int datoPrivado;


public:
    MiClase(int dato) : datoPrivado(dato) {}


    // Declaración de la función amiga
    friend void funcionAmiga(MiClase obj);
};


// Definición de la función amiga fuera de la clase
void funcionAmiga(MiClase obj) {
    // Accediendo al miembro privado de la clase
    cout << "El dato privado es: " << obj.datoPrivado << endl;
}


int main() {
    MiClase objeto(42);


    // Llamando a la función amiga
    funcionAmiga(objeto);


    return 0;
}


