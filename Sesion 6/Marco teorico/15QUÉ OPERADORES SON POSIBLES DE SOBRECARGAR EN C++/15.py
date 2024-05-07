class Numero:
    def __init__(self, valor):
        self.valor = valor

    def __add__(self, otro):
        return Numero(self.valor + otro.valor)

    def mostrar(self):
        print("Valor:", self.valor)


num1 = Numero(5)
num2 = Numero(10)

suma = num1 + num2
suma.mostrar()