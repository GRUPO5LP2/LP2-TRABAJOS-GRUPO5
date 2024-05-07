class Contador:
    contador = 0

    def __init__(self):
        Contador.contador += 1


c1 = Contador()
c2 = Contador()
c3 = Contador()

print("El contador es:", Contador.contador)