
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Empleado {
private:
    string nombre;
    int edad;
    string direccion;
public:
 Empleado(string nombre, int edad, string direccion){
    this->nombre = nombre;
    this->edad = edad;
    this->direccion = direccion;
 }
 void mostrarInformacionPersonal(){
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Dirección: " << direccion << endl;
 }
};
class Salario {
private:
    double salarioBase;
    double bonificaciones;
public:
 Salario(double salarioBase, double bonificaciones){
    this->salarioBase = salarioBase;
    this->bonificaciones = bonificaciones;
 }
 double calcularSalarioTotal(){
    return salarioBase + bonificaciones;
 }
};
class Proyecto{
private:
    string nombreProyecto;
    string descripcion;
public:
 Proyecto(string nombreProyecto, string descripcion){
    this->nombreProyecto = nombreProyecto;
    this->descripcion = descripcion;
 }
 void mostrarInformacionProyecto(){
    cout << "Nombre del proyecto: " << nombreProyecto << endl;
    cout << "Descripción: " << descripcion << endl;
 }
};

int main(){
 Empleado emp1("Juan Perez", 25, "Av. Puente Chilina 123");
 emp1.mostrarInformacionPersonal();
 
 Salario sal1(1000, 200);
 cout << "Salario total: $" << sal1.calcularSalarioTotal() << endl;
 
 vector<Proyecto> proyectos;
 proyectos.push_back(Proyecto("Proyecto 1", "Desarrollo de software"));
 proyectos.push_back(Proyecto("Proyecto 2", "Implementación de redes"));
 
 for (Proyecto p : proyectos)
 {
    p.mostrarInformacionProyecto();
 }




 return 0;
}