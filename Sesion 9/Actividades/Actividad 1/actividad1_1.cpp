#include <iostream>
using namespace std;

//Cree una clase base Animal con un método hacerSonido().
class Animal
{
public:
    void hacerSonido() {
        cout << "Sonido de Animal.mp4" << endl; //El enlace temprano hace que se ejecute la clase base y no la clase derivada
    }
};

//Cree una clase derivada Perro que herede de Animal y redefina el método hacerSonido().
class Perro : public Animal
{
public:
    void hacerSonido() {
        cout << "Waos" << endl;
    }
};

// En la función main, cree un objeto Perro y asígnelo a una variable de tipo Animal.
int main()
{
    Animal animal;
    Perro perro1;
    animal = perro1;
    animal.hacerSonido(); // Llamando al método hacerSonido() a través de la variable de tipo Animal

    return 0;
}
