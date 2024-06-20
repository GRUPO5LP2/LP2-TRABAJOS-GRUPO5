class NegativeValueError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

def verificar(value):
    if value < 0:
        raise NegativeValueError("Error: Valor negativo no permitido.")


try:
    num = int(input("Ingrese un número: "))
    verificar(num)
    print("El valor es:", num)
except NegativeValueError as e:
    print("Excepción capturada:", e)
except ValueError:
    print("Error: Ingrese un número entero válido.")
