class Ruta:
    MAX_PARADAS = 10

    def __init__(self, nombre):
        self.nombre = nombre
        self.paradas = []
        self.numParadas = 0

    def agregarParada(self, parada):
        if self.numParadas < self.MAX_PARADAS:
            self.paradas.append(parada)
            self.numParadas += 1
        else:
            print(f"No se pueden agregar más paradas a la ruta {self.nombre}")

    def mostrarRuta(self):
        print(f"Ruta: {self.nombre}")
        for parada in self.paradas:
            print(f"Parada: {parada}")

    def asignarVehiculo(self, vehiculo):
        print(f"Asignando vehículo {vehiculo} a la ruta {self.nombre}")


class Entrega:
    MAX_ENTREGAS = 10

    def __init__(self, destinatario, direccion):
        self.destinatario = destinatario
        self.direccion = direccion

    def mostrarEntrega(self):
        print(f"Entrega para: {self.destinatario} en {self.direccion}")

    def planificarHorario(self, horario):
        print(f"Planificando horario {horario} para la entrega a {self.destinatario}")


ruta1 = Ruta("Ruta 1")
ruta1.agregarParada("Parada A")
ruta1.agregarParada("Parada B")
ruta1.mostrarRuta()
ruta1.asignarVehiculo("Camión 123")

entrega1 = Entrega("Juan Perez", "Calle Falsa 123")
entrega1.mostrarEntrega()
entrega1.planificarHorario("10:00 AM")

