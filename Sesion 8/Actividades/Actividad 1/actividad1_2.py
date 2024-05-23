import math

# Declaración de la clase abstracta Figura
class Figura:
    # Método virtual puro para calcular el área
    def calcularArea(self):
        pass

# Clase derivada Círculo
class Circulo(Figura):
    def __init__(self, r):
        self.radio = r

    def calcularArea(self):
        return math.pi * self.radio * self.radio

# Clase derivada Rectángulo
class Rectangulo(Figura):
    def __init__(self, b, h):
        self.base = b
        self.altura = h

    def calcularArea(self):
        return self.base * self.altura

# Clase derivada Triángulo
class Triangulo(Figura):
    def __init__(self, b, h):
        self.base = b
        self.altura = h

    def calcularArea(self):
        return (self.base * self.altura) / 2

# Ejemplo de uso
circulo = Circulo(5)
rectangulo = Rectangulo(4, 6)
triangulo = Triangulo(3, 8)

print("Área del círculo:", circulo.calcularArea())
print("Área del rectángulo:", rectangulo.calcularArea())
print("Área del triángulo:", triangulo.calcularArea())
