#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Interfaces específicas para cada tipo de usuario
class ICliente {
    public:
    virtual void pagar(float monto) = 0;
    virtual void verHistorial() = 0;
};
class IAdministrador {
    public:
    virtual void crearUsuario(string nombre, string tipo) = 0;
    virtual void eliminarUsuario(string nombre) = 0;
};
class IVendedor {
    public:
    virtual void agregarProducto(string nombre, float precio) = 0;
    virtual void eliminarProducto(string nombre) = 0;
    virtual void verProductos() = 0;
};
// Clases que implementan las interfaces
class Cliente : public ICliente {
    public:
    void pagar(float monto) {
        cout << "El cliente ha pagado " << monto << " pesos" << endl;
    }
    void verHistorial() {
        cout << "El cliente está viendo su historial de compras" << endl;
    }
};
class Administrador : public IAdministrador {
public:
    void crearUsuario(string nombre, string tipo) {
        cout << "Se ha creado un nuevo usuario de tipo " << tipo << " llamado " << nombre << endl;
    }
    void eliminarUsuario(string nombre) {
        cout << "Se ha eliminado el usuario " << nombre << endl;
    }
};
class Vendedor : public IVendedor {
private:
    vector<pair<string, float>> productos;
public:
    void agregarProducto(string nombre, float precio) {
    productos.push_back(make_pair(nombre, precio));
        cout << "Se ha agregado el producto " << nombre << " con un precio de " << precio << " pesos" << endl;
    }
    void eliminarProducto(string nombre) {
        for (int i = 0; i < productos.size(); i++) {
            if (productos[i].first == nombre) {
                productos.erase(productos.begin() + i);
                cout << "Se ha eliminado el producto " << nombre << endl;
                return;
            }
 }
    cout << "No se ha encontrado el producto " << nombre << endl;
 }
    void verProductos() {
        cout << "Los productos en venta son:" << endl;
        for (int i = 0; i < productos.size(); i++) {
            cout << "- " << productos[i].first << ": " << productos[i].second << "pesos" << endl;
        }
    }
};

int main() {
    Cliente c;
    c.pagar(500.0);
    c.verHistorial();
    Administrador a;
    a.crearUsuario("Juan", "vendedor");
    a.eliminarUsuario("Pedro");
    Vendedor v;
    v.agregarProducto("Televisor", 10000.0);
    v.agregarProducto("Computadora", 15000.0);
    v.verProductos();
    v.eliminarProducto("Televisor");
    v.verProductos();
 return 0;
}
