class Factura:
    def __init__(self, numero_factura, fecha_factura, monto_factura):
        self.numero_factura = numero_factura
        self.fecha_factura = fecha_factura
        self.monto_factura = monto_factura

    def get_numero_factura(self):
        return self.numero_factura

    def set_numero_factura(self, numero_factura):
        self.numero_factura = numero_factura

    def get_fecha_factura(self):
        return self.fecha_factura

    def set_fecha_factura(self, fecha_factura):
        self.fecha_factura = fecha_factura

    def get_monto_factura(self):
        return self.monto_factura

    def set_monto_factura(self, monto_factura):
        self.monto_factura = monto_factura


class Estudiante:
    def __init__(self, nombres, apellidos, colegio, edad):
        self.nombres = nombres
        self.apellidos = apellidos
        self.colegio = colegio
        self.edad = edad

    def facturanding(self):
        print("FACTURANDING PA")


def menu_principal():
    print("Menu")
    print("1. Generar estudiante")
    print("2. Manejar estudiante")
    print("3. Salir")
    opcion = int(input("Elija una opción: "))
    return opcion


def menu_estudiante():
    print("Menu")
    print("1. Crear factura")
    print("2. Obtener numero de la factura")
    print("3. Modificar numero de la factura")
    print("4. Obtener fecha de la factura")
    print("5. Modificar fecha de la factura")
    print("6. Obtener monto de la factura")
    print("7. Modificar monto de la factura")
    print("8. Salir")
    opcion = int(input("Elija una opción: "))
    return opcion


facturas = []
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
                        numero_factura = int(input("Numero de la factura: "))
                        fecha_factura = input("Fecha de la factura: ")
                        monto_factura = float(input("Monto de la factura: "))
                        factura = Factura(numero_factura, fecha_factura, monto_factura)
                        facturas.append(factura)
                    elif opcion == 2:
                        numero_factura = int(input("Numero de la factura: "))
                        encontrada = False
                        for factura in facturas:
                            if factura.get_numero_factura() == numero_factura:
                                print("Numero de la factura:", factura.get_numero_factura())
                                encontrada = True
                                break
                        if not encontrada:
                            print("No se encontró la factura")
                    elif opcion == 3:
                        numero_factura = int(input("Numero de la factura: "))
                        for factura in facturas:
                            if factura.get_numero_factura() == numero_factura:
                                nuevo_numero = int(input("Nuevo numero de factura: "))
                                factura.set_numero_factura(nuevo_numero)
                                break
                        else:
                            print("No se encontró la factura")
                    elif opcion == 4:
                        numero_factura = int(input("Numero de la factura: "))
                        for factura in facturas:
                            if factura.get_numero_factura() == numero_factura:
                                print("Fecha de la factura:", factura.get_fecha_factura())
                                break
                        else:
                            print("No se encontró la factura")
                    elif opcion == 5:
                        numero_factura = int(input("Numero de la factura: "))
                        for factura in facturas:
                            if factura.get_numero_factura() == numero_factura:
                                nueva_fecha = input("Nueva fecha de factura: ")
                                factura.set_fecha_factura(nueva_fecha)
                                break
                        else:
                            print("No se encontró la factura")
                    elif opcion == 6:
                        numero_factura = int(input("Numero de la factura: "))
                        for factura in facturas:
                            if factura.get_numero_factura() == numero_factura:
                                print("Monto de la factura:", factura.get_monto_factura())
                                break
                        else:
                            print("No se encontró la factura")
                    elif opcion == 7:
                        numero_factura = int(input("Numero de la factura: "))
                        for factura in facturas:
                            if factura.get_numero_factura() == numero_factura:
                                nuevo_monto = float(input("Nuevo monto de factura: "))
                                factura.set_monto_factura(nuevo_monto)
                                break
                        else:
                            print("No se encontró la factura")
                    elif opcion == 8:
                        print("Saliendo...")
                        break
            else:
                print("Estudiante no encontrado")
    elif opcion == 3:
        print("Saliendo...")
        break
