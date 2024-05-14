#include <iostream>
using namespace std;

// Clase Padre
class Vehiculo {
protected:
    string marca, modelo;
    int anio;
    double precio;

public:
    Vehiculo(string m, string mod, int a, double p) {
        marca = m;
        modelo = mod;
        anio = a;
        precio = p;
    }

    void mostrarDatos() {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Año: " << anio << endl;
        cout << "Precio: " << precio << " Soles."<< endl;
    }
};

// Clase hijo carros
class Automovil : public Vehiculo {
private:
    int numPuertas;
    string tipoCombustible;

public:
    Automovil(string m, string mod, int a, double p, int np, string tc)
        : Vehiculo(m, mod, a, p) {
        numPuertas = np;
        tipoCombustible = tc;
    }

    void mostrarDatos() {
        Vehiculo::mostrarDatos();
        cout << "Número de puertas: " << numPuertas << endl;
        cout << "Tipo de combustible: " << tipoCombustible << endl;
    }
};

// Clase hijo motos
class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(string m, string mod, int a, double p, int c)
        : Vehiculo(m, mod, a, p) {
        cilindrada = c;
    }

    void mostrarDatos() {
        Vehiculo::mostrarDatos();
        cout << "Cilindrada: " << cilindrada << endl;
    }
};


int main() {
    Automovil auto1("Kia", "Rio", 2020, 60000, 4, "Gasolina");
    Motocicleta moto1("Honda", "CRF450R", 2021, 45000, 450);

    cout << "Datos del Carro:" << endl;
    auto1.mostrarDatos();

    cout << "Datos de la Moto:" << endl;
    moto1.mostrarDatos();

    return 0;
}