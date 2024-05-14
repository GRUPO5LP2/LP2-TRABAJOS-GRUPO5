class Animal:
    def __init__(self, edad):
        self.edad = edad

    def mostrar_edad(self):
        print("Edad del animal:", self.edad, "años")

class Perro(Animal):
    def __init__(self, edad):
        super().__init__(edad)

    def mostrar_edad_del_perro(self):
        print("Edad del perro:", self.edad, "años")


mi_perro = Perro(5)
mi_perro.mostrar_edad_del_perro()
