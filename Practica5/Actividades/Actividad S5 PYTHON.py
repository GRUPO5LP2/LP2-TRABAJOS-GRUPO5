class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
        print(f"Se creo a la persona : {self.nombre}, con: {self.edad} años")

    def __del__(self):
        print(f"Persona Borrada: {self.nombre}")

    def getNombre(self):
        return self.nombre

    def getEdad(self):
        return self.edad

class Direccion:
    def __init__(self, calle, numero):
        self.calle = calle
        self.numero = numero
        print(f"Se Creo la CASA en: {self.calle}, con el número: {self.numero}")

    def __del__(self):
        print(f"Casa demolida: {self.calle} {self.numero}")

    def getCalle(self):
        return self.calle

    def getNumero(self):
        return self.numero

class EstudianteUniversitario:
    def __init__(self, nombre, edad, universidad, calle, numero):
        self.persona = Persona(nombre, edad)
        self.universidad = universidad
        self.direccion = Direccion(calle, numero)
        print(f"Nuevo estudiante universitario nombre: {self.persona.getNombre()}, edad: {self.persona.getEdad()} años, su uni es: {self.universidad}")

    def __del__(self):
        print(f"Estudiante universitario: {self.persona.getNombre()}, Abandono la uni: {self.universidad}")

    def getNombrePersona(self):
        return self.persona.getNombre()

    def getEdadPersona(self):
        return self.persona.getEdad()

    def getUniversidad(self):
        return self.universidad

    def getDireccion(self):
        return self.direccion

estudiante = EstudianteUniversitario("Iván Reaño", 20, "Universidad Sideral Carrión", "Calle Los Dibujitos", 17)
print(f"Nombre: {estudiante.getNombrePersona()}")
print(f"Edad: {estudiante.getEdadPersona()}")
print(f"Universidad: {estudiante.getUniversidad()}")
print(f"Dirección: {estudiante.getDireccion().getCalle()} {estudiante.getDireccion().getNumero()}")

