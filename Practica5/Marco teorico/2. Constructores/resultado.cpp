#include <iostream>
#include "claseejemplo.h"
#include "otraclaseejemplo.h"

using namespace std;

int main()
{
    ClaseEjemplo objetoUno;
    ClaseEjemplo objetoDos(4, 'e');
    OtraClaseEjemplo objetoTres;

    cout << "objetoUno: " << endl;
    objetoUno.mostrar();

    cout << "objetoDos: " << endl;
    objetoDos.mostrar();

    cout << "objetoTres: " << endl;
    objetoTres.mostrar();

    system("pause");
    return 0;
}
