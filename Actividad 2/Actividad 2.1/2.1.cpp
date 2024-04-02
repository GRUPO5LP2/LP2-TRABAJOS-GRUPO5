#include <iostream>
using namespace std;
#include <string>

class Persona {
    private:
        string nombre;
        int edad;
        string genero;

    public:
        Persona(string nombre, int edad, string genero) : nombre(nombre), edad(edad), genero(genero) {}
        void setNombre(string nuevoNombre) {
            nombre = nuevoNombre;
        }
        void setEdad(int nuevaEdad) {
            edad = nuevaEdad;
        }
        void setGenero(string nuevoGenero) {
            genero = nuevoGenero;
        }

        string getNombre() const {
            return nombre;
        }
        int getEdad() const {
            return edad;
        }
        string getGenero() const {
            return genero;
        }
};

int main() {
    Persona persona1("Juan", 30, "Masculino");
    Persona persona2("María", 25, "Femenino");
    cout << "Nombre de persona 1: " << persona1.getNombre() << endl;
    cout << "Edad de persona 1: " << persona1.getEdad() << endl;
    cout << "Género de persona 1: " << persona1.getGenero() << endl;
    
    persona2.setNombre("Carla");
    persona2.setEdad(27);
    cout << "\nNombre de persona 2: " << persona2.getNombre() << endl;
    cout << "Edad de persona 2: " << persona2.getEdad() << endl;
    cout << "Género de persona 2: " << persona2.getGenero() << endl;
    return 0;
}
