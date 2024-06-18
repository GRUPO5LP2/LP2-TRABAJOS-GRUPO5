class Animal:
    def hacer_sonido(self):
        print("Sonido genérico de animal")
    
    def mostrar_nombre(self, nombre):
        print("Animal:", nombre)

class Perro(Animal):
    def hacer_sonido(self):
        print("Guau!")

animal1 = Perro()
animal1.hacer_sonido()           # Llama a la versión redefinida (Guau!)
animal1.mostrar_nombre("Fido")   # Llama a la versión de la clase base
