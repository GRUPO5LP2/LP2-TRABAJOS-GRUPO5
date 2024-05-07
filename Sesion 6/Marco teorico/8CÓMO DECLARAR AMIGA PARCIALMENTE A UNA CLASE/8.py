class ClaseA:
    def __init__(self, dato):
        self.__dato_privado_a = dato

class ClaseB:
    def metodo_b(self, objeto_a):
        print("El dato privado de ClaseA es:", objeto_a._ClaseA__dato_privado_a)


objeto_a = ClaseA(42)
objeto_b = ClaseB()
objeto_b.metodo_b(objeto_a)