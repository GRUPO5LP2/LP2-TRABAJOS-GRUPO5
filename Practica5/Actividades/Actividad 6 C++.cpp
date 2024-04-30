#include <iostream>
#include <vector>

using namespace std;

class Empleado {
private:
	string nombre;
	int salario;
public:
	Empleado(string nombre, int salario) : nombre(nombre), salario(salario) {}
	
	string obtenerNombre() const {
		return nombre;
	}
	
	int obtenerSalario() const {
		return salario;
	}
};

class Empresa {
private:
	vector<Empleado*> empleados; 
public:
	// Destructor
	~Empresa() {
		for (auto empleado : empleados) {
			delete empleado;
		}
	}
	
	void contratarEmpleado(Empleado* empleado) {
		empleados.push_back(empleado);
	}
	
	vector<Empleado*> obtenerEmpleados() const {
		return empleados;
	}
};

int main() {
	Empresa miEmpresa;
	
	miEmpresa.contratarEmpleado(new Empleado("Iván", 2100));
	miEmpresa.contratarEmpleado(new Empleado("Mauricio", 2000));
	
	vector<Empleado*> listaEmpleados = miEmpresa.obtenerEmpleados();
	
	cout << "Empleados de la empresa:" << endl;
	for (auto empleado : listaEmpleados) {
		cout << "Nombre: " << empleado->obtenerNombre() << ", Salario: S/." << empleado->obtenerSalario() << endl;
	}
	
	return 0;
}
