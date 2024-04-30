class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
        print("Se creó a la persona:", self.nombre, "con:", self.edad, "años")

    def __del__(self):
        print("Persona Borrada:", self.nombre)

    def getNombre(self):
        return self.nombre

    def getEdad(self):
        return self.edad


class Direccion:
    def __init__(self, calle, numero):
        self.calle = calle
        self.numero = numero
        print("Se Creó la CASA en:", self.calle, "con el número:", self.numero)

    def __del__(self):
        print("Casa demolida:", self.calle, self.numero)

    def getCalle(self):
        return self.calle

    def getNumero(self):
        return self.numero


class EstudianteUniversitario:
    def __init__(self, nombre, edad, universidad, calle, numero, ciudad=None):
        self.persona = Persona(nombre, edad)
        self.universidad = universidad
        self.direccion = Direccion(calle, numero)
        self.ciudad = ciudad if ciudad else " "

        if self.ciudad == " ":
            print("Nuevo estudiante universitario nombre:", self.persona.getNombre(), ", edad:",
                  self.persona.getEdad(), "años, su uni es:", self.universidad, "Dirección:",
                  self.direccion.getCalle(), self.direccion.getNumero())
        else:
            print("Nuevo estudiante universitario nombre:", self.persona.getNombre(), ", edad:",
                  self.persona.getEdad(), "años, su uni es:", self.universidad, "Dirección:",
                  self.direccion.getCalle(), self.direccion.getNumero(), "Ciudad:", self.ciudad)
            
    def __del__(self):
        print("Estudiante universitario:", self.persona.getNombre(), "Abandono la uni:", self.universidad)

    def getNombrePersona(self):
        return self.persona.getNombre()

    def getEdadPersona(self):
        return self.persona.getEdad()

    def getUniversidad(self):
        return self.universidad

    def getDireccion(self):
        return self.direccion

    def getCiudad(self):
        return self.ciudad

    def mostrar_datos(self):
        if self.ciudad == " ":
            print("Nombre:", self.persona.getNombre())
            print("Edad:", self.persona.getEdad())
            print("Universidad:", self.universidad)
            print("Dirección:", self.direccion.getCalle(), self.direccion.getNumero())
        else:
            print("Nombre:", self.persona.getNombre())
            print("Edad:", self.persona.getEdad())
            print("Universidad:", self.universidad)
            print("Dirección:", self.direccion.getCalle(), self.direccion.getNumero())
            print("Ciudad:", self.ciudad)


def menu_principal():
    print("1. Crear estudiante universitario")
    print("2. Crear estudiante universitario foraneo")
    print("3. Salir")
    opcion = int(input("Ingrese una opción: "))
    return opcion


def menu_universitario_local():
    print("1. Mostrar datos del universitario local")
    print("2. Salir y destruir universitario local")
    opcion = int(input("Ingrese una opción: "))
    return opcion


def menu_universitario_foraneo():
    print("1. Mostrar datos del universitario foraneo")
    print("2. Salir y destruir objeto universitario local")
    opcion = int(input("Ingrese una opción: "))
    return opcion


while True:
    opcion = menu_principal()
    if opcion == 1:
        nombre = input("Ingrese el nombre del estudiante: ")
        edad = int(input("Ingrese la edad del estudiante: "))
        universidad = input("Ingrese la universidad del estudiante: ")
        calle = input("Ingrese la calle de la dirección del estudiante: ")
        numero = int(input("Ingrese el número de la dirección del estudiante: "))
        estudiante = EstudianteUniversitario(nombre, edad, universidad, calle, numero)
        while True:
            opcion = menu_universitario_local()
            if opcion == 1:
                estudiante.mostrar_datos()
            elif opcion == 2:
                estudiante.persona.__del__()
                estudiante.direccion.__del__()
                estudiante.__del__()
                break
            else:
                print("Opción no válida")
    elif opcion == 2:
        nombre = input("Ingrese el nombre del estudiante: ")
        edad = int(input("Ingrese la edad del estudiante: "))
        universidad = input("Ingrese la universidad del estudiante: ")
        calle = input("Ingrese la calle de la dirección del estudiante: ")
        numero = int(input("Ingrese el número de la dirección del estudiante: "))
        ciudad = input("Ingrese la ciudad del estudiante: ")
        estudiante = EstudianteUniversitario(nombre, edad, universidad, calle, numero, ciudad)
        while True:
            opcion = menu_universitario_foraneo()
            if opcion == 1:
                estudiante.mostrar_datos()
            elif opcion == 2:
                estudiante.persona.__del__()
                estudiante.direccion.__del__()
                estudiante.__del__()
                break
            else:
                print("Opción no válida")
    elif opcion == 3:
        print("Saliendo del programa")
        break
    else:
        print("Opción no válida")
