#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T calcularDistancia(T x1, T y1, T x2, T y2) {
    T distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distancia;
}

template <typename T>
T calcularTiempoEstimado(T distancia, T velocidadPromedio) {
    T tiempo = distancia / velocidadPromedio;
    return tiempo;
}

int main() {
    int x1 = 0, y1 = 0,  x2 = 5, y2 = 5;
    int distancia_enteros = calcularDistancia(x1, y1, x2, y2);
    cout << "Distancia entre (" << x1 << "," << y1 << ") y (" << x2 << "," << y2 << "): " << distancia_enteros << endl;

    double x3 = 1.5, y3 = 2.5,  x4 = 7.5, y4 = 9.5;
    double distancia_dobles = calcularDistancia(x3, y3, x4, y4);
    cout << "\nDistancia entre (" << x3 << "," << y3 << ") y (" << x4 << "," << y4 << "): " << distancia_dobles << endl;

    double distancia_km = 100.0;
    double velocidad_promedio_kmph = 80.0;

    double tiempo_estimado = calcularTiempoEstimado(distancia_km, velocidad_promedio_kmph);
    cout << "\nTiempo estimado de entrega para " << distancia_km << " km a " << velocidad_promedio_kmph << " km/h: " << tiempo_estimado << " horas" << endl;

    return 0;
}
