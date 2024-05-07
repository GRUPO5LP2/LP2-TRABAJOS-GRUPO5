class Circulo:
    def __init__(self, r):
        self.radio = r
    
    def obtenerRadio(self):
        return self.radio

def calcularArea(c):
    pi = 3.1416
    return pi * c.radio ** 2

if __name__ == "__main__":
    circulo1 = Circulo(5.0)
    circulo2 = Circulo(7.0)
    
    print("Área del círculo 1:", calcularArea(circulo1))
    print("Área del círculo 2:", calcularArea(circulo2))

