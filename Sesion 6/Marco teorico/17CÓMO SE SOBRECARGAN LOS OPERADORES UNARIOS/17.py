class Numero:
    def __init__(self, valor=0):
        self.valor = valor

    def __neg__(self):
        return Numero(-self.valor)

    def obtener_valor(self):
        return self.valor


num = Numero(10)

negativo = -num

print("Número original:", num.obtener_valor())
print("Número negativo:", negativo.obtener_valor())