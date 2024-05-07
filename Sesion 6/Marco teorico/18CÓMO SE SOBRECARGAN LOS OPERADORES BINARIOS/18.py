class Punto:
    def __init__(self, x=0.0, y=0.0):
        self.x = x
        self.y = y

    def __add__(self, otro):
        return Punto(self.x + otro.x, self.y + otro.y)

    def mostrar(self):
        print("(", self.x, ",", self.y, ")")


punto1 = Punto(1.0, 2.0)
punto2 = Punto(3.0, 4.0)

suma = punto1 + punto2

print("La suma de los puntos es: ", end="")
suma.mostrar()