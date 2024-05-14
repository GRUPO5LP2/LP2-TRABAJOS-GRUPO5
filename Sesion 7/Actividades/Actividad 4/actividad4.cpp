#include <iostream>
using namespace std;

/// g) Utilizar la herencia pública para heredar los atributos y métodos de la clase base en la clase derivada.
/// Herencia pública

class ClaseBase1 {
public:
    int atributoPulico;
    void metodoPublico() {
        cout << "Soy un metodo publico";
    }
};

class ClaseDerivada1 : public ClaseBase1 {
    // La claseDerivada hereda los atributos y métodos públicos de la claseBase1
};

/// h) Utilizar la herencia protegida para heredar los atributos protegidos de la clase base en la clase derivada.
/// Herencia protegida

class ClaseBase2 {
protected:
    int atributoProtegido;
};

class ClaseDerivada2 : protected ClaseBase2 {
    // La claseDerivada2 hereda los atributos protegidos de la claseBase2
};

/// i) Utilizar la herencia privada para ocultar los atributos y métodos de la clase base en la clase derivada.
/// Herencia privada

class ClaseBase3 {
private:
    int atributoPrivado;
    void metodoPrivado() {
        cout << "Soy un metodo privado";
    }
};

class ClaseDerivada3 : private ClaseBase3 {
    // La claseDerivada3 hereda los atributos y métodos privados de la claseBase3
};

int main() {
    /// Herencia pública
    ClaseDerivada1 obj1;
    obj1.atributoPulico = 10;       // Acceso a atributo público
    obj1.metodoPublico();           // Llamada a método público
    /// Herencia protegida
    ClaseDerivada2 obj2;
    obj2.atributoProtegido = 10;    // Error: el atributo protegido no es accesible desde fuera de la jerarquía de herencia
    /// Herencia privada
    ClaseDerivada3 obj3;
    obj3.atributoPrivado = 10;       // Error: el atributo privado no es accesible desde fuera de la clase derivada
    obj3.metodoPrivado();           // Error: el método privado no es accesible desde fuera de la clase derivada
    return 0;
}
