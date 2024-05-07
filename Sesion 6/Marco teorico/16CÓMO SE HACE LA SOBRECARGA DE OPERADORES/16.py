class Vector2D:
    def __init__(self, x=0.0, y=0.0):
        self.x = x
        self.y = y

    def __add__(self, otro):
        return Vector2D(self.x + otro.x, self.y + otro.y)

    def mostrar(self):
        print("(", self.x, ",", self.y, ")")


v1 = Vector2D(1.0, 2.0)
v2 = Vector2D(3.0, 4.0)

suma = v1 + v2

print("La suma de los vectores es: ", end="")
suma.mostrar()