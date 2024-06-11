#include <iostream>
using namespace std;

class Animales {
public:
    virtual void Comer() = 0;
    virtual void Dormir() = 0;
    virtual void Moverse() = 0;
    virtual void Simular() {
        Comer();
        Dormir();
        Moverse();
    }
};

class Mamifero : public Animales {
public:
    void Comer() override {
        cout << "El mamifero esta comiendo." << endl;
    }
    void Dormir() override {
        cout << "El mamifero esta durmiendo." << endl;
    }
    void Moverse() override {
        cout << "El mamifero esta corriendo." << endl;
    }
};

class Ave : public Animales {
public:
    void Comer() override {
        cout << "El ave esta picoteando." << endl;
    }
    void Dormir() override {
        cout << "El ave esta durmiendo en su nido." << endl;
    }
    void Moverse() override {
        cout << "El ave esta volando." << endl;
    }
};

class Reptil : public Animales {
public:
    void Comer() override {
        cout << "El reptil esta cazando." << endl;
    }
    void Dormir() override {
        cout << "El reptil esta durmiendo bajo una roca." << endl;
    }
    void Moverse() override {
        cout << "El reptil esta reptando." << endl;
    }
};

class Anfibios : public Animales {
public:
    void Comer() override {
        cout << "El anfibio esta comiendo." << endl;
    }
    void Dormir() override {
        cout << "El anfibio esta durmiendo." << endl;
    }
    void Moverse() override {
        cout << "El anfibio esta desplazandose." << endl;
    }
};

// Funcion para simular los comportamientos
void simularComportamientos(Animales* array_animales[], int tamanio) {
    for (int i = 0; i < tamanio; ++i) {
        array_animales[i]->Simular();
        cout << endl;
    }
}

int main() {
    Animales* array_animales[4];

    array_animales[0] = new Mamifero();
    array_animales[1] = new Ave();
    array_animales[2] = new Reptil();
    array_animales[3] = new Anfibios();

    simularComportamientos(array_animales, 4);

    return 0;
}
