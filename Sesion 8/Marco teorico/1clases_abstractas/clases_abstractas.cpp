#include <iostream>
using namespace std;


class Animal {
    public:
        // Función virtual pura
        virtual void hacersonido() = 0;


        void comer() {
            cout << "Esta comiendo" << endl;
        }
};


class Perro : public Animal
{
    public:
        void hacersonido() override {
            cout << "Woof" << endl;
        }
};

int main() {
    //Animal a; // Esto dará un error: no se puede instanciar una clase abstracta
    //a.hacersonido(); // Los metodos virtuales no se pueden ejecutar
    Perro perro1;
    perro1.hacersonido();
    perro1.comer();
    return 0;
}
