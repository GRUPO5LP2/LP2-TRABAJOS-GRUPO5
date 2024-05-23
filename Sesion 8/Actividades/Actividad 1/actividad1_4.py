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

# Clase derivada Cuadrado
class Cuadrado(Figura):
    def __init__(self, l):
        self.lado = l

    def calcularArea(self):
        return self.lado * self.lado

# Clase derivada Pentagono
class Pentagono(Figura):
    def __init__(self, l):
        self.lado = l

    def calcularArea(self):
        return 0.25 * math.sqrt(5 * (5 + 2 * math.sqrt(5))) * self.lado * self.lado

print("Elija una figura geométrica:")
print("1. Circulo")
print("2. Rectangulo")
print("3. Triangulo")
print("4. Cuadrado")
print("5. Pentagono")

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
elif opcion == 4:
    lado = float(input("Ingrese el lado del cuadrado: "))
    figura = Cuadrado(lado)
elif opcion == 5:
    lado = float(input("Ingrese el lado del pentagono: "))
    figura = Pentagono(lado)
else:
    print("Opción invalida")
    exit(1)

print("El area de la figura elegida es:", figura.calcularArea())
