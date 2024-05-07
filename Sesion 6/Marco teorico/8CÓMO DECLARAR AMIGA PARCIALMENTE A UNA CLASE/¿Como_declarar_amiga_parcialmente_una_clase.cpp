#include <iostream>
using namespace std;


class ClaseA;


class ClaseB {
public:
    void metodoB(ClaseA& objetoA);
};


class ClaseA {
private:
    int datoPrivadoA;


public:
    ClaseA(int dato) : datoPrivadoA(dato) {}


    friend void ClaseB::metodoB(ClaseA& objetoA);
};


void ClaseB::metodoB(ClaseA& objetoA) {
    cout << "El dato privado de ClaseA es: " << objetoA.datoPrivadoA << endl;
}


int main() {
    ClaseA objetoA(42);
    ClaseB objetoB;


    objetoB.metodoB(objetoA);


    return 0;
}


