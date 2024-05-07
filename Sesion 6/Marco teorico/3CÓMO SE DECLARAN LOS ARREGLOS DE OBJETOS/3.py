class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def mostrar_info(self):
        print("Nombre:", self.nombre, ", Edad:", self.edad)



personas = [
    Persona("Juan", 25),
    Persona("María", 30),
    Persona("Carlos", 40)
]

for persona in personas:
    persona.mostrar_info()