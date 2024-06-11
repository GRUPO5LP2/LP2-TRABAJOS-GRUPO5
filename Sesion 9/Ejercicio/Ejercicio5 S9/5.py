class Producto:
    def __init__(self, n, p, c):
        self.nombre = n
        self.precio = p
        self.cantidad = c

    def valor(self):
        pass

    def aplicar_descuento(self, porcentaje_descuento):
        self.precio -= self.precio * (porcentaje_descuento / 100)


class ProductoElectronico(Producto):
    def __init__(self, n, p, c, g):
        super().__init__(n, p, c)
        self.garantia = g

    def valor(self):
        return self.precio * self.cantidad * (1 + self.garantia * 0.05)


class ProductoRopa(Producto):
    def __init__(self, n, p, c, t):
        super().__init__(n, p, c)
        self.talla = t


class ProductoAlimento(Producto):
    def __init__(self, n, p, c, fv):
        super().__init__(n, p, c)
        self.fecha_vencimiento = fv


inventario = []

electronico = ProductoElectronico("Arduino", 60, 2, 1)
ropita = ProductoRopa("Camiseta", 250, 17, "S")
comida = ProductoAlimento("Leche", 4, 50, "2030-02-17")

inventario.extend([electronico, ropita, comida])

valor_total = sum(item.valor() for item in inventario)
print(f"Valor total del inventario: {valor_total}")

for item in inventario:
    item.aplicar_descuento(10)

valor_total_dscto = sum(item.valor() for item in inventario)
print(f"Valor total del inventario con descuento: {valor_total_dscto}")
