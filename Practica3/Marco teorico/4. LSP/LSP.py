class Animal:
    def comer(self):
        print("El animal está comiendo.")


class Mamifero(Animal):
    def amamantar(self):
        print("El mamífero está amamantando.")


class Ave(Animal):
    def volar(self):
        print("El ave está volando.")


class Perro(Mamifero):
    def ladrar(self):
        print("El perro está ladrando.")


class Pajaro(Ave):
    def cantar(self):
        print("El pájaro está cantando.")



animal1 = Animal()
mamifero1 = Mamifero()
ave1 = Ave()
perro1 = Perro()
pajaro1 = Pajaro()

animal1.comer()
mamifero1.comer()
mamifero1.amamantar()
ave1.comer()
ave1.volar()
perro1.comer()
perro1.ladrar()
pajaro1.comer()
pajaro1.volar()
pajaro1.cantar()