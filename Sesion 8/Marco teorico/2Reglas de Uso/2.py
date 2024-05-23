from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def hacerSonido(self):
        pass

    def comer(self):
        print("Este animal está comiendo.")

class Perro(Animal):
    def hacerSonido(self):
        print("Guau")

class Gato(Animal):
    def hacerSonido(self):
        print("Miau")


perro = Perro()
gato = Gato()

perro.hacerSonido()
perro.comer()

gato.hacerSonido()
gato.comer()