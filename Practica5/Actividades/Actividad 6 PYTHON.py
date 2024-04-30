class Empleado:
    def __init__(self, nombre, salario):
        self.nombre = nombre
        self.salario = salario

    def obtener_nombre(self):
        return self.nombre

    def obtener_salario(self):
        return self.salario


class Empresa:
    def __init__(self):
        self.empleados = []

    def contratar_empleado(self, empleado):
        self.empleados.append(empleado)

    def obtener_empleados(self):
        return self.empleados



mi_empresa = Empresa()

mi_empresa.contratar_empleado(Empleado("Juan", 3000))
mi_empresa.contratar_empleado(Empleado("María", 3500))

lista_empleados = mi_empresa.obtener_empleados()

print("Empleados de la empresa:")
for empleado in lista_empleados:
    print("Nombre:", empleado.obtener_nombre(), ", Salario: $", empleado.obtener_salario())
