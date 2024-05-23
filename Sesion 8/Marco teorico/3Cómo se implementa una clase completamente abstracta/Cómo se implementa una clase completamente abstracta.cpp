#include <iostream>
#include <cmath>
using namespace std;


// Clase completamente abstracta
class Figura {
    public:


        virtual double area() const = 0;
        virtual double perimetro() const = 0;


        // Destructor virtual
        virtual ~Figura() {}
};


// Subclase concreta que extiende la clase abstracta
class Circulo : public Figura {
    private:
        double radio;


    public:
        Circulo(double r) : radio(r) {}


        // Implementación del método abstracto 'area'
        double area() const override {
            return M_PI * radio * radio;
        }


        // Implementación del método abstracto 'perimetro'
        double perimetro() const override {
            return 2 * M_PI * radio;
        }
};


// Subclase concreta que extiende la clase abstracta
class Rectangulo : public Figura {
    private:
        double ancho;
        double alto;


    public:
        Rectangulo(double a, double h) : ancho(a), alto(h) {}


        // Implementación del método abstracto 'area'
        double area() const override {
            return ancho * alto;
        }


        // Implementación del método abstracto 'perimetro'
        double perimetro() const override {
            return 2 * (ancho + alto);
        }
};
