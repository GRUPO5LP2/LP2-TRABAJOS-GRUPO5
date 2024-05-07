#include <iostream>
#include <string>

using namespace std;

class Alumno {
private:
    string nombre;
    int edad;
    float promedio;
    
public:
    Alumno(string nombre, int edad, float promedio) : nombre(nombre), edad(edad), promedio(promedio) {}

    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }

    float getPromedio() const {
        return promedio;
    }

    bool operator<(const Alumno &otro) const {
        return promedio < otro.promedio;
    }

    void imprimir() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
    }
};

class Grupo{
private:
    int cantidad;
    Alumno *alumnos;
    int contador;
    
public:
    Grupo(int cantidad) : cantidad(cantidad), alumnos(new Alumno[cantidad]), contador(0) {}

    ~Grupo() {
        delete[] alumnos;
    }

    void agregarAlumno(string nombre, int edad, float promedio) {
        if (contador < cantidad) {
            alumnos[contador++] = Alumno(nombre, edad, promedio);
            cout << "Alumno " << nombre << " agregado al grupo." << endl;
        } else {
            cout << "El grupo está lleno, no se pudo agregar al alumno " << nombre << "." << endl;
        }
    }

    void ordenarPorPromedios() {
        for (int i = 0; i < contador - 1; ++i) {
            for (int j = 0; j < contador - i - 1; ++j) {
                if (alumnos[j + 1].getPromedio() < alumnos[j].getPromedio()) {
                    swap(alumnos[j], alumnos[j + 1]);
                }
            }
        }
    }

    void imprimirGrupo() const {
        cout << "Hay " << contador << " alumnos, estos son:" << endl;
        for (int i = 0; i < contador; ++i) {
            alumnos[i].imprimir();
        }
    }

    void promedioGrupo() const {
        float suma = 0;
        for (int i = 0; i < contador; ++i) {
            suma += alumnos[i].getPromedio();
        }
        cout << "El promedio de los promedios de los alumnos es: " << suma / contador << endl;
    }

    void mayorPromedio() const {
        float maxPromedio = 0;
        for (int i = 0; i < contador; ++i) {
            if (alumnos[i].getPromedio() > maxPromedio) {
                maxPromedio = alumnos[i].getPromedio();
            }
        }
        cout << "El mayor promedio de todos los promedios es: " << maxPromedio << endl;
    }
};

int main() {
    Grupo grupo(5);
    grupo.agregarAlumno("Mauricio", 15, 15.5);
    grupo.agregarAlumno("Ivan", 25, 16);
    grupo.agregarAlumno("Oscar", 18, 0.5);
    grupo.agregarAlumno("Renzo", 19, 18);
    grupo.agregarAlumno("Sebastian", 19, 11.5);
    grupo.agregarAlumno("Paolo", 19, 20);
    grupo.ordenarPorPromedios();
    grupo.imprimirGrupo();
    grupo.promedioGrupo();
    grupo.mayorPromedio();

    return 0;
}
