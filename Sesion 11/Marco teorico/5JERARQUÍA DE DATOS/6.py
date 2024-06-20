class Empleado:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def mostrar_informacion(self):
        print(f"Nombre: {self.nombre}, Edad: {self.edad}")

class Gerente(Empleado):
    def __init__(self, nombre, edad, numero_de_empleados):
        super().__init__(nombre, edad)
        self.numero_de_empleados = numero_de_empleados

    def mostrar_informacion(self):
        super().mostrar_informacion()
        print(f"Número de empleados a cargo: {self.numero_de_empleados}")

class Ingeniero(Empleado):
    def __init__(self, nombre, edad, especialidad):
        super().__init__(nombre, edad)
        self.especialidad = especialidad

    def mostrar_informacion(self):
        super().mostrar_informacion()
        print(f"Especialidad: {self.especialidad}")

empleado = Empleado("Juan Perez", 30)
gerente = Gerente("Maria Gomez", 45, 10)
ingeniero = Ingeniero("Carlos Ruiz", 35, "Software")

empleados = [empleado, gerente, ingeniero]

for emp in empleados:
    emp.mostrar_informacion()
    print()

