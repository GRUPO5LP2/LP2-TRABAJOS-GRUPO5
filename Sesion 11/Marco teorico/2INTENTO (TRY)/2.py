class DivisionByZeroError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

try:
    numerador = int(input("Ingrese el numerador: "))
    denominador = int(input("Ingrese el denominador: "))

    if denominador == 0:
        raise DivisionByZeroError("Error: División por cero.")

    resultado = numerador // denominador
    print("El resultado es:", resultado)

except DivisionByZeroError as e:
    print("Excepción capturada:", e)

except ValueError:
    print("Error: Ingrese un número entero válido.")
