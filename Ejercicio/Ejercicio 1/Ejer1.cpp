#include <iostream>
using namespace std;
#include <cstdlib> 
#include <ctime>   


class Auto {
    private:
        string nombre;
        int distanciaRecorrida;

    public:
        Auto(string nombre) : nombre(nombre), distanciaRecorrida(0) {}
        void avanzar(int distancia) {
            distanciaRecorrida += distancia;
        }

        int obtenerDistanciaRecorrida() const {
            return distanciaRecorrida;
        }

        string obtenerNombre() const {
            return nombre;
        }
    };

class Carrera {
    private:
        int distanciaTotal;
        int dificultad;

    public:
        Carrera() : distanciaTotal(0), dificultad(0) {}

        void establecerDistanciaTotal(int distancia) {
            distanciaTotal = distancia;
        }

        void establecerDificultad(int dificultad) {
            this->dificultad = dificultad;
        }

        void simularCarrera(Auto &jugador);
};

void Carrera::simularCarrera(Auto &jugador) {
    srand(time(0));
    int distanciaComputadora = 0;

    while (jugador.obtenerDistanciaRecorrida() < distanciaTotal && distanciaComputadora < distanciaTotal) {
        int avanceJugador = rand() % 10 + 1; 
        jugador.avanzar(avanceJugador);
        int avanceComputadora = rand() % dificultad + 1; 
        distanciaComputadora += avanceComputadora;

        cout << "El jugador " << jugador.obtenerNombre() << " ha avanzado " << avanceJugador << " unidades." << endl;
        cout << "La computadora ha avanzado " << avanceComputadora << " unidades." << endl;
        cout << "Distancia total del jugador: " << jugador.obtenerDistanciaRecorrida() << endl;
        cout << "Distancia total de la computadora: " << distanciaComputadora << endl;
        cout << endl;
    }
    if (jugador.obtenerDistanciaRecorrida() >= distanciaTotal && distanciaComputadora >= distanciaTotal) {
        cout << "¡Ha sido un empate!" << endl;
    } else if (jugador.obtenerDistanciaRecorrida() >= distanciaTotal) {
        cout << "¡El jugador " << jugador.obtenerNombre() << " ha ganado la carrera!" << endl;
    } else {
        cout << "¡La computadora ha ganado la carrera!" << endl;
    }
}

int main() {
    string nombreJugador;
    cout << "Ingrese el nombre del jugador: ";
    getline(cin, nombreJugador);
    Auto jugador(nombreJugador);
    Carrera carrera;
    int distancia;
    cout << "Ingrese la distancia total de la carrera: ";
    cin >> distancia;
    carrera.establecerDistanciaTotal(distancia);
    int dificultad;
    cout << "Ingrese la dificultad del oponente de la computadora (un número mayor que 0): ";
    cin >> dificultad;
    while (dificultad <= 0) {
        cout << "La dificultad debe ser un número mayor que 0. Ingrese nuevamente: ";
        cin >> dificultad;
    }
    carrera.establecerDificultad(dificultad);
    carrera.simularCarrera(jugador);

    return 0;
}
