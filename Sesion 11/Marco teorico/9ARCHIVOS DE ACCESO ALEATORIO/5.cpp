#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;


struct Persona {
    char nombre[50];
    int edad;
};


void escribirPersonas() {
    ofstream archivoSalida("personas.dat", ios::binary);


    if (!archivoSalida) {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return;
    }


    Persona personas[] = {
        {"Juan Perez", 30},
        {"Maria Gomez", 45},
        {"Carlos Ruiz", 35}
    };


    for (const auto& persona : personas) {
        archivoSalida.write(reinterpret_cast<const char*>(&persona), sizeof(Persona));
    }


    archivoSalida.close();
}


void leerPersona(int indice) {
    ifstream archivoEntrada("personas.dat", ios::binary);


    if (!archivoEntrada) {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
        return;
    }


    archivoEntrada.seekg(indice * sizeof(Persona), ios::beg);


    Persona persona;
    archivoEntrada.read(reinterpret_cast<char*>(&persona), sizeof(Persona));


    if (archivoEntrada) {
        cout << "Nombre: " << persona.nombre << ", Edad: " << persona.edad << endl;
    } else {
        cerr << "No se pudo leer la persona en la posición " << indice << endl;
    }


    archivoEntrada.close();
}


int main() {
    escribirPersonas();


    cout << "Leer persona en posición 0:" << endl;
    leerPersona(0);


    cout << "Leer persona en posición 1:" << endl;
    leerPersona(1);


    cout << "Leer persona en posición 2:" << endl;
    leerPersona(2);


    return 0;
}
