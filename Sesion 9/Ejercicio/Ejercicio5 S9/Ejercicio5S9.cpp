#include <iostream>
using namespace std;

//EJEMPLO DE CLASE ABSTRACTA
class Producto {
protected:
    string nombre;
    float precio;
    int cantidad;

public:
    Producto(string n, float p, int c) : nombre(n), precio(p), cantidad(c) {}

    virtual float Valor() {
        return precio * cantidad;
    }

    virtual void aplicarDescuento(float porcentaje_descuento) {
        precio -= precio * (porcentaje_descuento / 100);
    }
};

class ProductoElectronico : public Producto {
private:
    int garantia;

public:
    ProductoElectronico(string n, float p, int c, int g) : Producto(n, p, c), garantia(g) {}

    float Valor() override {
        return precio * cantidad * (1 + garantia * 0.05); 
    }
};

class ProductoRopa : public Producto {
private:
    string talla;

public:
    ProductoRopa(string n, float p, int c, string t) : Producto(n, p, c), talla(t) {}
};

class ProductoAlimento : public Producto {
private:
    string fecha_vencimiento;

public:
    ProductoAlimento(string n, float p, int c, string fv) : Producto(n, p, c), fecha_vencimiento(fv) {}
};

int main() {
    int const maximo = 3;
    Producto* inventario[maximo];

    ProductoElectronico* electronico = new ProductoElectronico("Arduino", 60, 2, 1);
    ProductoRopa* ropita = new ProductoRopa("Camiseta", 250, 17, "S");
    ProductoAlimento* comida = new ProductoAlimento("Leche", 4, 50, "2030-02-17");

    inventario[0] = electronico;
    inventario[1] = ropita;
    inventario[2] = comida;

    float valorTOTAL = 0;
    for (int i = 0; i < maximo; ++i) {
        valorTOTAL += inventario[i]->Valor();
    }

    cout << "Valor total del inventario: " << valorTOTAL << endl;

    for (int i = 0; i < maximo; ++i) {
        inventario[i]->aplicarDescuento(10);
    }

    float valorTOTALDSCTO = 0;
    for (int i = 0; i < maximo; ++i) {
        valorTOTALDSCTO += inventario[i]->Valor();
    }

    cout << "Valor total del inventario con descuento: " << valorTOTALDSCTO << endl;


    return 0;
}
