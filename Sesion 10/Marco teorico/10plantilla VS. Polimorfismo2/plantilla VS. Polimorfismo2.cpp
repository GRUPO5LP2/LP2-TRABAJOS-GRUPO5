#include <iostream>
using namespace std;

class Forma {
public:
    virtual void dibujar() const {
        cout << "Dibujar forma genérica" << endl;
    }
    virtual ~Forma() = default;
};

class Circulo : public Forma {
public:
    void dibujar() const override {
        cout << "Dibujar círculo" << endl;
    }
};


class Cuadrado : public Forma {
public:
    void dibujar() const override {
        cout << "Dibujar cuadrado" << endl;
    }
};

void dibujarForma(const Forma& forma) {
    forma.dibujar();
}

int main() {
    Circulo circulo;
    Cuadrado cuadrado;

    dibujarForma(circulo);
    dibujarForma(cuadrado);

    return 0;
}
