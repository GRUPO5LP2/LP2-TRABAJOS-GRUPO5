class Estudiante:
    def __init__(self, nombre, edad, notas):
        self.nombre = nombre
        self.edad = edad
        self.notas = notas

    def calcularPromedio(self):
        return sum(self.notas) / len(self.notas)

def ordenarPorPromedio(estudiantes):
    estudiantes.sort(key=lambda estudiante: estudiante.calcularPromedio(), reverse=True)


estudiantes = [
    Estudiante("Melgar", 20, [13, 12, 15]),
    Estudiante("Tilin", 22, [19, 20, 16]),
    Estudiante("Alianza Lima", 21, [15, 17, 14])
]

ordenarPorPromedio(estudiantes)
for i, estudiante in enumerate(estudiantes):
    print("Puesto Numero", i + 1, "de", estudiante.nombre)
    print("Edad:", estudiante.edad)
    print("Notas:", estudiante.calcularPromedio(), "\n")


