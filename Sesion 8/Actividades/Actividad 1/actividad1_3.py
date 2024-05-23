import math

class Figura:
    # Método virtual puro para calcular el área
    def calcularArea(self):
        pass

class Circulo(Figura):
    def __init__(self, r):
        self.radio = r

    def calcularArea(self):
        return math.pi * self.radio * self.radio

class Rectangulo(Figura):
    def __init__(self, b, h):
        self.base = b
        self.altura = h

    def calcularArea(self):
        return self.base * self.altura

class Triangulo(Figura):
    def __init__(self, b, h):
        self.base = b
        self.altura = h

    def calcularArea(self):
        return (self.base * self.altura) / 2

print("Elija una figura geometrica:")
print("1. Circulo")
print("2. Rectangulo")
print("3. Triangulo")

opcion = int(input())

figura = None

if opcion == 1:
    radio = float(input("Ingrese el radio del circulo: "))
    figura = Circulo(radio)
elif opcion == 2:
    base = float(input("Ingrese la base del rectangulo: "))
    altura = float(input("Ingrese la altura del rectangulo: "))
    figura = Rectangulo(base, altura)
elif opcion == 3:
    base = float(input("Ingrese la base del triangulo: "))
    altura = float(input("Ingrese la altura del triangulo: "))
    figura = Triangulo(base, altura)
else:
    print("Opcion invalida")
    exit(1)

print("El area de la figura elegida es:", figura.calcularArea())
