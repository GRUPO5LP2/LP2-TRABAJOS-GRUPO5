#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Solicitar al usuario el nombre del archivo
    string nombreArchivo;
    cout << "Ingrese el nombre del archivo de texto: ";
    getline(cin, nombreArchivo);

    // Crear un objeto ifstream para leer el archivo
    ifstream archivoEntrada(nombreArchivo);

    // Verificar si el archivo se abrió correctamente
    if (!archivoEntrada) {
        cerr << "Error: No se pudo abrir el archivo " << nombreArchivo << endl;
        return 1; // Salir con un código de error
    }

    // Leer el contenido del archivo y mostrarlo por pantalla
    string linea;
    while (getline(archivoEntrada, linea)) {
        cout << linea << endl;
    }

    // Cerrar el archivo
    archivoEntrada.close();

    return 0;
}
