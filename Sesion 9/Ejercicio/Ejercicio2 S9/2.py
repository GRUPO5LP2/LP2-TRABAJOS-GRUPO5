class Animales:
    def Comer(self):
        pass
    
    def Dormir(self):
        pass
    
    def Moverse(self):
        pass
    
    def Simular(self):
        self.Comer()
        self.Dormir()
        self.Moverse()

class Mamifero(Animales):
    def Comer(self):
        print("El mamifero esta comiendo.")

    def Dormir(self):
        print("El mamifero esta durmiendo.")

    def Moverse(self):
        print("El mamifero esta corriendo.")

class Ave(Animales):
    def Comer(self):
        print("El ave esta picoteando.")

    def Dormir(self):
        print("El ave esta durmiendo en su nido.")

    def Moverse(self):
        print("El ave esta volando.")

class Reptil(Animales):
    def Comer(self):
        print("El reptil esta cazando.")

    def Dormir(self):
        print("El reptil esta durmiendo bajo una roca.")

    def Moverse(self):
        print("El reptil esta reptando.")

class Anfibio(Animales):
    def Comer(self):
        print("El anfibio esta comiendo.")

    def Dormir(self):
        print("El anfibio esta durmiendo.")

    def Moverse(self):
        print("El anfibio esta desplazandose.")

def simular_comportamientos(array_animales):
    for animal in array_animales:
        animal.Simular()
        print()


array_animales = [Mamifero(), Ave(), Reptil(), Anfibio()]

simular_comportamientos(array_animales)
