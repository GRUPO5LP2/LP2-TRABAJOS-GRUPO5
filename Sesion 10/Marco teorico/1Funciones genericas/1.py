class Animal:
    def hacer_sonido(self):
        print("Sonido genérico de animal")


class Perro(Animal):
    def hacer_sonido(self):
        print("Guau!")


class Gato(Animal):
    def hacer_sonido(self):
        print("Miau!")


animal1 = Perro()
animal2 = Gato()


animal1.hacer_sonido()  # Guau!
animal2.hacer_sonido()  # Miau!