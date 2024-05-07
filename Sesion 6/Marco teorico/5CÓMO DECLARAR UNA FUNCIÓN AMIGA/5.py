class MiClase:
    def __init__(self, dato):
        self.__dato_privado = dato

def funcion_amiga(obj):
    print("El dato privado es:", obj._MiClase__dato_privado)


objeto = MiClase(42)
funcion_amiga(objeto)
