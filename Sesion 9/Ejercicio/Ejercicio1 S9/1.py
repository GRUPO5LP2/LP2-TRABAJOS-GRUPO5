import math

class Figuras:
    def Calcular_Area(self):
        pass
    
    def Calcular_Perimetro(self):
        pass
    
    def Mostrar_Figura(self):
        pass

class Circulo(Figuras):
    def __init__(self, r):
        self.radio = r
        self.pi = 3.1416

    def Calcular_Area(self):
        return self.pi * (self.radio ** 2)

    def Calcular_Perimetro(self):
        return 2 * self.pi * self.radio

    def Mostrar_Figura(self):
        print("\nLa Figura es un Circulo" +
              "\nRadio:", self.radio +
              "\nArea:", self.Calcular_Area() +
              "\nPerimetro:", self.Calcular_Perimetro())

class Rectangulo(Figuras):
    def __init__(self, b, a):
        self.base = b
        self.altura = a

    def Calcular_Area(self):
        return self.base * self.altura

    def Calcular_Perimetro(self):
        return 2 * (self.base + self.altura)

    def Mostrar_Figura(self):
        print("\nLa Figura es un Rectangulo" +
              "\nBase:", self.base +
              "\nAltura:", self.altura +
              "\nArea:", self.Calcular_Area() +
              "\nPerimetro:", self.Calcular_Perimetro())

class Triangulo(Figuras):
    def __init__(self, b, a):
        self.base = b
        self.altura = a

    def Calcular_Area(self):
        return (self.base * self.altura) / 2

    def Calcular_Perimetro(self):
        return 3 * self.base  
    
    def Mostrar_Figura(self):
        print("\nLa Figura es un Triangulo" +
              "\nBase:", self.base +
              "\nAltura:", self.altura +
              "\nArea:", self.Calcular_Area())



circulo1 = Circulo(3.7)
rectangulo1 = Rectangulo(5, 7)
triangulo1 = Triangulo(8, 7)

circulo1.Mostrar_Figura()
rectangulo1.Mostrar_Figura()
triangulo1.Mostrar_Figura()
