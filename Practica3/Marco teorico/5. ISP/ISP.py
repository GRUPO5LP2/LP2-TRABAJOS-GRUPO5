class ICliente:
    def pagar(self, monto):
        pass

    def verHistorial(self):
        pass


class IAdministrador:
    def crearUsuario(self, nombre, tipo):
        pass

    def eliminarUsuario(self, nombre):
        pass


class IVendedor:
    def agregarProducto(self, nombre, precio):
        pass

    def eliminarProducto(self, nombre):
        pass

    def verProductos(self):
        pass


class Cliente(ICliente):
    def pagar(self, monto):
        print("El cliente ha pagado", monto, "pesos")

    def verHistorial(self):
        print("El cliente está viendo su historial de compras")


class Administrador(IAdministrador):
    def crearUsuario(self, nombre, tipo):
        print("Se ha creado un nuevo usuario de tipo", tipo, "llamado", nombre)

    def eliminarUsuario(self, nombre):
        print("Se ha eliminado el usuario", nombre)


class Vendedor(IVendedor):
    def __init__(self):
        self.productos = []

    def agregarProducto(self, nombre, precio):
        self.productos.append((nombre, precio))
        print("Se ha agregado el producto", nombre, "con un precio de", precio, "pesos")

    def eliminarProducto(self, nombre):
        for i, (producto, _) in enumerate(self.productos):
            if producto == nombre:
                del self.productos[i]
                print("Se ha eliminado el producto", nombre)
                return
        print("No se ha encontrado el producto", nombre)

    def verProductos(self):
        print("Los productos en venta son:")
        for producto, precio in self.productos:
            print("-", producto, ":", precio, "pesos")


c = Cliente()
c.pagar(500.0)
c.verHistorial()

a = Administrador()
a.crearUsuario("Juan", "vendedor")
a.eliminarUsuario("Pedro")

v = Vendedor()
v.agregarProducto("Televisor", 10000.0)
v.agregarProducto("Computadora", 15000.0)
v.verProductos()

v.eliminarProducto("Televisor")
v.verProductos()