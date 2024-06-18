class Animal:
    def hacer_sonido(self): # Enlace tardío por defecto
        print("Sonido genérico de animal")
class Perro(Animal):
    def hacer_sonido(self): # Redefinición (enlace tardío)
        print("Guau!")
animal1 = Perro()
animal1.hacer_sonido() # Guau!
