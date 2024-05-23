import math
class Forma:
    def calculoPerimetro(self):
        pass

class Circulo(Forma):
    def __init__(self, radio):
        self.radio = radio
    
    def calculoPerimetro(self):
        return 2 * math.pi * self.radio

class Rectangulo(Forma):
    def __init__(self, largo, ancho):
        self.largo = largo
        self.ancho = ancho
    
    def calculoPerimetro(self):
        return 2 * (self.largo + self.ancho)

class Triangulo(Forma):
    def __init__(self, lado1, lado2, lado3):
        self.lado1 = lado1
        self.lado2 = lado2
        self.lado3 = lado3
    
    def calculoPerimetro(self):
        return self.lado1 + self.lado2 + self.lado3

while True:
    print("Seleccione una forma para calcular su perímetro:")
    print("1. Círculo")
    print("2. Rectángulo")
    print("3. Triángulo")
    print("4. Salir")    
    opcion = int(input("Elige tu opción: "))
        
    if opcion == 4:
        break
        
    if opcion == 1:
        radio = float(input("Ingrese el radio del círculo: "))
        circulo = Circulo(radio)
        perimetro = circulo.calculoPerimetro()
        print(f"El perímetro del círculo es: {perimetro}")
    elif opcion == 2:
        largo = float(input("Ingrese el largo del rectángulo: "))
        ancho = float(input("Ingrese el ancho del rectángulo: "))
        rectangulo = Rectangulo(largo, ancho)
        perimetro = rectangulo.calculoPerimetro()
        print(f"El perímetro del rectángulo es: {perimetro}")
    elif opcion == 3:
        lado1 = float(input("Ingrese el primer lado del triángulo: "))
        lado2 = float(input("Ingrese el segundo lado del triángulo: "))
        lado3 = float(input("Ingrese el tercer lado del triángulo: "))
        triangulo = Triangulo(lado1, lado2, lado3)
        perimetro = triangulo.calculoPerimetro()
        print(f"El perímetro del triángulo es: {perimetro}")