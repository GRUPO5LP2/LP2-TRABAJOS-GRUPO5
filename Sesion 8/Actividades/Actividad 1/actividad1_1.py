import math

# Declaración de la clase abstracta Figura
class Figura:
    # Método virtual puro para calcular el área
    def calcularArea(self):
        pass

# Ejemplo de una subclase que hereda de Figura
class Circulo(Figura):
    def __init__(self, radio):
        self.radio = radio

    # Método para calcular el área del círculo
    def calcularArea(self):
        return math.pi * self.radio ** 2

# Ejemplo de uso
circulo = Circulo(5)
print("Área del círculo:", circulo.calcularArea())
