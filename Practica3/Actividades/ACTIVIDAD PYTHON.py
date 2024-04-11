from abc import ABC, abstractmethod

class ITarea(ABC):
    @abstractmethod
    def obtenerNombreTarea(self):
        pass

    @abstractmethod
    def obtenerDescripcionTarea(self):
        pass

    @abstractmethod
    def obtenerEstado(self):
        pass

    @abstractmethod
    def marcarComoCompletada(self):
        pass

    @abstractmethod
    def obtenerDiaLimite(self):
        pass

class Tarea(ITarea):
    def __init__(self, nombreTarea, descripcionTarea, diaLimite):
        self.nombreTarea = nombreTarea
        self.descripcionTarea = descripcionTarea
        self.estado = False
        self.diaLimite = diaLimite

    def obtenerNombreTarea(self):
        return self.nombreTarea

    def obtenerDescripcionTarea(self):
        return self.descripcionTarea

    def obtenerEstado(self):
        return self.estado

    def marcarComoCompletada(self):
        self.estado = True

    def obtenerDiaLimite(self):
        return self.diaLimite

class ITareaManager(ABC):
    @abstractmethod
    def agregarTarea(self, tarea):
        pass

    @abstractmethod
    def completarTarea(self, indice):
        pass

    @abstractmethod
    def obtenerTodasLasTareas(self):
        pass

class GestorTareas(ITareaManager):
    def __init__(self):
        self.tareas = []

    def agregarTarea(self, tarea):
        self.tareas.append(tarea)

    def completarTarea(self, indice):
        if 0 <= indice < len(self.tareas):
            self.tareas[indice].marcarComoCompletada()

    def obtenerTodasLasTareas(self):
        return self.tareas

class DisenoPantalla:
    @staticmethod
    def mostrarTarea(tarea):
        print("Nombre de la Tarea:", tarea.obtenerNombreTarea())
        print("Descripción de la Tarea:", tarea.obtenerDescripcionTarea())
        print("Día Límite:", tarea.obtenerDiaLimite())
        print("Estado:", "Completada" if tarea.obtenerEstado() else "Incompleta")
        print("-----------------------")

def main():
    gestorTareas = GestorTareas()

    gestorTareas.agregarTarea(Tarea("Hacer la compra", "Comprar leche y pan", "Lunes"))
    gestorTareas.agregarTarea(Tarea("Estudiar para el examen", "Repasar los apuntes", "Viernes"))

    todasLasTareas = gestorTareas.obtenerTodasLasTareas()
    for tarea in todasLasTareas:
        DisenoPantalla.mostrarTarea(tarea)

