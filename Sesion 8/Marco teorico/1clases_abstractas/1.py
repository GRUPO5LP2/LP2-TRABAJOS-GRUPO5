from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def hacersonido(self):
        pass

    def comer(self):
        print("Esta comiendo")

class Perro(Animal):
    def hacersonido(self):
        print("Woof")

perro1 = Perro()
perro1.hacersonido()
perro1.comer()
