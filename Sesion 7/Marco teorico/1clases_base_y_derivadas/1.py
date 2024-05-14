class Vehiculo:
    def __init__(self, n_ruedas):
        self.ruedas = n_ruedas

    def info(self):
        print("Este vehículo tiene", self.ruedas, "ruedas.")

class Automovil(Vehiculo):
    def __init__(self, n_ruedas, n_puertas):
        super().__init__(n_ruedas)
        self.puertas = n_puertas

    def info(self):
        super().info()
        print("Este automóvil tiene", self.puertas, "puertas.")


a = Automovil(4, 2)
a.info()