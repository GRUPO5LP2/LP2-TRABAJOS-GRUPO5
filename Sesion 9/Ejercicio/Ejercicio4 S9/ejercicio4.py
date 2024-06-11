import os

class Personajes:
    def __init__(self, n, e, a, he):
        self.nombre = n
        self.edad = e
        self.arma = a
        self.habilidadespecial = he

    def atacar(self):
        pass

    def defender(self):
        pass

    def habilidadEspecial(self):
        pass

class Guerreros(Personajes):
    def __init__(self, n, e, a, he):
        super().__init__(n, e, a, he)

    def atacar(self):
        print(f"El guerrero {self.nombre} te ataca con su {self.arma}!!")

    def defender(self):
        print(f"El guerrero {self.nombre} se defiende!")

    def habilidadEspecial(self):
        print(f"El guerrero {self.nombre} lanza su habilidad especial {self.habilidadespecial}!!")

class Magos(Personajes):
    def __init__(self, n, e, a, he, elem):
        super().__init__(n, e, a, he)
        self.elemento = elem

    def atacar(self):
        print(f"El mago {self.nombre} te ataca con su {self.arma}!!")

    def defender(self):
        print(f"El mago {self.nombre} se defiende!")

    def habilidadEspecial(self):
        print(f"El mago {self.nombre} lanza su habilidad especial {self.habilidadespecial}!!")

class Arqueros(Personajes):
    def __init__(self, n, e, a, he, tf):
        super().__init__(n, e, a, he)
        self.tipoflecha = tf

    def atacar(self):
        print(f"El arquero {self.nombre} te ataca con su {self.arma}!!")

    def defender(self):
        print(f"El arquero {self.nombre} se defiende!")

    def habilidadEspecial(self):
        print(f"El arquero {self.nombre} lanza su habilidad especial {self.habilidadespecial}!!")

def limpiar_pantalla():
    os.system('cls' if os.name == 'nt' else 'clear')

def menu():
    print("====== MENU PERSONAJES ======")
    print("1. Crear Guerrero")
    print("2. Crear Mago")
    print("3. Crear Arquero")
    print("4. Salir ")
    return int(input("Ingresa tu opción: "))

def menu_metodos():
    print("====== MENU METODOS ======")
    print("1. Atacar!")
    print("2. Defenderse!")
    print("3. Lanzar habilidad especial!")
    print("4. Salir ")
    return int(input("Ingresa tu opción: "))

def main():
    cont = 0
    array_personajes = []

    while True:
        limpiar_pantalla()
        opcion = menu()
        if opcion == 1:
            limpiar_pantalla()
            nombre = input("Ingrese el nombre del Guerrero: ")
            edad = int(input("Ingrese la edad del Guerrero: "))
            arma = input("Ingrese el arma del Guerrero: ")
            habilidadespecial = input("Ingrese la habilidad especial del Guerrero: ")
            array_personajes[cont] = Guerreros(nombre, edad, arma, habilidadespecial)
            while True:
                limpiar_pantalla()
                opcion = menu_metodos()
                if opcion == 1:
                    array_personajes[cont].atacar()
                elif opcion == 2:
                    array_personajes[cont].defender()
                elif opcion == 3:
                    array_personajes[cont].habilidadEspecial()
                else:
                    break
                input("Presiona enter para continuar...")
            cont += 1
        elif opcion == 2:
            limpiar_pantalla()
            nombre = input("Ingrese el nombre del Mago: ")
            edad = int(input("Ingrese la edad del Mago: "))
            arma = input("Ingrese el arma del Mago: ")
            habilidadespecial = input("Ingrese la habilidad especial del Mago: ")
            elemento = input("Ingrese el elemento del Mago: ")
            array_personajes[cont] = Magos(nombre, edad, arma, habilidadespecial, elemento)
            while True:
                limpiar_pantalla()
                opcion = menu_metodos()
                if opcion == 1:
                    array_personajes[cont].atacar()
                elif opcion == 2:
                    array_personajes[cont].defender()
                elif opcion == 3:
                    array_personajes[cont].habilidadEspecial()
                else:
                    break
                input("Presiona enter para continuar...")
            cont += 1
        elif opcion == 3:
            limpiar_pantalla()
            nombre = input("Ingrese el nombre del Arquero: ")
            edad = int(input("Ingrese la edad del Arquero: "))
            arma = input("Ingrese el arma del Arquero: ")
            habilidadespecial = input("Ingrese la habilidad especial del Arquero: ")
            tipoflecha = input("Ingrese el tipo de flecha que usa el Arquero: ")
            array_personajes[cont] = Arqueros(nombre, edad, arma, habilidadespecial, tipoflecha)
            while True:
                limpiar_pantalla()
                opcion = menu_metodos()
                if opcion == 1:
                    array_personajes[cont].atacar()
                elif opcion == 2:
                    array_personajes[cont].defender()
                elif opcion == 3:
                    array_personajes[cont].habilidadEspecial()
                else:
                    break
                input("Presiona enter para continuar...")
            cont += 1
        else:
            break

main()