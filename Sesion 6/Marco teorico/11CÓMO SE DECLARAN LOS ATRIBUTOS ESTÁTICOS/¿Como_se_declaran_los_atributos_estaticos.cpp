#include <iostream>
using namespace std;
class Contador {
public:
    static int contador; // Declaración del atributo estático


    Contador() {
        contador++;
    }
};
int Contador::contador = 0;

int main() {
    Contador c1;
    Contador c2;
    Contador c3;


    cout << "El contador es: " << Contador::contador << endl;


    return 0;
}




