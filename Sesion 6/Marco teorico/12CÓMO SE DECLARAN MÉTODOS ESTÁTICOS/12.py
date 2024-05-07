class Utilidades:
    @staticmethod
    def sumar(a, b):
        return a + b

    @staticmethod
    def saludar():
        print("¡Hola desde el método estático saludar!")


resultado = Utilidades.sumar(3, 4)
print("La suma es:", resultado)

Utilidades.saludar()
