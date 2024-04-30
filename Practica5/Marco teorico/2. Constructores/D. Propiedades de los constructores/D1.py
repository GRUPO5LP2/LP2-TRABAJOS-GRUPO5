class Persona:
    def __init__(self, n, e):
        self.nombre = n
        self.edad = e

    def mostrarDetalles(self):
        print("Nombre:", self.nombre, ", Edad:", self.edad)

persona1 = Persona("Juan", 30)

persona1.mostrarDetalles()
