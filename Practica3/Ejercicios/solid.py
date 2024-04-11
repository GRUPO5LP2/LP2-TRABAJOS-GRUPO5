from abc import ABC, abstractmethod

class DefinirProyecto:
    def __init__(self, nombreProyecto, descripcionProyecto, fechaInicio, fechaFin, estado):
        self.nombreProyecto = nombreProyecto
        self.descripcionProyecto = descripcionProyecto
        self.fechaInicio = fechaInicio
        self.fechaFin = fechaFin
        self.estado = estado

class GestionDeProyecto(DefinirProyecto):
    def __init__(self, nombreProyecto, descripcionProyecto, fechaInicio, fechaFin, estado):
        super().__init__(nombreProyecto, descripcionProyecto, fechaInicio, fechaFin, estado)

    def gestionar(self):
        print("Proyecto gestionado")

class AgregacionDeComentario:
    def __init__(self, autor, fecha, contenido):
        self.autor = autor
        self.fecha = fecha
        self.contenido = contenido

    def agregar(self):
        print("Comentario agregado")

class CompartirElArchivo:
    def __init__(self, nombreArchivo, tipo, fechaCreacion, fechaModificacion, autor):
        self.nombreArchivo = nombreArchivo
        self.tipo = tipo
        self.fechaCreacion = fechaCreacion
        self.fechaModificacion = fechaModificacion
        self.autor = autor

    def compartir(self):
        print("Archivo compartido")

class Proyecto(ABC):
    @abstractmethod
    def CrearProyecto(self, proyecto):
        pass

    @abstractmethod
    def GestionarProyecto(self, proyecto):
        pass

class Comentario(ABC):
    @abstractmethod
    def AgregarComentario(self, comentario):
        pass

class Archivo(ABC):
    @abstractmethod
    def CompartirArchivo(self, archivo):
        pass

class CrearProyectos(Proyecto):
    def CrearProyecto(self, proyecto):
        print("Proyecto creado")

    def GestionarProyecto(self, proyecto):
        print("Proyecto gestionado")

class AgregarComentarios(Comentario):
    def AgregarComentario(self, comentario):
        print("Comentario agregado")

class CompartirArchivos(Archivo):
    def CompartirArchivo(self, archivo):
        print("Archivo compartido")

def main():
    proyecto1 = DefinirProyecto("Proyecto 1", "Proyecto de prueba", "01/01/2021", "01/02/2021", "En proceso")
    comentario1 = AgregacionDeComentario("Autor 1", "01/01/2021", "Contenido 1")
    archivo1 = CompartirElArchivo("Archivo 1", "Documento", "01/01/2021", "01/01/2021", "Autor 1")

