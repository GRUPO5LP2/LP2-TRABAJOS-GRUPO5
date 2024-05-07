class Persona:
    def __init__(self, nombre, edad, genero):
        self.nombre = nombre
        self.edad = edad
        self.genero = genero

    def mostrar_datos(self):
        print("Nombre:", self.nombre, ", Edad:", self.edad, ", Género:", self.genero)



personas = [
    Persona("Juan", 25, 'M'),
    Persona("María", 30, 'F'),
    Persona("Pedro", 40, 'M')
]

for persona in personas:
    persona.mostrar_datos()