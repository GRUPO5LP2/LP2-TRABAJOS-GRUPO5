#include <iostream>
using namespace std;

const int MAX_PARADAS = 10;

template <typename T>
class Ruta {
public:
    string nombre;
    T paradas[MAX_PARADAS];
    int numParadas;

    Ruta(const string& nombre) : nombre(nombre), numParadas(0) {}

    void agregarParada(const T& parada) {
        if (numParadas < MAX_PARADAS) {
            paradas[numParadas++] = parada;
        } else {
            cout << "No se pueden agregar más paradas a la ruta " << nombre << endl;
        }
    }

    void mostrarRuta() const {
        cout << "Ruta: " << nombre << endl;
        for (int i = 0; i < numParadas; ++i) {
            cout << "Parada: " << paradas[i] << endl;
        }
    }

    template <typename V>
    void asignarVehiculo(const V& vehiculo) {
        cout << "Asignando vehículo " << vehiculo << " a la ruta " << nombre << endl;
    }
};

template <typename T>
class SistemaGestionRutas {
public:
    T* rutas[MAX_PARADAS];
    int numRutas;

    SistemaGestionRutas() : numRutas(0) {}

    void agregarRuta(T* ruta) {
        if (numRutas < MAX_PARADAS) {
            rutas[numRutas++] = ruta;
        } else {
            cout << "No se pueden agregar más rutas al sistema" << endl;
        }
    }

    void mostrarRutas() const {
        for (int i = 0; i < numRutas; ++i) {
            rutas[i]->mostrarRuta();
        }
    }

    template <typename V>
    void optimizarRecursos(const V& recurso) {
        cout << "Optimizando recurso: " << recurso << endl;
    }

    void generarInforme() const {
        cout << "Generando informe del sistema de gestión de rutas..." << endl;
        mostrarRutas();
    }
};

int main() {
    Ruta<string>* ruta1 = new Ruta<string>("Ruta 1");
    ruta1->agregarParada("Parada A");
    ruta1->agregarParada("Parada B");

    Ruta<string>* ruta2 = new Ruta<string>("Ruta 2");
    ruta2->agregarParada("Parada X");
    ruta2->agregarParada("Parada Y");

    SistemaGestionRutas<Ruta<string>> sistema;
    sistema.agregarRuta(ruta1);
    sistema.agregarRuta(ruta2);

    sistema.mostrarRutas();
    sistema.optimizarRecursos("Camión 123");
    sistema.generarInforme();

    delete ruta1;
    delete ruta2;

    return 0;
}
