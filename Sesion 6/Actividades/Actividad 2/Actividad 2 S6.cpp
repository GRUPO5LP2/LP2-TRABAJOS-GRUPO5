#include <iostream>
using namespace std;

class Circulo {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double obtenerRadio() {
        return radio;
    }
    friend double calcularArea(Circulo &c);
};


double calcularArea(Circulo &c) {
    const double pi = 3.1416;
    return pi * c.radio * c.radio;
}


int main() {
    Circulo circulo1(5.0); 
    Circulo circulo2(7.0); 
    
    cout << "Área del círculo 1: " << calcularArea(circulo1) << endl;
    cout << "Área del círculo 2: " << calcularArea(circulo2) << endl;
    
    return 0;
}
