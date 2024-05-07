#include <iostream>
#include <vector>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    vector<double> notas;

public:

    Estudiante(string nombre, int edad, vector<double> notas) : nombre(nombre), edad(edad), notas(notas) {}

    double calcularPromedio() const {
        double suma = 0;
        for (double nota : notas) {
            suma += nota;
        }
        return suma / notas.size();
    }

    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }
};

void ordenarPorPromedio(vector<Estudiante>& estudiantes) {
    for (size_t i = 0; i < estudiantes.size(); ++i) {       //size_t sirve para indexar vectores (en general estructuras de datos)
        for (size_t j = i + 1; j < estudiantes.size(); ++j) {
            if (estudiantes[j].calcularPromedio() > estudiantes[i].calcularPromedio()) {
                swap(estudiantes[i], estudiantes[j]);       //Si estudiante j es mayor cambia el valor esto para obtener el mayor promedio
            }
        }
    }
}

int main()
{
    vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("Melgar", 20, {13, 12, 15}));
    estudiantes.push_back(Estudiante("Tilin", 22, {19, 20, 16}));
    estudiantes.push_back(Estudiante("Alianza Lima", 21, {15, 17, 14}));

    ordenarPorPromedio(estudiantes);
    for(int i = 0; i < 3; i++)
    {
        cout << "Puesto Numero " << i + 1 << " de " << estudiantes[i].getNombre() << endl;
        cout << "Edad: " << estudiantes[i].getEdad() << endl;
        cout << "Notas: " << estudiantes[i].calcularPromedio()  << "\n" << endl;
    }

    return 0;
}
