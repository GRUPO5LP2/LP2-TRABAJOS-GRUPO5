#include <iostream>

using namespace std;

class Animal {
public:
    virtual string hacerSonido() {
        return "El animal hace un sonido.";
    }
};

// derivada oerro
class Perro : public Animal {
public:
    string hacerSonido() override {
        return "guau guau guau";
    }
};

// derivada gato
class Gato : public Animal {
public:
    string hacerSonido() override {
        return "miau miau grrrr";
    }
};

// derivada vaca
class Vaca : public Animal {
public:
    string hacerSonido() override {
        return "muuu muuuu";
    }
};

int main() {
    Animal* animales[] = { new Perro(), new Gato(), new Vaca() };

    for (Animal* animal : animales) {
        cout << animal->hacerSonido() << endl;
    }

    return 0;
}