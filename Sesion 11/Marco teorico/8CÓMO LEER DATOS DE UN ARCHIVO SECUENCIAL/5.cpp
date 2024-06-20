#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
    // Crear un objeto de flujo de entrada (ifstream) y asociarlo con el archivo "datos.txt"
    ifstream archivoEntrada("datos.txt");
    string nombre;
    string apellido;
    int edad;


    // Verificar si el archivo se abrió correctamente
    if (!archivoEntrada) {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
        return 1; // Salir con un código de error
    }


    // Leer los datos del archivo secuencialmente
    while (archivoEntrada >> nombre >> apellido >> edad) {
        // Mostrar los datos leídos
        cout << "Nombre: " << nombre << " " << apellido << ", Edad: " << edad << endl;
    }


    // Cerrar el archivo
    archivoEntrada.close();
    return 0;
}
