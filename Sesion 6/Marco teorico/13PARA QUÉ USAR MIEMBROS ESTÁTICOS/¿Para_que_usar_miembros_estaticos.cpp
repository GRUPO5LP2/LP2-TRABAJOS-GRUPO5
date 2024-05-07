#include <iostream>
using namespace std;

class Contador {
private:
    static int contadorTotal;
    int id;

public:
    Contador() {
        contadorTotal++;
        id = contadorTotal;
    }

    static int getTotalContadores() {
        return contadorTotal;
    }

    int getId() const {
        return id;
    }
};


int Contador::contadorTotal = 0;

int main() {
    Contador c1;
    Contador c2;
    Contador c3;

    cout << "Total de contadores creados: " << Contador::getTotalContadores() << endl;
    cout << "ID de c1: " << c1.getId() << endl;
    cout << "ID de c2: " << c2.getId() << endl;
    cout << "ID de c3: " << c3.getId() << endl;

    return 0;
}