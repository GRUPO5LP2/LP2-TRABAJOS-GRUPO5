class Alumno:
    def __init__(self, nombre, edad, promedio):
        self.nombre = nombre
        self.edad = edad
        self.promedio = promedio

    def __str__(self):
        print("Nombre: ", self.nombre)
        print("Edad: ", self.edad)
        print("Promedio: ", self.promedio)
    
    def __lt__(self, otro):
        if self.promedio < otro.promedio:
            return True

class Grupo:    
    def __init__(self, cantidad):
        self.cantidad = cantidad
        self.alumnos = []
        
    def __str__(self):
        print(f"Hay {self.cantidad} alumnos, estos son:")
        for alumno in self.alumnos:
            print("Nombre: ", alumno.nombre)
            print("Edad: ", alumno.edad)
            print("Promedio: ", alumno.promedio)
    
    def agregar_alumno(self, nombre, edad, promedio):
        if len(self.alumnos) < self.cantidad:
            self.alumnos.append(Alumno(nombre, edad, promedio))
            print(f"Alumno {nombre} agregado al grupo.")
        else:
            print(f"El grupo está lleno, no se pudo agregar al alumno {nombre}.")
    
    def ordena_por_promedios(self):
        n = len(self.alumnos)
        print("Antes de ordenar")
        for indice, alumno in enumerate(self.alumnos, start=1):
            print(f"Índice: {indice}, Nombre: {alumno.nombre}, Promedio: {alumno.promedio}")
        for i in range(n):
            for j in range(0, n-i-1):
                if self.alumnos[j].promedio > self.alumnos[j+1].promedio:
                    self.alumnos[j], self.alumnos[j+1] = self.alumnos[j+1], self.alumnos[j]

        # Imprimir la lista ordenada con sus respectivos índices
        print("Después de ordenar")
        for indice, alumno in enumerate(self.alumnos, start=1):
            print(f"Índice: {indice}, Nombre: {alumno.nombre}, Promedio: {alumno.promedio}")

        
    def promedio_grupo(self):
        suma = 0
        for alumno in self.alumnos:
            suma += alumno.promedio
        print(f"El promedio de los promedios de los alumnos es: {suma / self.cantidad}")
    
    def mayor_promedio(self):
        promedio = 0
        promedio = self.alumnos[0].promedio
        for alumno in self.alumnos:
            if alumno.promedio > promedio:
                promedio = alumno.promedio
        print(f"El mayor promedio de todos los promedios es: {promedio}")
    
    
grupo = Grupo(5)
grupo.agregar_alumno("Mauricio", 15, 15.5)
grupo.agregar_alumno("Ivan", 25, 16)
grupo.agregar_alumno("Oscar", 18, 0.5)
grupo.agregar_alumno("Renzo", 19, 18)
grupo.agregar_alumno("Sebastian", 19, 11.5)
grupo.agregar_alumno("Paolo", 19, 20)
grupo.__str__()
grupo.promedio_grupo()
grupo.mayor_promedio()
grupo.ordena_por_promedios()