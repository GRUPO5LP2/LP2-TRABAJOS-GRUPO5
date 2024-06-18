#include <iostream>

using namespace std;

const int MAX_PARADAS = 10;

class Ruta {
public:
    string nombre;
    string paradas[MAX_PARADAS];
    int numParadas;

    Ruta(const string& nombre) : nombre(nombre), numParadas(0) {}

    void agregarParada(const string& parada) {
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

    template <typename T>
    void asignarVehiculo(const T& vehiculo) {
        cout << "Asignando vehículo " << vehiculo << " a la ruta " << nombre << endl;
    }
};

const int MAX_ENTREGAS = 10;

class Entrega {
public:
    string destinatario;
    string direccion;

    Entrega(const string& destinatario, const string& direccion)
        : destinatario(destinatario), direccion(direccion) {}

    void mostrarEntrega() const {
        cout << "Entrega para: " << destinatario << " en " << direccion << endl;
    }

    template <typename T>
    void planificarHorario(const T& horario) {
        cout << "Planificando horario " << horario << " para la entrega a " << destinatario << endl;
    }
};

int main() {
    Ruta ruta1("Ruta 1");
    ruta1.agregarParada("Parada A");
    ruta1.agregarParada("Parada B");
    ruta1.mostrarRuta();
    ruta1.asignarVehiculo("Camión 123");

    Entrega entrega1("Juan Perez", "Calle Falsa 123");
    entrega1.mostrarEntrega();
    entrega1.planificarHorario("10:00 AM");

    return 0;
}
