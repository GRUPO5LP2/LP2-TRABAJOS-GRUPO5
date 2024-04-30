class Persona:
    def __init__(self, n):
        self.nombre = n
        print("Constructor llamado para", self.nombre)

    def mostrarNombre(self):
        print("Nombre:", self.nombre)

    def __del__(self):
        print("Destructor llamado para", self.nombre)


persona1 = Persona("Juan")

persona1.mostrarNombre()
