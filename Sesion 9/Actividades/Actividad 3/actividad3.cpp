#include <iostream>
#include <math.h>
using namespace std;

class Figura{
    public:
        virtual void calcularArea() = 0;
};

class Circulo: public Figura{
    private:
        const double pi = 3.14;
        double area;
        double radio;
    public:
        Circulo(double r) : radio(r){}
        void calcularArea() override{
            area = pi * pow(radio,2);
            cout << "El area del circulo es: " << area << endl;
        }
};

class Rectangulo: public Figura{
    private:
        const double pi = 3.14;
        double area;
        double largo;
        double ancho;
    public:
        Rectangulo(double l, double a) : largo(l), ancho(a){}
        void calcularArea() override{
            area = largo*ancho;
            cout << "El area del circulo es: " << area << endl;
        }
};

class Triangulo: public Figura{
    private:
        const double pi = 3.14;
        double area;
        double base;
        double altura;
    public:
        Triangulo(double b, double a) : base(b), altura(a){}
        void calcularArea() override{
            area = (base*altura)/2;
            cout << "El area del circulo es: " << area << endl;
        }
};

int main(){
    Figura* array_figuras[10];
    Circulo *circulito = new Circulo(2.3);
    Rectangulo *rectangulito = new Rectangulo(5,13);
    Triangulo *triangulito = new Triangulo(15,20);

    array_figuras[0] = circulito;
    array_figuras[1] = rectangulito;
    array_figuras[2] = triangulito;
    
    for (int i = 0; i < 3; i++) {
        array_figuras[i]->calcularArea();
    }
}
