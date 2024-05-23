class Animal:
    def hacer_sonido(self):
        return "El animal hace un sonido."

class Perro(Animal):
    def hacer_sonido(self):
        return "guau guau guau"

class Gato(Animal):
    def hacer_sonido(self):
        return "miau miau grrrr"

class Vaca(Animal):
    def hacer_sonido(self):
        return "muuu muuuu"

def main():
    animales = [Perro(), Gato(), Vaca()]

    for animal in animales:
        print(animal.hacer_sonido())

main()
