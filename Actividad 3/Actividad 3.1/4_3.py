class Estudiante:
    def __init__(self, nombres, apellidos, colegio, edad):
        self.nombres = nombres
        self.apellidos = apellidos
        self.colegio = colegio
        self.edad = edad

class Perro:
    def __init__(self, nombre, raza, edad):
        self.nombre = nombre
        self.raza = raza
        self.edad = edad

def menu_principal():
    print("Menu")
    print("1. Generar estudiante")
    print("2. Manejar estudiante")
    print("3. Salir")
    return int(input("Elija una opción: "))

def menu_estudiante():
    print("Menu")
    print("1. Crear objetos")
    print("2. Comparar objetos")
    print("3. Salir")
    return int(input("Elija una opción: "))

estudiantes = []
perros = []

while True:
    opcion = menu_principal()
    if opcion == 1:
        nombres = input("Ingrese nombres: ")
        apellidos = input("Ingrese apellidos: ")
        colegio = input("Ingrese colegio: ")
        edad = int(input("Ingrese edad: "))
        estudiantes.append(Estudiante(nombres, apellidos, colegio, edad))
    elif opcion == 2:
        nombres = input("Ingrese el nombre del estudiante: ")
        for estudiante in estudiantes:
            if estudiante.nombres == nombres:
                while True:
                    opcion = menu_estudiante()
                    if opcion == 1:
                        nombre = input("Ingrese nombre del perro: ")
                        raza = input("Ingrese raza del perro: ")
                        edad = int(input("Ingrese edad del perro: "))
                        perros.append(Perro(nombre, raza, edad))
                    elif opcion == 2:
                        if len(perros) >= 2:
                            nombre_perro1 = input("Ingrese el nombre del primer perro:")
                            nombre_perro2 = input("Ingrese el nombre del segundo perro:")
                            for perro1 in perros:
                                if perro1.nombre == nombre_perro1:
                                    for perro2 in perros:
                                        if perro2.nombre == nombre_perro2:
                                            if perro1.raza == perro2.raza:
                                                if perro1.edad == perro2.edad:
                                                    print("Los perros son los mismos")
                                                else:
                                                    print("Los perros son diferentes")
                                                break
                                    break
                            else:
                                print("No hay suficientes perros")
                        elif opcion == 3:
                            print("Saliendo...")
                            break
    elif opcion == 3:
        print("Saliendo...")
        break
