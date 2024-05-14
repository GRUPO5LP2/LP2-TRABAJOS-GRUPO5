# Herencia pública
class ClaseBase1:
    def __init__(self):
        self.atributo_publico = 0

    def metodo_publico(self):
        print("Soy un método público")

class ClaseDerivada1(ClaseBase1):
    pass

# Herencia protegida
class ClaseBase2:
    def __init__(self):
        self._atributo_protegido = 0

class ClaseDerivada2(ClaseBase2):
    pass

# Herencia privada
class ClaseBase3:
    def __init__(self):
        self.__atributo_privado = 0

    def __metodo_privado(self):
        print("Soy un método privado")

class ClaseDerivada3(ClaseBase3):
    pass

# Herencia pública
obj1 = ClaseDerivada1()
obj1.atributo_publico = 10       # Acceso a atributo público
obj1.metodo_publico()            # Llamada a método público

# Herencia protegida
obj2 = ClaseDerivada2()
# obj2.atributo_protegido = 10    # Error: el atributo protegido no es accesible desde fuera de la jerarquía de herencia

# Herencia privada
obj3 = ClaseDerivada3()
# obj3.__atributo_privado = 10     # Error: el atributo privado no es accesible desde fuera de la clase derivada
# obj3.__metodo_privado()          # Error: el método privado no es accesible desde fuera de la clase derivada
