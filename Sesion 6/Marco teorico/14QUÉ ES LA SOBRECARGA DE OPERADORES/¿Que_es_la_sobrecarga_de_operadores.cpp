#include <iostream>
using namespace std;


class Punto {
private:
    int x;
    int y;
public:
    Punto(int _x = 0, int _y = 0) : x(_x), y(_y) {}


    Punto operator+(const Punto& otro) const {
        Punto resultado;
        resultado.x = this->x + otro.x;
        resultado.y = this->y + otro.y;
        return resultado;
    }


    void mostrar() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Punto punto1(1, 2);
    Punto punto2(3, 4);


    Punto suma = punto1 + punto2;


    cout << "La suma de los puntos es: ";
    suma.mostrar();


    return 0;
}


