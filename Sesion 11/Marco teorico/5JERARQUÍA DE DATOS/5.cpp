#include <iostream>
#include <string>
using namespace std;


// Clase base Empleado
class Empleado {
public:
    Empleado(const string& nombre, int edad)
        : nombre(nombre), edad(edad) {}


    virtual void mostrarInformacion() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }


    virtual ~Empleado() {} // Destructor virtual para permitir la eliminación correcta de objetos derivados


protected:
    string nombre;
    int edad;
};


// Clase derivada Gerente
class Gerente : public Empleado {
public:
    Gerente(const string& nombre, int edad, int numeroDeEmpleados)
        : Empleado(nombre, edad), numeroDeEmpleados(numeroDeEmpleados) {}


    void mostrarInformacion() const override {
        Empleado::mostrarInformacion();
        cout << "Número de empleados a cargo: " << numeroDeEmpleados << endl;
    }


private:
    int numeroDeEmpleados;
};


// Clase derivada Ingeniero
class Ingeniero : public Empleado {
public:
    Ingeniero(const string& nombre, int edad, const string& especialidad)
        : Empleado(nombre, edad), especialidad(especialidad) {}


    void mostrarInformacion() const override {
        Empleado::mostrarInformacion();
        cout << "Especialidad: " << especialidad << endl;
    }


private:
    string especialidad;
};


int main() {
    Empleado empleado("Juan Perez", 30);
    Gerente gerente("Maria Gomez", 45, 10);
    Ingeniero ingeniero("Carlos Ruiz", 35, "Software");


    // Arreglo de punteros a Empleado para demostrar polimorfismo
    Empleado* empleados[] = { &empleado, &gerente, &ingeniero };


    // Mostrar información de cada empleado
    for (const auto& emp : empleados) {
        emp->mostrarInformacion();
        cout << endl;
    }


    return 0;
}
