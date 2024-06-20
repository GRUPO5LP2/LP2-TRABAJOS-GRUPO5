class DivisionByZeroError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

def dividir(a, b):
    if b == 0:
        raise DivisionByZeroError("Error: División por cero.")
    return a / b


try:
    num1 = float(input("Ingrese el primer numero: "))
    num2 = float(input("Ingrese el segundo numero: "))

    result = dividir(num1, num2)
    print("El resultado es:", result)

except DivisionByZeroError as e:
    print("Excepción capturada:", e)

except ValueError:
    print("Error: Ingrese un número válido.")