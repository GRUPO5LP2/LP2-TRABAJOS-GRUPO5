#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
	string nombre;
	int edad;
	
public:
	Persona(string nombre, int edad) : nombre(nombre), edad(edad) {
		cout << "Se creo a la persona : " << this->nombre << ", con: " << this->edad << " años" << endl;
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
		cout << "Se Creo la CASA en: " << this->calle << ", con el número: " << this->numero << endl;
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
	
public:
	EstudianteUniversitario(string nombre, int edad, string universidad, string calle, int numero)
		: persona(nombre, edad), universidad(universidad), direccion(calle, numero) {
		cout << "Nuevo estudiante universitario nombre: " << this->persona.getNombre() << ", edad:"
			<< this->persona.getEdad() << " años, su uni es: " << this->universidad << endl;
	}
	
	~EstudianteUniversitario() {
		cout << "Estudiante universitario: " << this->persona.getNombre() << ", Abandono la uni: " << this->universidad << endl;
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
	
};

int main() {
	EstudianteUniversitario estudiante("Iván Reaño", 20, "Universidad Sideral Carrión", "Calle Los Dibujitos", 17);
	cout << "Nombre: " << estudiante.getNombrePersona() << endl;
	cout << "Edad: " << estudiante.getEdadPersona() << endl;
	cout << "Universidad: " << estudiante.getUniversidad() << endl;
	cout << "Dirección: " << estudiante.getDireccion().getCalle() << " " << estudiante.getDireccion().getNumero() << endl;
	
	return 0;
}
