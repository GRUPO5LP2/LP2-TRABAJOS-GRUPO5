import math

PI = 3.1416

# Abstract base class Figure
class Figura:
    def draw(self):
        pass

    def calculate_area(self):
        pass


# Derived class Circle
class Círculo(Figura):
    def __init__(self, r):
        self.radio = r

    def draw(self):
        print("Drawing a circle")

    def calculate_area(self):
        return PI * self.radio ** 2


# Derived class Rectangle
class Rectángulo(Figura):
    def __init__(self, b, h):
        self.base = b
        self.altura = h

    def draw(self):
        print("Drawing a rectangle")

    def calculate_area(self):
        return self.base * self.altura


# Derived class Triangle
class Triangulo(Figura):
    def __init__(self, b, h):
        self.base = b
        self.altura = h

    def draw(self):
        print("Drawing a triangle")

    def calculate_area(self):
        return 0.5 * self.base * self.altura


#MAIN#
rectangulo = Rectángulo(4, 6)
rectangulo.draw()
print(f"The area of the rectangle: {rectangulo.calculate_area()}")

circulo = Círculo(5)
circulo.draw()
print(f"The area of the circle: {circulo.calculate_area()}")

triangulo = Triangulo(3, 8)
triangulo.draw()
print(f"The area of the triangle: {triangulo.calculate_area()}")

