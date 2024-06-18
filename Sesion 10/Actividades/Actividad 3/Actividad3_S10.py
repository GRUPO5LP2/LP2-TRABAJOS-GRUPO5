class Ruta:
    MAX_PARADAS = 10

    def __init__(self, nombre):
        self.nombre = nombre
        self.paradas = []
        self.num_paradas = 0

    def agregar_parada(self, parada):
        if self.num_paradas < self.MAX_PARADAS:
            self.paradas.append(parada)
            self.num_paradas += 1
        else:
            print(f"No se pueden agregar más paradas a la ruta {self.nombre}")

    def mostrar_ruta(self):
        print(f"Ruta: {self.nombre}")
        for parada in self.paradas:
            print(f"Parada: {parada}")

    def asignar_vehiculo(self, vehiculo):
        print(f"Asignando vehículo {vehiculo} a la ruta {self.nombre}")


class SistemaGestionRutas:
    MAX_RUTAS = 10

    def __init__(self):
        self.rutas = []
        self.num_rutas = 0

    def agregar_ruta(self, ruta):
        if self.num_rutas < self.MAX_RUTAS:
            self.rutas.append(ruta)
            self.num_rutas += 1
        else:
            print("No se pueden agregar más rutas al sistema")

    def mostrar_rutas(self):
        for ruta in self.rutas:
            ruta.mostrar_ruta()

    def optimizar_recursos(self, recurso):
        print(f"Optimizando recurso: {recurso}")

    def generar_informe(self):
        print("Generando informe del sistema de gestión de rutas...")
        self.mostrar_rutas()


ruta1 = Ruta("Ruta 1")
ruta1.agregar_parada("Parada A")
ruta1.agregar_parada("Parada B")

ruta2 = Ruta("Ruta 2")
ruta2.agregar_parada("Parada X")
ruta2.agregar_parada("Parada Y")

sistema = SistemaGestionRutas()
sistema.agregar_ruta(ruta1)
sistema.agregar_ruta(ruta2)

sistema.mostrar_rutas()
sistema.optimizar_recursos("Camión 123")
sistema.generar_informe()


