#include <iostream>
using namespace std;


class Punto {
private:
    double x;
    double y;


public:
    // Constructor
    Punto(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}


    // Sobrecarga del operador de suma binario (+)
    Punto operator+(const Punto& otro) const {
        return Punto(x + otro.x, y + otro.y);
    }


    // Método para mostrar las coordenadas del punto
    void mostrar() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};


int main() {
    // Crear dos puntos
    Punto punto1(1.0, 2.0);
    Punto punto2(3.0, 4.0);


    // Sumar los puntos utilizando el operador sobrecargado
    Punto suma = punto1 + punto2;


    // Mostrar el resultado de la suma
    cout << "La suma de los puntos es: ";
    suma.mostrar();


    return 0;
}



