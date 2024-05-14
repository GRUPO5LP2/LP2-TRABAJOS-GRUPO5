class Persona:
    def __init__(self, _nombre, _edad):
        self.nombre = _nombre
        self.edad = _edad

    def saludar(self):
        print("Hola, soy", self.nombre, "y tengo", self.edad, "años.")

class Estudiante(Persona):
    def __init__(self, _nombre, _edad, _numero_estudiante):
        super().__init__(_nombre, _edad)
        self.numero_estudiante = _numero_estudiante

    def mostrarInfo(self):
        print("Soy el estudiante número", self.numero_estudiante, ".")
        print("Mi nombre es:", self.nombre, "y tengo", self.edad, "años.")


estudiante = Estudiante("Juan", 20, 12345)
estudiante.saludar() 
estudiante.mostrarInfo()  