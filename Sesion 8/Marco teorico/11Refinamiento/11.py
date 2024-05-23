class Animal:
    def hacerSonido(self):
        print("El animal hace un sonido genérico.")

class Perro(Animal):
    def hacerSonido(self):
        super().hacerSonido()  
        print("El perro ladra.")


animal = Animal()
perro = Perro()

animal.hacerSonido() 