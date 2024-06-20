#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    // Escribir en el archivo secuencial
    ofstream archivoSalida("personas.txt");
    if (archivoSalida.is_open()) {
        archivoSalida << "Juan Perez 30\n";
        archivoSalida << "Maria Gomez 45\n";
        archivoSalida << "Carlos Ruiz 35\n";
        archivoSalida.close();
        cout << "Datos escritos en el archivo correctamente.\n";
    }
    else {
        cout << "No se pudo abrir el archivo para escritura.\n";
    }


    // Leer desde el archivo secuencial
    ifstream archivoEntrada("personas.txt");
    string nombre;
    string apellido;
    int edad;
    if (archivoEntrada.is_open()) {
        while (archivoEntrada >> nombre >> apellido >> edad) {
            cout << "Nombre: " << nombre << " " << apellido << ", Edad: " << edad << endl;
        }
        archivoEntrada.close();
    }
    else {
        cout << "No se pudo abrir el archivo para lectura.\n";
    }
    return 0;
}
