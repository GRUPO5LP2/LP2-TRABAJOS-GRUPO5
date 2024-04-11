import math
class Empleado:
    def __init__(self, nombre, edad, direccion):
        self.nombre = nombre
        self.edad = edad
        self.direccion = direccion

    def mostrarInformacionPersonal(self):
        print(f"Nombre: {self.nombre}")
        print(f"Edad: {self.edad}")
        print(f"Dirección: {self.direccion}")

class Salario:
    def __init__(self, salarioBase, bonificaciones):
        self.salarioBase = salarioBase
        self.bonificaciones = bonificaciones

    def calcularSalarioTotal(self):
        return self.salarioBase + self.bonificaciones

class Proyecto:
    def __init__(self, nombreProyecto, descripcion):
        self.nombreProyecto = nombreProyecto
        self.descripcion = descripcion

    def mostrarInformacionProyecto(self):
        print(f"Nombre del proyecto: {self.nombreProyecto}")
        print(f"Descripción: {self.descripcion}")


emp1 = Empleado("Juan Perez", 25, "Av. Puente Chilina 123")
emp1.mostrarInformacionPersonal()

sal1 = Salario(1000, 200)
print(f"Salario total: ${sal1.calcularSalarioTotal()}")

proyectos = []
proyectos.append(Proyecto("Proyecto 1", "Desarrollo de software"))
proyectos.append(Proyecto("Proyecto 2", "Implementación de redes"))

for p in proyectos:
    p.mostrarInformacionProyecto()

