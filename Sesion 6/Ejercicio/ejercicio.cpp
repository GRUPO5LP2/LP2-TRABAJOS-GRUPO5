#include <iostream>
#include <algorithm> 

using namespace std;

class Alumno {
public:
  string nombre;
  int edad;
  float promedio;

  Alumno(string _nombre, int _edad, float _promedio) : nombre(_nombre), edad(_edad), promedio(_promedio) {}

  bool operator<(const Alumno& otro) const {
    return promedio < otro.promedio;
  }

  friend ostream& operator<<(ostream& os, const Alumno& alumno) {
    os << "Nombre: " << alumno.nombre << endl;
    os << "Edad: " << alumno.edad << endl;
    os << "Promedio: " << alumno.promedio << endl;
    return os;
  }
};

class Grupo {
public:
  int cantidad;
  Alumno alumnos[100]; 

  Grupo(int _cantidad) : cantidad(_cantidad) {}

  void agregar_alumno(string nombre, int edad, float promedio) {
    if (alumnos[cantidad - 1].nombre == "") { 
      alumnos[cantidad - 1] = Alumno(nombre, edad, promedio);
      cout << "Alumno " << nombre << " agregado al grupo." << endl;
      cantidad++;
    } else {
      cout << "El grupo está lleno, no se pudo agregar al alumno " << nombre << "." << endl;
    }
  }

  void ordena_por_promedios() {
    sort(alumnos, alumnos + cantidad - 1); 
  }

  void promedio_grupo() {
    float suma = 0;
    for (int i = 0; i < cantidad - 1; i++) {
      suma += alumnos[i].promedio;
    }
    cout << "El promedio de los promedios de los alumnos es: " << suma / cantidad << endl;
  }

  void mayor_promedio() {
    float mayor = 0;
    for (int i = 0; i < cantidad - 1; i++) {
      if (alumnos[i].promedio > mayor) {
        mayor = alumnos[i].promedio;
      }
    }
    cout << "El mayor promedio de todos los promedios es: " << mayor << endl;
  }

  friend ostream& operator<<(ostream& os, const Grupo& grupo) {
    os << "Hay " << grupo.cantidad - 1 << " alumnos, estos son:" << endl;
    for (int i = 0; i < grupo.cantidad - 1; i++) {
      os << alumnos[i];
    }
    return os;
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
  cout << grupo;
  grupo.promedio_grupo();
  grupo.mayor_promedio();

  return 0;
}
