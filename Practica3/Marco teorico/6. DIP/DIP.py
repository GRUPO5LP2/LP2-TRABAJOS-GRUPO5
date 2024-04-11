class IBanco:
    def procesarPago(self, monto):
        pass

class Banco(IBanco):
    def procesarPago(self, monto):
        print("Pago procesado en el banco por $" + str(monto))

class ProcesadorDePagos:
    def __init__(self, banco):
        self.banco = banco

    def procesarPago(self, monto):
        self.banco.procesarPago(monto)
        print("Pago procesado exitosamente")


banco = Banco()
procesador = ProcesadorDePagos(banco)
procesador.procesarPago(100.0)