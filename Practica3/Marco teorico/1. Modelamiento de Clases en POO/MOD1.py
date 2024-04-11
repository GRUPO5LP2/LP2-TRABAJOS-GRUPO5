class Persona:
    def __init__(self, edad, nombre):
        self.edad = edad
        self.nombre = nombre
    
    def getEdad(self):
        return self.edad
    
    def getNombre(self):
        return self.nombre

p1 = Persona(25, "Juan")
print(f"La edad de {p1.getNombre()} es {p1.getEdad()}")