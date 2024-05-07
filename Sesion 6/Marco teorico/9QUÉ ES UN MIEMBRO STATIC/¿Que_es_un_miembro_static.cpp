#include <iostream>
using namespace std;
class MiClase {
public:
    static int contador; // Declaración del miembro static
    MiClase() {
        contador++;
    }
    static void mostrarContador() {
        cout << "El contador es: " << contador << endl;
    }
};
// Inicialización del miembro static fuera de la clase
int MiClase::contador = 0;


int main() {
    MiClase obj1;
    MiClase obj2;
    MiClase obj3;


    // Llamada a la función static desde la clase (no se necesita una instancia)
    MiClase::mostrarContador();


    return 0;
}



