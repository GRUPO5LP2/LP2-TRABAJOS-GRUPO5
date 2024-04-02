class Tienda:
    def __init__(self, nombre, direccion, tipo):
        self.nombre = nombre
        self.direccion = direccion
        self.tipo = tipo
        self.productos_disponibles = []
        self.precios = []
        self.compras = []

    def generar_lista_productos(self):
        producto = input("Ingrese el nombre del producto: ")
        precio = float(input("Ingrese el precio del producto: "))
        self.productos_disponibles.append(producto)
        self.precios.append(precio)

    def ver_lista_productos_disponibles(self):
        for producto, precio in zip(self.productos_disponibles, self.precios):
            print(producto, "-", precio)

    def ver_lista_de_compras(self):
        for compra in self.compras:
            print(compra)


class Cliente:
    def __init__(self, nombres, apellidos, direccion):
        self.nombres = nombres
        self.apellidos = apellidos
        self.direccion = direccion
        self.lista_compras = []

    def agregar_productos_lista(self):
        producto = input("¿Qué producto desea agregar? ")
        self.lista_compras.append(producto)

    def pagar_cuenta(self, tienda):
        total = sum(tienda.precios[tienda.productos_disponibles.index(producto)] for producto in self.lista_compras if producto in tienda.productos_disponibles)
        pago = float(input("¿Con cuánto pagará su cuenta? "))
        if pago >= total:
            print("El precio total es:", total)
            print("Su vuelto es:", pago - total)
            tienda.compras.extend(self.lista_compras)
        else:
            print("No tiene suficiente dinero")


def menu():
    print("Menu")
    print("1. Agregar productos a la tienda")
    print("2. Ver lista de productos disponibles")
    print("3. Agregar productos a la lista de compras")
    print("4. Ver lista de compras")
    print("5. Calcular total y pagar")
    print("6. Salir")
    return int(input("Elija una opción: "))


tiendas = []
clientes = []

while True:
    nombre = input("Nombre de la tienda: ")
    direccion = input("Direccion de la tienda: ")
    tipo = input("Tipo de tienda: ")
    tienda = Tienda(nombre, direccion, tipo)
    tiendas.append(tienda)
    print()
    nombres = input("Nombres del cliente: ")
    apellidos = input("Apellidos del cliente: ")
    direccion_cliente = input("Direccion del cliente: ")
    cliente = Cliente(nombres, apellidos, direccion_cliente)
    clientes.append(cliente)
    print()
    while True:
        nombre = input("Ingrese el nombre de la tienda: ")
        for tienda in tiendas:
            if tienda.nombre == nombre:
                nombres = input("Ingrese el nombre del cliente: ")
                print()
                for cliente in clientes:
                    if cliente.nombres == nombres:
                        while True:
                            opcion = menu()
                            if opcion == 1:
                                tienda.generar_lista_productos()
                            elif opcion == 2:
                                tienda.ver_lista_productos_disponibles()
                            elif opcion == 3:
                                cliente.agregar_productos_lista()
                            elif opcion == 4:
                                tienda.ver_lista_de_compras()
                            elif opcion == 5:
                                cliente.pagar_cuenta(tienda)
                            elif opcion == 6:
                                exit(0)
