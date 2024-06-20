#include <iostream>
#include <fstream>
#include <string>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

using namespace std;
using namespace boost::archive;

class Persona {
private:
    string nombre;
    int edad;

    // Implementación de serialización amigable con Boost.Serialization
    friend class boost::serialization::access;
    template <typename Archive>
    void serialize(Archive &ar, const unsigned int version) {
        ar & nombre;
        ar & edad;
    }

public:
    Persona() {}
    Persona(const string& nombre, int edad)
        : nombre(nombre), edad(edad) {}

    void setNombre(const string& nombre) { this->nombre = nombre; }
    string getNombre() const { return nombre; }

    void setEdad(int edad) { this->edad = edad; }
    int getEdad() const { return edad; }
};

// Función para serializar un objeto Persona en un archivo de texto
void serializarPersona(const Persona& persona, const string& nombreArchivo) {
    ofstream archivoSalida(nombreArchivo);
    if (archivoSalida.is_open()) {
        text_oarchive archivoTexto(archivoSalida);
        archivoTexto << persona;
        cout << "Persona serializada correctamente en " << nombreArchivo << endl;
    } else {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
    }
}

// Función para deserializar un objeto Persona desde un archivo de texto
void deserializarPersona(const string& nombreArchivo) {
    Persona persona;
    ifstream archivoEntrada(nombreArchivo);
    if (archivoEntrada.is_open()) {
        text_iarchive archivoTexto(archivoEntrada);
        archivoTexto >> persona;
        cout << "Persona deserializada desde " << nombreArchivo << endl;
        cout << "Nombre: " << persona.getNombre() << endl;
        cout << "Edad: " << persona.getEdad() << endl;
    } else {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
    }
}

int main() {
    // Crear una instancia de Persona
    Persona persona("Juan Perez", 30);

    // Serializar el objeto Persona en un archivo de texto
    serializarPersona(persona, "persona.txt");

    // Deserializar el objeto Persona desde el archivo de texto
    deserializarPersona("persona.txt");

    return 0;
}
