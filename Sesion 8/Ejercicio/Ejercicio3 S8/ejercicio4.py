class Empleado:
    def calcular_salario(self):
        pass

class EmpleadoTiempoCompleto(Empleado):
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def calcular_salario(self):
        print(f"El salario del empleado {self.nombre} tiene un salario de tiempo completo de: S/.2005")

class EmpleadoMedioTiempo(Empleado):
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def calcular_salario(self):
        print(f"El salario del empleado {self.nombre} tiene un salario de medio tiempo de: S/.1002.5")

while True:
    print("Seleccione qué acción desea tener con el Empleado:")
    print("1. Crear empleado tiempo completo")
    print("2. Crear empleado medio tiempo")
    print("3. Salir")
    opcion = int(input("Elige tu opción: "))

    if opcion == 3:
        break
    elif opcion == 1:
        nombre = input("Ingrese su nombre: ")
        edad = int(input("Ingrese su edad: "))
        empleado_tc = EmpleadoTiempoCompleto(nombre, edad)
        empleado_tc.calcular_salario()
    elif opcion == 2:
        nombre = input("Ingrese su nombre: ")
        edad = int(input("Ingrese su edad: "))
        empleado_mt = EmpleadoMedioTiempo(nombre, edad)
        empleado_mt.calcular_salario()
