import os;
class Empleado:
    def __init__(self, nombre, edad, DNI, puesto):
        self.nombre = nombre
        self.edad = edad
        self.DNI = DNI
        self.puesto = puesto

    def calcular_salario(self):
        pass

class Asalariados(Empleado):
    def __init__(self, nombre, edad, DNI, puesto, salario):
        super().__init__(nombre, edad, DNI, puesto)
        self.salario = salario

    def calcular_salario(self):
        return self.salario

class PorHora(Empleado):
    def __init__(self, nombre, edad, DNI, puesto, horas, pagoxhora):
        super().__init__(nombre, edad, DNI, puesto)
        self.horas = horas
        self.pagoxhora = pagoxhora

    def calcular_salario(self):
        return self.horas * self.pagoxhora

class Comisionistas(Empleado):
    def __init__(self, nombre, edad, DNI, puesto, ventas, comision):
        super().__init__(nombre, edad, DNI, puesto)
        self.ventas = ventas
        self.comision = comision

    def calcular_salario(self):
        return self.ventas * self.comision

def menu():
    print("====== MENU EMPLEADOS ======")
    print("1. Crear empleado Asalariado")
    print("2. Crear empleado PorHora")
    print("3. Crear empleado Comisionistas")
    print("4. Salir")
    return int(input("Ingresa tu opción: "))

def pausa_y_limpiar():
    input("Presiona Enter para continuar...")
    if os.name == 'nt':
        os.system('cls')  # Limpiar consola en Windows
    else:
        os.system('clear')  # Limpiar consola en Unix/Linux

def main():
    cont = 0
    array_empleados = []

    while True:
        opcion = menu()
        if opcion == 1:
            nombre = input("Ingrese el nombre del empleado Asalariado: ")
            edad = int(input("Ingrese la edad del empleado Asalariado: "))
            DNI = int(input("Ingrese el DNI del empleado Asalariado: "))
            puesto = input("Ingrese el puesto de trabajo del empleado Asalariado: ")
            salario = float(input("Ingrese el salario del empleado Asalariado: "))
            array_empleados[cont] = Asalariados(nombre, edad, DNI, puesto, salario)
            decision = input(f"¿Deseas saber el sueldo del empleado {nombre}? (SI/NO): ")
            if decision.upper() == "SI":
                print(f"El salario del empleado {nombre} es: {array_empleados[cont].calcular_salario()} soles.")
            cont += 1
            pausa_y_limpiar()
        elif opcion == 2:
            nombre = input("Ingrese el nombre del empleado PorHora: ")
            edad = int(input("Ingrese la edad del empleado PorHora: "))
            DNI = int(input("Ingrese el DNI del empleado PorHora: "))
            puesto = input("Ingrese el puesto de trabajo del empleado PorHora: ")
            horas = int(input("Ingrese las horas de trabajo del empleado PorHora: "))
            pagoxhora = float(input("Ingrese el pago por hora del empleado PorHora: "))
            array_empleados[cont] = PorHora(nombre, edad, DNI, puesto, horas, pagoxhora)
            decision = input(f"¿Deseas saber el sueldo del empleado {nombre}? (SI/NO): ")
            if decision.upper() == "SI":
                print(f"El salario del empleado {nombre} es: {array_empleados[cont].calcular_salario()} soles.")
            cont += 1
            pausa_y_limpiar()
        elif opcion == 3:
            nombre = input("Ingrese el nombre del empleado Comisionista: ")
            edad = int(input("Ingrese la edad del empleado Comisionista: "))
            DNI = int(input("Ingrese el DNI del empleado Comisionista: "))
            puesto = input("Ingrese el puesto de trabajo del empleado Comisionista: ")
            comision = float(input("Ingrese la tasa de comisión del empleado Comisionista: "))
            ventas = float(input("Ingrese el total de ventas del empleado Comisionista (EN DINERO): "))
            array_empleados[cont] = Comisionistas(nombre, edad, DNI, puesto, ventas, comision)
            decision = input(f"¿Deseas saber el sueldo del empleado {nombre}? (SI/NO): ")
            if decision.upper() == "SI":
                print(f"El salario del empleado {nombre} es: {array_empleados[cont].calcular_salario()} soles.")
            cont += 1
            pausa_y_limpiar()
        else:
            return


main()