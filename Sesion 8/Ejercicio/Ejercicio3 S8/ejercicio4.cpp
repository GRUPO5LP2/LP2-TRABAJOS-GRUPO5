#include <iostream>
using namespace std;

class Empleado{
    public:
        virtual void calcularSalario() const = 0;
};

class EmpleadoTiempoCompleto : public Empleado{
    private:
        string nombre;
        int edad;
    public:
        EmpleadoTiempoCompleto(string n, int e) : Empleado(){
            this->nombre = n;
            this->edad = e;
        }
        void calcularSalario() const override{
            cout << "El salario del empleado " << nombre << " tiene un salario de tiempo completo de: S/.2005" << endl; 
        }
};

class EmpleadoMedioTiempo : public Empleado{
    private:
        string nombre;
        int edad;
    public:
        EmpleadoMedioTiempo(string n, int e) : Empleado(){
            this->nombre = n;
            this->edad = e;
        }
        void calcularSalario() const override{
            cout << "El salario del empleado " << nombre << " tiene un salario de medio tiempo de: S/.1002.5" << endl; 
        }
};

int main(){
    int edad, opcion;
    string nombre;
    while (true) {
        cout << "Seleccione que acción desea tener con el Reproductor:" << endl;
        cout << "1. Crear empleado tiempo completo" << endl;
        cout << "2. Crear empleado medio tiempo" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige tu opción: ";
        cin >> opcion;
        if (opcion == 3) {
            return 0;
        }
        if (opcion == 1) {
            cout << "Ingrese su nombre: ";
            cin >> nombre;
            cout << "Ingrese su edad: ";
            cin >> edad;
            EmpleadoTiempoCompleto empleadoTC1(nombre, edad);
            empleadoTC1.calcularSalario();
        } else if (opcion == 2) {
            cout << "Ingrese su nombre: ";
            cin >> nombre;
            cout << "Ingrese su edad: ";
            cin >> edad;
            EmpleadoMedioTiempo empleadoMT1(nombre, edad);
            empleadoMT1.calcularSalario();
        }
    }
}