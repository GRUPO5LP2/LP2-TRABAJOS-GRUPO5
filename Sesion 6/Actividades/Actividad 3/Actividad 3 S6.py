class Banco:
    tasa_interes = 0.05

    @staticmethod
    def cambiar_tasa_interes(nueva_tasa):
        Banco.tasa_interes = nueva_tasa

class CuentaBancaria:
    def __init__(self, saldo_inicial):
        self.saldo = saldo_inicial

    def depositar(self, cantidad):
        self.saldo += cantidad

    def retirar(self, cantidad):
        if cantidad <= self.saldo:
            self.saldo -= cantidad
        else:
            print("Saldo insuficiente")

    def calcular_interes(self):
        return self.saldo * Banco.tasa_interes

def obtener_saldo(cuenta):
    return cuenta.saldo

if __name__ == "__main__":
    cuenta1 = CuentaBancaria(1000)
    print("Saldo actual:", obtener_saldo(cuenta1))

    Banco.cambiar_tasa_interes(0.06)
    print("Nueva tasa de interés:", Banco.tasa_interes)

    cuenta1.depositar(500)
    print("Saldo después del depósito:", obtener_saldo(cuenta1))

    cuenta1.retirar(200)
    print("Saldo después del retiro:", obtener_saldo(cuenta1))

    interes_ganado = cuenta1.calcular_interes()
    print("Interés ganado:", interes_ganado)
