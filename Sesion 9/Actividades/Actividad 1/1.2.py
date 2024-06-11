class Animal:
    def hacerSonido(self):
        print("Sonido de Animal.mp4")

class Perro(Animal):
    def hacerSonido(self):
        print("Waos")

animal = Perro()
animal.hacerSonido()  