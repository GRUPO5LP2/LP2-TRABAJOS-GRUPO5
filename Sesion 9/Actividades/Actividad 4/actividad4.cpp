#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void hacerSonido() = 0;
};

class Perro : public Animal{
    public:
        void hacerSonido() override{
            cout << "Wau Wau" << endl;
        }
};

class Gato : public Animal{
    public:
        void hacerSonido() override{
            cout << "Miau" << endl;
        }
};

class Vaca : public Animal{
    public:
        void hacerSonido() override{
            cout << "Muuu" << endl;
        }
};

int main(){
    Animal* array_animales[10];
    Perro *perrito = new Perro();
    Gato *gatito = new Gato();
    Vaca *vaquita = new Vaca();

    array_animales[0] = perrito;
    array_animales[1] = gatito;
    array_animales[2] = vaquita;

    for (int i = 0; i < 3; i++) {
        array_animales[i]->hacerSonido();
    }
}