class Animal:
    def hacerSonido(self):
        print("El animal hace un sonido.")

class Perro(Animal):
    def hacerSonido(self):
        print("El perro ladra.")

class Gato(Animal):
    def hacerSonido(self):
        print("El gato maúlla.")

animal = None
miPerro = Perro()
miGato = Gato()

animal = miPerro
animal.hacerSonido() 

animal = miGato
animal.hacerSonido()