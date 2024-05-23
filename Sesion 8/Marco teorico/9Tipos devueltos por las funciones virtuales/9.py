class Animal:
    def clonar(self):
        return Animal()

    def hacerSonido(self):
        print("El animal hace un sonido.")

class Perro(Animal):
    def clonar(self):
        return Perro()

    def hacerSonido(self):
        print("El perro ladra.")

class Gato(Animal):
    def clonar(self):
        return Gato()

    def hacerSonido(self):
        print("El gato maúlla.")


animal = Animal()
perro = Perro()
gato = Gato()

animalClonado = animal.clonar()
perroClonado = perro.clonar()
gatoClonado = gato.clonar()

animalClonado.hacerSonido() 
perroClonado.hacerSonido()  
gatoClonado.hacerSonido()    