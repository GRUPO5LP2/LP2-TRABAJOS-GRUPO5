#include <iostream>
#include <fstream> // Biblioteca para manejo de archivos
#include <string>
using namespace std;


int main() {
    // Escribir en el archivo
    ofstream archivoSalida("ejemplo.txt");
    if (archivoSalida.is_open()) {
        archivoSalida << "Hola, este es un ejemplo de escritura en un archivo.\n";
        archivoSalida << "Esta es la segunda línea.\n";
        archivoSalida.close();
        cout << "Datos escritos en el archivo correctamente.\n";
    }
    else {
        cout << "No se pudo abrir el archivo para escritura.\n";
    }


    // Leer desde el archivo
    ifstream archivoEntrada("ejemplo.txt");
    string linea;
    if (archivoEntrada.is_open()) {
        while (getline(archivoEntrada, linea)) {
            cout << linea << '\n';
        }
        archivoEntrada.close();
    }
    else {
        cout << "No se pudo abrir el archivo para lectura.\n";
    }


    return 0;
}
