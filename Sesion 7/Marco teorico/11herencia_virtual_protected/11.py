class Figura:
    def dibujar(self):
        print("Dibujando Figura")

class Triangulo(Figura):
    def dibujar(self):
        print("Dibujando Triangulo")

class Rectangulo(Figura):
    def dibujar(self):
        print("Dibujando Rectangulo")

t = Triangulo()
r = Rectangulo()

t.dibujar()  
r.dibujar()  
