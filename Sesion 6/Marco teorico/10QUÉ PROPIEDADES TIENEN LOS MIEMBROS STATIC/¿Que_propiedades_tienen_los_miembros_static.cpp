#include <iostream>
using namespace std;


class Ejemplo {
public:
    static int contador; // Miembro static para contar instancias de la clase


    Ejemplo() {
        contador++; // Incrementa el contador cada vez que se crea un objeto
    }


    static void mostrarContador() {
        cout << "El contador es: " << contador << endl;
    }
};


int Ejemplo::contador = 0; // Inicialización externa del miembro static


int main() {
    // Creando instancias de Ejemplo
    Ejemplo e1;
    Ejemplo e2;
    Ejemplo e3;


    // Llamando a la función static desde la clase (sin necesidad de instancia)
    Ejemplo::mostrarContador();


    return 0;
}



