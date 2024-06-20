class OutOfRangeError(Exception):
    def __init__(self, message):
        self.message = message
        super().__init__(self.message)

def verificar(value):
    if value > 100:
        raise OutOfRangeError("Error: El valor es mayor a 100.")

try:
    num = int(input("Ingrese un número: "))
    verificar(num)
    print("El valor es:", num)
except OutOfRangeError as e:
    print("Excepción capturada:", e)
except ValueError:
    print("Error: Ingrese un número entero válido.")