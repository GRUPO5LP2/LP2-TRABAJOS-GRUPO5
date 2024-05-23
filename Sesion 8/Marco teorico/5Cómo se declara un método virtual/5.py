from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def hacerSonido(self):
        pass

class Perro(Animal):
    def hacerSonido(self):
        print("El perro ladra.")

class Gato(Animal):
    def hacerSonido(self):
        print("El gato maúlla.")


miAnimal = None
miPerro = Perro()
miGato = Gato()

miAnimal = miPerro
miAnimal.hacerSonido()  

miAnimal = miGato
miAnimal.hacerSonido() 
