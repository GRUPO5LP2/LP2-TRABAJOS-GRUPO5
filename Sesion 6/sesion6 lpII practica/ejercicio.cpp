#include <iostream>
#include <string>
#include <vector>

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

    bool operator<(const Alumno& otro) const {
        return promedio < otro.promedio;
    }
};

class Grupo {    
private:
    int cantidad;
    vector<Alumno> alumnos;
    
public:
    Grupo(int cantidad) : cantidad(cantidad), alumnos() {}
    
    void agregar_alumno(string nombre, int edad, float promedio) {
        if (alumnos.size() < cantidad) {
            alumnos.push_back(Alumno(nombre, edad, promedio));
            cout << "Alumno " << nombre << " agregado al grupo." << endl;
        } else {
            cout << "El grupo está lleno, no se pudo agregar al alumno " << nombre << "." << endl;
        }
    }
    
    void ordena_por_promedios() {
        cout << "Antes de ordenar" << endl;
        for (int i = 0; i < alumnos.size(); i++) {
            cout << "Índice: " << i+1 << ", Nombre: " << alumnos[i].getNombre() << ", Promedio: " << alumnos[i].getPromedio() << endl;
        }
        
        for (int i = 0; i < alumnos.size(); i++) {
            for (int j = 0; j < alumnos.size()-i-1; j++) {
                if (alumnos[j].getPromedio() > alumnos[j+1].getPromedio()) {
                    Alumno temp = alumnos[j];
                    alumnos[j] = alumnos[j+1];
                    alumnos[j+1] = temp;
                }
            }
        }
        
        cout << "Después de ordenar" << endl;
        for (int i = 0; i < alumnos.size(); i++) {
            cout << "Índice: " << i+1 << ", Nombre: " << alumnos[i].getNombre() << ", Promedio: " << alumnos[i].getPromedio() << endl;
    }
    }

    
    void promedio_grupo() {
        float suma = 0;
        for (int i = 0; i < alumnos.size(); ++i) {
            suma += alumnos[i].getPromedio();
        }
        cout << "El promedio de los promedios de los alumnos es: " << suma / cantidad << endl;
    }
    
    void mayor_promedio() {
        float mayor_promedio = alumnos[0].getPromedio();
        for (int i = 1; i < alumnos.size(); i++) {
            if (alumnos[i].getPromedio() > mayor_promedio) {
                mayor_promedio = alumnos[i].getPromedio();
            }
        }
        cout << "El mayor promedio de todos los promedios es: " << mayor_promedio << endl;
    }
};

int main() {
    Grupo grupo(5);
    grupo.agregar_alumno("Mauricio", 15, 15.5);
    grupo.agregar_alumno("Ivan", 25, 16);
    grupo.agregar_alumno("Oscar", 18, 0.5);
    grupo.agregar_alumno("Renzo", 19, 18);
    grupo.agregar_alumno("Sebastian", 19, 11.5);
    grupo.agregar_alumno("Paolo", 19, 20);

    grupo.promedio_grupo();
    grupo.mayor_promedio();
    grupo.ordena_por_promedios();

    return 0;
}
