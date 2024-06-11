class Calculadora:
    def __init__(self, num1=0, num2=0):
        self.a = num1
        self.b = num2

    def sumar(self, a, b):
        return a + b

calcular1 = Calculadora()

resultado = calcular1.sumar(13.575, 24.65)

print("El resultado de la suma es:", resultado)
