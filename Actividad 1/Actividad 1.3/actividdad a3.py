class Estudiantes:
    def __init__(self, nameEstudiante, edadEstudiante, gradoEstudiante):
        self.nombre = nameEstudiante
        self.edad = edadEstudiante
        self.grado = gradoEstudiante

    def tomarExamen(self):
        print("Tomando Evaluación...")

    def calificarExamen(self):
        print("Examen Calificado :)")

escolar1 = Estudiantes("Mauricio", 15, 4)
escolar2 = Estudiantes("Oscar", 20, 2)
escolar1.tomarExamen()
escolar2.calificarExamen()

