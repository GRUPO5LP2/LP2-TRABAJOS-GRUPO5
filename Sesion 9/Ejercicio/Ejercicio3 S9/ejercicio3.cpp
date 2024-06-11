#include <iostream>
using namespace std;

class Empleado {
    private:
        string nombre;
        int edad;
        int DNI;
        string puesto;
    public:
        Empleado(string n, int e, int D, string p) : nombre(n), edad(e), DNI(D), puesto(p) {}
        virtual double calcularSalario() = 0;
};

class Asalariados : public Empleado {
    private:
        double salario;
    public:
        Asalariados(string n, int e, int D, string p, double s) : Empleado(n, e, D, p), salario(s) {}
        double calcularSalario() override {
            return salario;
        }
};

class PorHora : public Empleado {
    private:
        int horas;
        double pagoxhora;
    public:
        PorHora(string n, int e, int D, string p, int h, double pxh) : Empleado(n, e, D, p), horas(h), pagoxhora(pxh) {}
        double calcularSalario() override {
            return horas * pagoxhora;
        }
};

class Comisionistas : public Empleado {
    private:
        double ventas;
        double comision;
    public:
        Comisionistas(string n, int e, int D, string p, double v, double c) : Empleado(n, e, D, p), ventas(v), comision(c) {}
        double calcularSalario() override {
            return ventas * comision;
        }
};

int menu() {
    int opc;
    cout << "====== MENU EMPLEADOS ======" << endl;
    cout << "1. Crear empleado Asalariado" << endl;
    cout << "2. Crear empleado PorHora" << endl;
    cout << "3. Crear empleado Comisionistas" << endl;
    cout << "4. Salir " << endl;
    cout << "Ingresa tu opción: ";
    cin >> opc;
    return opc;
}

void pausaYLimpiar() {
    cout << "Presiona Enter para continuar...";
    cin.ignore().get(); // Pausa
    #ifdef _WIN32
        system("CLS"); // Limpiar consola en Windows
    #else
        system("clear"); // Limpiar consola en Unix/Linux
    #endif
}

int main() {
    int opcion, edad, DNI, horas;
    string nombre, puesto, decision;
    double salario, pagoxhora, ventas, comision;
    int cont = 0;
    Empleado* array_empleados[100];
    
    while (true) {
        opcion = menu();
        if (opcion == 1) {
            cout << "Ingrese el nombre del empleado Asalariado: ";
            cin >> nombre;
            cout << "Ingrese la edad del empleado Asalariado: ";
            cin >> edad;
            cout << "Ingrese el DNI del empleado Asalariado: ";
            cin >> DNI;
            cout << "Ingrese el puesto de trabajo del empleado Asalariado: ";
            cin >> puesto;
            cout << "Ingrese el salario del empleado Asalariado: ";
            cin >> salario;
            array_empleados[cont] = new Asalariados(nombre, edad, DNI, puesto, salario);
            cout << "¿Deseas saber el sueldo del empleado " << nombre << "? (SI/NO): ";
            cin >> decision;
            if (decision == "SI") {
                cout << "El salario del empleado " << nombre << " es: " << array_empleados[cont]->calcularSalario() << " soles." << endl;
            }
            cont += 1;
            pausaYLimpiar();
        } else if (opcion == 2) {
            cout << "Ingrese el nombre del empleado PorHora: ";
            cin >> nombre;
            cout << "Ingrese la edad del empleado PorHora: ";
            cin >> edad;
            cout << "Ingrese el DNI del empleado PorHora: ";
            cin >> DNI;
            cout << "Ingrese el puesto de trabajo del empleado PorHora: ";
            cin >> puesto;
            cout << "Ingrese las horas de trabajo del empleado PorHora: ";
            cin >> horas;
            cout << "Ingrese el pago por hora del empleado PorHora: ";
            cin >> pagoxhora;
            array_empleados[cont] = new PorHora(nombre, edad, DNI, puesto, horas, pagoxhora);
            cout << "¿Deseas saber el sueldo del empleado " << nombre << "? (SI/NO): ";
            cin >> decision;
            if (decision == "SI") {
                cout << "El salario del empleado " << nombre << " es: " << array_empleados[cont]->calcularSalario() << " soles." << endl;
            }
            cont += 1;
            pausaYLimpiar();
        } else if (opcion == 3) {
            cout << "Ingrese el nombre del empleado Comisionista: ";
            cin >> nombre;
            cout << "Ingrese la edad del empleado Comisionista: ";
            cin >> edad;
            cout << "Ingrese el DNI del empleado Comisionista: ";
            cin >> DNI;
            cout << "Ingrese el puesto de trabajo del empleado Comisionista: ";
            cin >> puesto;
            cout << "Ingrese la tasa de comisión del empleado Comisionista: ";
            cin >> comision;
            cout << "Ingrese el total de ventas del empleado Comisionista (EN DINERO): ";
            cin >> ventas;
            array_empleados[cont] = new Comisionistas(nombre, edad, DNI, puesto, comision, ventas);
            cout << "¿Deseas saber el sueldo del empleado " << nombre << "? (SI/NO): ";
            cin >> decision;
            if (decision == "SI") {
                cout << "El salario del empleado " << nombre << " es: " << array_empleados[cont]->calcularSalario() << " soles." << endl;
            }
            cont += 1;
            pausaYLimpiar();
        } else {
            return 0;
        }
    }
}