class Ejemplo:
    contador = 0

    def __init__(self):
        Ejemplo.contador += 1

    @staticmethod
    def mostrar_contador():
        print("El contador es:", Ejemplo.contador)

e1 = Ejemplo()
e2 = Ejemplo()
e3 = Ejemplo()
Ejemplo.mostrar_contador()

