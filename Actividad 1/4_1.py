class Tienda:
    def __init__(self, nombre, direccion, tipo):
        self.nombre = nombre
        self.direccion = direccion
        self.tipo = tipo

    def vender_productos(self):
        producto = input("¿Qué producto desea vender? ")
        cantidad = int(input("Cantidad de productos: "))
        print("¡Producto vendido!")

    def agregar_productos(self):
        producto = input("¿Qué producto desea agregar? ")
        cantidad = int(input("Cantidad de productos: "))
        print("¡Producto agregado!")


class Estudiante:
    def __init__(self, nombres, apellidos, colegio, edad):
        self.nombres = nombres
        self.apellidos = apellidos
        self.colegio = colegio
        self.edad = edad


def menu_principal():
    print("Menu")
    print("1. Generar estudiante")
    print("2. Manejar estudiante")
    print("3. Salir")
    return int(input("Elija una opción: "))


def menu_estudiante():
    print("Menu")
    print("1. Crear tienda")
    print("2. Agregar productos")
    print("3. Vender productos")
    print("4. Salir")
    return int(input("Elija una opción: "))


tiendas = []
estudiantes = []

while True:
    opcion = menu_principal()
    if opcion == 1:
        nombres = input("Nombres del estudiante: ")
        apellidos = input("Apellidos del estudiante: ")
        colegio = input("Colegio del estudiante: ")
        edad = int(input("Edad del estudiante: "))
        estudiante = Estudiante(nombres, apellidos, colegio, edad)
        estudiantes.append(estudiante)
    elif opcion == 2:
        nombres = input("Ingrese el nombre del estudiante: ")
        for estudiante in estudiantes:
            if estudiante.nombres == nombres:
                while True:
                    opcion = menu_estudiante()
                    if opcion == 1:
                        nombre = input("Nombre de la tienda: ")
                        direccion = input("Dirección de la tienda: ")
                        tipo = input("Tipo de tienda: ")
                        tienda = Tienda(nombre, direccion, tipo)
                        tiendas.append(tienda)
                        break
                    elif opcion == 2:
                        nombre = input("Ingrese el nombre de la tienda: ")
                        for tienda in tiendas:
                            if tienda.nombre == nombre:
                                tienda.agregar_productos()
                                break
                        else:
                            print("Tienda no encontrada")
                    elif opcion == 3:
                        nombre = input("Ingrese el nombre de la tienda: ")
                        for tienda in tiendas:
                            if tienda.nombre == nombre:
                                tienda.vender_productos()
                                break
                        else:
                            print("Tienda no encontrada")
                    elif opcion == 4:
                        print("Saliendo...")
                        break
    elif opcion == 3:
        print("Saliendo...")
        break
