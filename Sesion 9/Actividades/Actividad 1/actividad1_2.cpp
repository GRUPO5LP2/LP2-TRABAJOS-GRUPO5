#include <iostream>
using namespace std;

// Modifique la clase base Animal para que el método hacerSonido() sea virtual (utilizando la palabra clave virtual en C++).
class Animal
{
public:
    virtual void hacerSonido() {
        cout << "Sonido de Animal.mp4" << endl;
    }
};

// Repita los pasos anteriores. Observe que ahora se ejecuta el método de la clase
// derivada (Perro), ya que el enlace es tardío y se basa en el tipo real del objeto en tiempo de ejecución.
class Perro : public Animal
{
public:
    void hacerSonido() override {
        cout << "waos" << endl;
    }
};

int main()
{
    Animal *animal = new Perro();

    animal->hacerSonido();

    return 0;
}
