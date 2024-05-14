class Base:
    def __init__(self):
        self.publico = 10
        self.protegido = 20
        self.__privado = 30

class DerivadaPublica(Base):
    def mostrar(self):
        print("Herencia pública:", self.publico, ",", self.protegido)

class DerivadaProtegida(Base):
    def mostrar(self):
        print("Herencia protegida:", self.publico, ",", self.protegido)

class DerivadaPrivada(Base):
    def mostrar(self):
        print("Herencia privada:", self.publico, ",", self.protegido)


d1 = DerivadaPublica()
d1.mostrar()  
d2 = DerivadaProtegida()
d3 = DerivadaPrivada()
