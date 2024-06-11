from abc import ABC, abstractmethod
from math import sqrt

class FiguraGeometrica(ABC):
    @abstractmethod
    def area(self):
        pass

    @abstractmethod
    def perimetro(self):
        pass

class Circulo(FiguraGeometrica):
    def __init__(self, r):
        self.radio = r
        self.PI = 3.1416

    def area(self):
        return self.PI * self.radio ** 2

    def perimetro(self):
        return 2 * self.PI * self.radio

class Rectangulo(FiguraGeometrica):
    def __init__(self, b, a):
        self.base = b
        self.altura = a

    def area(self):
        return self.base * self.altura

    def perimetro(self):
        return 2 * self.altura + 2 * self.base

class Triangulo(FiguraGeometrica):
    def __init__(self, a, b, c=None):
        if c is None:
            self.base = a
            self.altura = b
            self.esRectangulo = True
        else:
            self.ladoa = a
            self.ladob = b
            self.ladoc = c
            self.base = 0
            self.altura = 0
            self.esRectangulo = False

    def area(self):
        if self.esRectangulo:
            return self.base * self.altura / 2
        else:
            p = (self.ladoa + self.ladob + self.ladoc) / 2
            area = sqrt(p * (p - self.ladoa) * (p - self.ladob) * (p - self.ladoc))
            return area

    def perimetro(self):
        if self.esRectangulo:
            return self.base + self.altura + (sqrt(self.altura + self.altura + self.base ** 2))
        else:
            return self.ladoa + self.ladob + self.ladoc

circulito = Circulo(17)
rectangulito = Rectangulo(12, 15)
triangulito = Triangulo(4, 3, 2)
tringulitoRectangulito = Triangulo(3, 2)

arreglodefiguraspro = [circulito, rectangulito, triangulito, tringulitoRectangulito]

for figura in arreglodefiguraspro:
    print("El área es:", figura.area(), "u^2.")
    print("El Perímetro es:", figura.perimetro(), "u.")
