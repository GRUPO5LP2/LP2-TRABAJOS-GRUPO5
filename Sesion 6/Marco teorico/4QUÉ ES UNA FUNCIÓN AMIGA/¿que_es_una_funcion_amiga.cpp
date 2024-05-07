#include <iostream>
using namespace std;
class MiClase {
private:
    int datoPrivado;
public:
    MiClase(int dato) : datoPrivado(dato) {}


    friend void funcionAmiga(MiClase obj);
};
void funcionAmiga(MiClase obj) {
    cout << "El dato privado es: " << obj.datoPrivado << endl;
}


int main() {
    MiClase objeto(42);


    funcionAmiga(objeto);


    return 0;
}


