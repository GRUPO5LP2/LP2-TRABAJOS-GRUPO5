from abc import ABC, abstractmethod
import math

class Figura(ABC):
    @abstractmethod
    def calcular_area(self):
        pass

class Circulo(Figura):
    def __init__(self, radio):
        self.pi = 3.14
        self.radio = radio

    def calcular_area(self):
        area = self.pi * math.pow(self.radio, 2)
        print("El area del circulo es: ", area)

class Rectangulo(Figura):
    def __init__(self, largo, ancho):
        self.largo = largo
        self.ancho = ancho

    def calcular_area(self):
        area = self.largo * self.ancho
        print("El area del rectangulo es: ", area)

class Triangulo(Figura):
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura

    def calcular_area(self):
        area = (self.base * self.altura) / 2
        print("El area del triangulo es: ", area)


array_figuras = []
circulito = Circulo(2.3)
rectangulito = Rectangulo(5, 13)
triangulito = Triangulo(15, 20)

array_figuras[0] = circulito
array_figuras[1] = rectangulito
array_figuras[2] = triangulito

for i in range(3):
    array_figuras[i].calcular_area()