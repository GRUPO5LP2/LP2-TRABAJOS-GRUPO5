class Vehiculo:
    def conducir(self):
        print("¡El vehículo está en movimiento!")

class Automovil(Vehiculo):
    def encenderLuces(self):
        print("Luces encendidas")

mi_auto = Automovil()
mi_auto.conducir()  
mi_auto.encenderLuces()  