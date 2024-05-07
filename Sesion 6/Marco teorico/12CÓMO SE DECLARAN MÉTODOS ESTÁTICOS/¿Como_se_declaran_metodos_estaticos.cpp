#include <iostream>
using namespace std;


class Utilidades {
public:
    static int sumar(int a, int b) {
        return a + b;
    }


    static void saludar() {
        cout << "¡Hola desde el método estático saludar!" << endl;
    }
};

int main() {
    // Llamando a un método estático sin necesidad de una instancia de la clase
    int resultado = Utilidades::sumar(3, 4);
    cout << "La suma es: " << resultado << endl;


    // Llamando a otro método estático
    Utilidades::saludar();


    return 0;
}

