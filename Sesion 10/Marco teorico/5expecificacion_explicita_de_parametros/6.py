from abc import ABC, abstractmethod

class Figura(ABC):  # Clase abstracta Figura
    @abstractmethod
    def calcular_area(self):
        pass

class Circulo(Figura):
    def __init__(self, radio):
        self.radio = radio

    def calcular_area(self):
        return 3.14159 * self.radio ** 2

class Rectangulo(Figura):
    def __init__(self, base, altura):
        self.base = base
        self.altura = altura

    def calcular_area(self):
        return self.base * self.altura

figura1 = Circulo(5.0)
figura2 = Rectangulo(4.0, 6.0)

print("Área del círculo:", figura1.calcular_area())
print("Área del rectángulo:", figura2.calcular_area())
