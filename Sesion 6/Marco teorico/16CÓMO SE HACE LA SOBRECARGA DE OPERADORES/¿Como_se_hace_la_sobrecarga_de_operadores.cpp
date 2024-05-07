#include <iostream>
using namespace std;


class Vector2D {
private:
    double x;
    double y;


public:
    // Constructor
    Vector2D(double _x = 0.0, double _y = 0.0) : x(_x), y(_y) {}


    // Sobrecarga del operador de suma
    Vector2D operator+(const Vector2D& otro) const {
        return Vector2D(x + otro.x, y + otro.y);
    }


    // Método para imprimir el vector
    void mostrar() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};


int main() {
    // Crear dos vectores
    Vector2D v1(1.0, 2.0);
    Vector2D v2(3.0, 4.0);


    // Sumar los vectores utilizando el operador sobrecargado
    Vector2D suma = v1 + v2;


    // Mostrar el resultado de la suma
    cout << "La suma de los vectores es: ";
    suma.mostrar();


    return 0;
}




