#include <iostream>
using namespace std;

class Figuras
{
public:
    virtual double Calcular_Area() = 0;
    virtual double Calcular_Perimetro() = 0;
    virtual void Mostrar_Figura() = 0;
};
class Circulo : public Figuras
{
private:
    double const pi = 3.1416;
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double Calcular_Area() override {
        return pi * (radio * radio);
    }
    double Calcular_Perimetro() override {
        return (2 * pi) * radio;
    }
    void Mostrar_Figura() override {
        cout << "\nLa Figura es un Circulo" <<
        "\nRadio: " << radio <<
        "\nArea: " << Calcular_Area() <<
        "\nPerimetro: " << Calcular_Perimetro() << endl;
    }
};
class Rectangulo : Figuras
{
private:
    double base;
    double altura;
public:
    Rectangulo(double b, double a) : base(b), altura(a) {}

    double Calcular_Area() override {
        return base * altura;
    }
    double Calcular_Perimetro() override {
        return 2 * (base + altura);
    }

    void Mostrar_Figura() override {
        cout << "\nLa Figura es un Rectangulo" <<
        "\nBase: " << base <<
        "\nAltura: " << altura <<
        "\nArea: " << Calcular_Area() <<
        "\nPerimetro: " << Calcular_Perimetro() << endl;
    }

};
class Triangulo : Figuras
{
private:
    double base;
    double altura;
public:
    Triangulo(double b, double a) : base(b), altura(a) {}

    double Calcular_Area() override {
        return (base * altura) / 2;
    }
    void Mostrar_Figura() override {
        cout << "\nLa Figura es un Triangulo" <<
        "\nBase: " << base <<
        "\nAltura: " << altura <<
        "\nArea: " << Calcular_Area() << endl;
    }
    double Calcular_Perimetro() override {
        return 3 * base; //se asumira que es siempre un triangulo equilatero
    }
};

int main()
{
    Circulo circulo1(3.7);
    Rectangulo rectangulo1(5,7);
    Triangulo triangulo1(8,7);

    circulo1.Mostrar_Figura();
    rectangulo1.Mostrar_Figura();
    triangulo1.Mostrar_Figura();
}
