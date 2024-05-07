class MiClase:
    def __init__(self, dato):
        self.dato_privado = dato

class ClaseAmiga:
    def mostrar_dato_privado(self, obj):
        print("El dato privado de MiClase es:", obj.dato_privado)


objeto = MiClase(42)
amigo = ClaseAmiga()
amigo.mostrar_dato_privado(objeto)