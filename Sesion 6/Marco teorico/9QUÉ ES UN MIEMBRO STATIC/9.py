class MiClase:
    contador = 0

    def __init__(self):
        MiClase.contador += 1

    @staticmethod
    def mostrar_contador():
        print("El contador es:", MiClase.contador)


obj1 = MiClase()
obj2 = MiClase()
obj3 = MiClase()

MiClase.mostrar_contador()
