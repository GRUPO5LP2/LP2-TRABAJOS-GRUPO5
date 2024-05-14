#include <iostream>
using namespace std;

// Clase PADRE
class Persona {
public:
    string nombre;
    int edad;
    double salario;

protected:
    string email;

public:
    Persona(string nombre, int edad, double salario, string email) {
        this->nombre = nombre;
        this->edad = edad;
        this->salario = salario;
        this->email = email;
    }
};


// Clases HIJO
class Empleado : public Persona {
public:
    Empleado(string nombre, int edad, double salario, string email)
        : Persona(nombre, edad, salario, email) {}

    string getEmail() {
        return email;
    }
};

class Cliente : public Persona {
public:
    Cliente(string nombre, int edad, double salario, string email)
        : Persona(nombre, edad, salario, email) {}

    string getEmail() {
        return email;
    }
};

int main() {
    Empleado emp("Mauricio Lazo", 12, 100.50, "maurowo@gmail.com");
    Cliente cli("Sebastián Monteagudo", 50, 20.0, "sebitas123@gmail.com");

    cout << "Empleado: " << emp.nombre << ", Edad: " << emp.edad
         << ", Salario: " << emp.salario << ", Email: " << emp.getEmail() << endl;

    cout << "Cliente: " << cli.nombre << ", Edad: " << cli.edad
         << ", Salario: " << cli.salario << ", Email: " << cli.getEmail() << endl;

    return 0;
}