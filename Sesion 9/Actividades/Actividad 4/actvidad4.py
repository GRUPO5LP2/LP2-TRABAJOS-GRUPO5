from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def hacerSonido(self):
        pass

class Perro(Animal):
    def hacerSonido(self):
        print("Wau Wau")

class Gato(Animal):
    def hacerSonido(self):
        print("Miau")

class Vaca(Animal):
    def hacerSonido(self):
        print("Muuu")

array_animales = []
perrito = Perro()
gatito = Gato()
vaquita = Vaca()

array_animales[0] = perrito
array_animales[1] = gatito
array_animales[2] = vaquita

for animal in array_animales[:3]:
   animal.hacerSonido()