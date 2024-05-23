#include <iostream>
using namespace std;

// Declaración de la clase abstracta Figura
class Figura {
public:
    // Método virtual puro para calcular el área
    virtual float calcularArea() const = 0;
    // Destructor virtual para permitir la destrucción adecuada de las subclases
    virtual ~Figura() {}
};

// Ejemplo de una subclase que hereda de Figura
class Circulo : public Figura {
private:
    float radio;
public:
    // Constructor
    Circulo(float r) : radio(r) {}
    // Método para calcular el área del círculo
    float calcularArea() const override {
        return 3.14159 * radio * radio;
    }
};

int main() {
    // Ejemplo de uso
    Circulo circulo(5);
    cout << "Área del círculo: " << circulo.calcularArea() << endl;
    return 0;
}
