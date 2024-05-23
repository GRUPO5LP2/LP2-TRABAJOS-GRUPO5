#include <iostream>
#include <cmath>
using namespace std;

class Forma{
    public:
        virtual double calculoPerimetro() const = 0;
};

class Circulo: public Forma{
    private:
        double radio;
    public:
        Circulo(float r): Forma(){
            this->radio = r;
        }
        double calculoPerimetro() const override{
            return 2 * M_PI * radio;
        }
};

class Rectangulo: public Forma{
    private:
        double largo, ancho;
    public:
        Rectangulo(double l, double a): Forma(){
            this->largo = l;
            this->ancho = a;
        }
        double calculoPerimetro() const override{
            return 2*(largo+ancho);
        }
};

class Triangulo: public Forma{
    private:
        double lado1, lado2, lado3;
    public:
        Triangulo(double l1, double l2, double l3): Forma(){
            this->lado1 = l1;
            this->lado2 = l2;
            this->lado3 = l3;
        }
        double calculoPerimetro() const override{
            return lado1 + lado2 + lado3;
        }
};

int main() {
    while (true) {
        cout << "Seleccione una forma para calcular su perímetro:" << endl;
        cout << "1. Círculo" << endl;
        cout << "2. Rectángulo" << endl;
        cout << "3. Triángulo" << endl;
        cout << "4. Salir" << endl;
        int opcion;
        cout << "Elige tu opción: ";
        cin >> opcion;
        double perimetro;
        if (opcion == 4) {
            return 0;
        }

        if (opcion == 1) {
            double radio;
            cout << "Ingrese el radio del círculo: ";
            cin >> radio;
            Circulo circulo1(radio);
            perimetro = circulo1.calculoPerimetro();
            cout << "El perimetro del círculo es: " << perimetro << endl;
        } else if (opcion == 2) {
            double largo, ancho;
            cout << "Ingrese el largo del rectángulo: ";
            cin >> largo;
            cout << "Ingrese el ancho del rectángulo: ";
            cin >> ancho;
            Rectangulo rectangulo1(largo, ancho);
            perimetro = rectangulo1.calculoPerimetro();
            cout << "El perimetro del rectángulo es: " << perimetro << endl;
        } else if (opcion == 3) {
            double lado1, lado2, lado3;
            cout << "Ingrese el primer lado del triángulo: ";
            cin >> lado1;
            cout << "Ingrese el segundo lado del triángulo: ";
            cin >> lado2;
            cout << "Ingrese el tercer lado del triángulo: ";
            cin >> lado3;
            Triangulo triangulo1(lado1, lado2, lado3);
            perimetro = triangulo1.calculoPerimetro();
            cout << "El perimetro del triángulo es: " << perimetro << endl;
        }
    }
}