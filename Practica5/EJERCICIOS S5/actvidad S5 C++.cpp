#include <iostream>
#include <string>
using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {
        cout << "Se creó a la persona: " << this->nombre << " con: " << this->edad << " años" << endl;
    }

    ~Persona() {
        cout << "Persona Borrada: " << this->nombre << endl;
    }

    string getNombre() const {
        return this->nombre;
    }

    int getEdad() const {
        return this->edad;
    }
};

class Direccion {
private:
    string calle;
    int numero;

public:
    Direccion(string calle, int numero) : calle(calle), numero(numero) {
        cout << "Se Creó la CASA en: " << this->calle << " con el número: " << this->numero << endl;
    }

    ~Direccion() {
        cout << "Casa demolida: " << this->calle << " " << this->numero << endl;
    }

    string getCalle() const {
        return this->calle;
    }

    int getNumero() const {
        return this->numero;
    }
};

class EstudianteUniversitario {
private:
    Persona persona;
    string universidad;
    Direccion direccion;
    string ciudad;

public:
    EstudianteUniversitario(string nombre, int edad, string universidad, string calle, int numero, string ciudad)
        : persona(nombre, edad), universidad(universidad), direccion(calle, numero), ciudad(ciudad) {
        if (this->ciudad == "") {
            cout << "Nuevo estudiante universitario nombre: " << this->persona.getNombre() << ", edad:"
                 << this->persona.getEdad() << " años, su uni es: " << this->universidad << " Dirección:"
                 << this->direccion.getCalle() << " " << this->direccion.getNumero() << endl;
        } else {
            cout << "Nuevo estudiante universitario nombre: " << this->persona.getNombre() << ", edad:"
                 << this->persona.getEdad() << " años, su uni es: " << this->universidad << " Dirección:"
                 << this->direccion.getCalle() << " " << this->direccion.getNumero() << " Ciudad:" << this->ciudad << endl;
        }
    }

    ~EstudianteUniversitario() {
        cout << "Estudiante universitario: " << this->persona.getNombre() << " Abandono la uni: " << this->universidad << endl;
    }

    string getNombrePersona() const {
        return this->persona.getNombre();
    }

    int getEdadPersona() const {
        return this->persona.getEdad();
    }

    string getUniversidad() const {
        return this->universidad;
    }

    const Direccion& getDireccion() const {
        return this->direccion;
    }

    string getCiudad() const {
        return this->ciudad;
    }

    void mostrarDatos() const {
        if (this->ciudad == "") {
            cout << "Nombre: " << this->persona.getNombre() << endl;
            cout << "Edad: " << this->persona.getEdad() << endl;
            cout << "Universidad: " << this->universidad << endl;
            cout << "Dirección: " << this->direccion.getCalle() << " " << this->direccion.getNumero() << endl;
        } else {
            cout << "Nombre: " << this->persona.getNombre() << endl;
            cout << "Edad: " << this->persona.getEdad() << endl;
            cout << "Universidad: " << this->universidad << endl;
            cout << "Dirección: " << this->direccion.getCalle() << " " << this->direccion.getNumero() << endl;
            cout << "Ciudad: " << this->ciudad << endl;
        }
    }
};

int menuPrincipal() {
    int opcion;
    cout << "1. Crear estudiante universitario" << endl;
    cout << "2. Crear estudiante universitario foraneo" << endl;
    cout << "3. Salir" << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;
    return opcion;
}

int menuUniversitarioLocal() {
    int opcion;
    cout << "1. Mostrar datos del universitario local" << endl;
    cout << "2. Salir y destruir universitario local" << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;
    return opcion;
}

int menuUniversitarioForaneo() {
    int opcion;
    cout << "1. Mostrar datos del universitario foraneo" << endl;
    cout << "2. Salir y destruir objeto universitario local" << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;
    return opcion;
}

int main() {
    string nombre, universidad, calle, ciudad;
    int edad, numero;

    while (true) {
        int opcion = menuPrincipal();
        if (opcion == 1) {
            cout << "Ingrese el nombre del estudiante: ";
            cin >> nombre;
            cout << "Ingrese la edad del estudiante: ";
            cin >> edad;
            cout << "Ingrese la universidad del estudiante: ";
            cin >> universidad;
            cout << "Ingrese la calle de la dirección del estudiante: ";
            cin >> calle;
            cout << "Ingrese el número de la dirección del estudiante: ";
            cin >> numero;
            EstudianteUniversitario estudiante(nombre, edad, universidad, calle, numero, "");
            while (true) {
                opcion = menuUniversitarioLocal();
                if (opcion == 1) {
                    estudiante.mostrarDatos();
                } else if (opcion == 2) {
                    break;
                } else {
                    cout << "Opción no válida" << endl;
                }
            }
        } else if (opcion == 2) {
            cout << "Ingrese el nombre del estudiante: ";
            cin >> nombre;
            cout << "Ingrese la edad del estudiante: ";
            cin >> edad;
            cout << "Ingrese la universidad del estudiante: ";
            cin >> universidad;
            cout << "Ingrese la calle de la dirección del estudiante: ";
            cin >> calle;
            cout << "Ingrese el número de la dirección del estudiante: ";
            cin >> numero;
            cout << "Ingrese la ciudad del estudiante: ";
            cin >> ciudad;
            EstudianteUniversitario estudiante(nombre, edad, universidad, calle, numero, ciudad);
            while (true) {
                opcion = menuUniversitarioForaneo();
                if (opcion == 1) {
                    estudiante.mostrarDatos();
                } else if (opcion == 2) {
                    break;
                } else {
                    cout << "Opción no válida" << endl;
                }
            }
        } else if (opcion == 3) {
            cout << "Saliendo del programa" << endl;
            break;
        } else {
            cout << "Opción no válida" << endl;
        }
    }

    return 0;
}
