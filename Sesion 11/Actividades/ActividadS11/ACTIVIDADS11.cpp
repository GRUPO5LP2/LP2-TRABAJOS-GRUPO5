#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <stdexcept>

using namespace std;

class Producto {
private:
    string nombre;
    double precio;
    int cantidad;

public:
    Producto() : nombre(""), precio(0.0), cantidad(0) {}
    Producto(string nombre, double precio, int cantidad) {
        if (precio < 0 || cantidad < 0) {
            throw invalid_argument("Precio y cantidad deben ser valores no negativos.");
        }
        this->nombre = nombre;
        this->precio = precio;
        this->cantidad = cantidad;
    }

    // Getters
    string getNombre() const { return nombre; }
    double getPrecio() const { return precio; }
    int getCantidad() const { return cantidad; }

    // Setters
    void setNombre(const string &nombre) { this->nombre = nombre; }
    void setPrecio(double precio) {
        if (precio < 0) {
            throw invalid_argument("El precio no puede ser negativo.");
        }
        this->precio = precio;
    }
    void setCantidad(int cantidad) {
        if (cantidad < 0) {
            throw invalid_argument("La cantidad no puede ser negativa.");
        }
        this->cantidad = cantidad;
    }

    // Método para mostrar información del producto
    void mostrarInfo() const {
        cout << "Nombre: " << nombre << ", Precio: " << precio 
             << ", Cantidad: " << cantidad << endl;
    }

    // Método para leer un producto desde una línea CSV
    void leerDesdeCSV(const string &linea) {
        size_t pos = 0;
        string token;
        string delimitador = ",";

        // Nombre
        pos = linea.find(delimitador);
        nombre = linea.substr(0, pos);
        linea.erase(0, pos + delimitador.length());

        // Precio
        pos = linea.find(delimitador);
        precio = stod(linea.substr(0, pos));
        linea.erase(0, pos + delimitador.length());

        // Cantidad
        cantidad = stoi(linea);
    }

    // Método para escribir un producto en formato CSV
    string escribirEnCSV() const {
        return nombre + "," + to_string(precio) + "," + to_string(cantidad) + "\n";
    }
};

void cargarIndice(unordered_map<string, streampos> &indice, const string &nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        throw runtime_error("No se pudo abrir el archivo.");
    }
    string linea;
    streampos pos = archivo.tellg();
    while (getline(archivo, linea)) {
        Producto producto;
        producto.leerDesdeCSV(linea);
        indice[producto.getNombre()] = pos;
        pos = archivo.tellg();
    }
    archivo.close();
}

void agregarProducto(ofstream &archivo, const Producto &producto, unordered_map<string, streampos> &indice) {
    streampos pos = archivo.tellp();
    archivo << producto.escribirEnCSV();
    indice[producto.getNombre()] = pos;
}

Producto buscarProducto(ifstream &archivo, const unordered_map<string, streampos> &indice, const string &nombre) {
    Producto producto;
    if (indice.find(nombre) != indice.end()) {
        archivo.seekg(indice.at(nombre));
        string linea;
        getline(archivo, linea);
        producto.leerDesdeCSV(linea);
    } else {
        throw runtime_error("Producto no encontrado.");
    }
    return producto;
}

void actualizarProducto(ofstream &archivo, unordered_map<string, streampos> &indice, const string &nombre, double nuevoPrecio, int nuevaCantidad) {
    if (indice.find(nombre) != indice.end()) {
        archivo.seekp(indice[nombre]);
        archivo << nombre << "," << nuevoPrecio << "," << nuevaCantidad << "\n";
        indice[nombre] = archivo.tellp();
    } else {
        throw runtime_error("Producto no encontrado.");
    }
}

void generarInforme(ifstream &archivo) {
    cout << "Informe del inventario:" << endl;
    archivo.clear();
    archivo.seekg(0, ios::beg);
    string linea;
    while (getline(archivo, linea)) {
        Producto producto;
        producto.leerDesdeCSV(linea);
        producto.mostrarInfo();
    }
}

int main() {
    unordered_map<string, streampos> indice;
    string nombreArchivo = "inventario.csv";

    try {
        // Crear archivo de inventario y cargar índice
        ofstream archivoOut(nombreArchivo, ios::app);
        cargarIndice(indice, nombreArchivo);

        // Agregar productos al inventario
        try {
            agregarProducto(archivoOut, Producto("Producto1", 10.0, 100), indice);
            agregarProducto(archivoOut, Producto("Producto2", 20.0, 50), indice);
        } catch (const invalid_argument &e) {
            cerr << "Error al agregar producto: " << e.what() << endl;
        }

        archivoOut.close();

        // Abrir archivo para lectura
        ifstream archivoIn(nombreArchivo);

        // Buscar y mostrar un producto
        try {
            Producto productoEncontrado = buscarProducto(archivoIn, indice, "Producto1");
            productoEncontrado.mostrarInfo();
        } catch (const runtime_error &e) {
            cerr << "Error al buscar producto: " << e.what() << endl;
        }

        // Actualizar información de un producto
        ofstream archivoOutActualizar(nombreArchivo, ios::in | ios::out);
        try {
            actualizarProducto(archivoOutActualizar, indice, "Producto1", 12.0, 90);
        } catch (const runtime_error &e) {
            cerr << "Error al actualizar producto: " << e.what() << endl;
        }
        archivoOutActualizar.close();

        // Generar informe
        generarInforme(archivoIn);
        archivoIn.close();
    } catch (const runtime_error &e) {
        cerr << "Error del sistema: " << e.what() << endl;
    }

    return 0;
}
