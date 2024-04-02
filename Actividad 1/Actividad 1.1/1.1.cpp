#include <iostream>
using namespace std;
#include <string>

class Animal {
    private:
        string nombre;
        int edad;
        string tipo;
    
    public:
        Animal(string nombre, int edad, string tipo) : nombre(nombre), edad(edad), tipo(tipo) {}

        void hacerSonido() const {
            if (tipo == "Perro") {
                cout << "Guau!" << endl;
            } else if (tipo == "Gato") {
                cout << "Miau!" << endl;
            } else if (tipo == "Pajaro") {
                cout << "Pío!" << endl;
            } else {
                cout << "Sonido desconocido para este tipo de animal." << endl;
            }
        }

        void alimentar() const {
            cout << "El " << tipo << " con el nombre " << nombre << " esta comiendo aun tiene "<< edad << " años.\n" <<endl;
        }
};

int main() {
    Animal perro("Firulais", 3, "Perro");
    perro.hacerSonido();
    perro.alimentar();

    Animal gato("Michi", 5, "Gato");
    gato.hacerSonido();
    gato.alimentar();

    Animal pajaro("Pickle", 1, "Pajaro");
    pajaro.hacerSonido();
    pajaro.alimentar();

    return 0;
}
