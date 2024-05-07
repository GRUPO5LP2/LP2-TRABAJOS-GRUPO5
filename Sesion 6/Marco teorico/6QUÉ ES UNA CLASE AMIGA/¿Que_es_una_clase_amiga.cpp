#include <iostream>
using namespace std;

class MiClase {
private:
    int datoPrivado;

public:
    MiClase(int dato) : datoPrivado(dato) {}


    friend class ClaseAmiga;
};


class ClaseAmiga {
public:
    void mostrarDatoPrivado(MiClase obj) {


        cout << "El dato privado de MiClase es: " << obj.datoPrivado << endl;
    }
};

int main() {
    MiClase objeto(42);
    ClaseAmiga amigo;

    amigo.mostrarDatoPrivado(objeto);

    return 0;
}



