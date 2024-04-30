class Ejemplo:
    def __init__(self, n):
        self.nombre = n
        print("Constructor llamado para", self.nombre)

    def mostrarNombre(self):
        print("Nombre:", self.nombre)

    def __del__(self):
        print("Destructor llamado para", self.nombre)


print("Creación de objetos:")
objeto1 = Ejemplo("Objeto 1")
objeto2 = Ejemplo("Objeto 2")

print("\nMétodos llamados:")
objeto1.mostrarNombre()
objeto2.mostrarNombre()

print("\nFin del ámbito de objeto2:")

objeto3 = Ejemplo("Objeto 3")
del objeto3 

print("\nFin del ámbito de objeto1:")
