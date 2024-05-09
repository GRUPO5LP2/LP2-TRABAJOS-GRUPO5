class Personaje:
    def __init__(self, nombre, descripcion):
        self.nombre = nombre
        self.descripcion = descripcion

class Bella(Personaje):
    def __init__(self):
        super().__init__("Bella", "Una joven inteligente y amable que ama los libros y sueña con aventuras.")

class Bestia(Personaje):
    def __init__(self):
        super().__init__("Bestia", "Un príncipe transformado en una horrible bestia como castigo por su arrogancia.")

class Castillo:
    def __init__(self):
        self.habitaciones = []

    def agregar_habitacion(self, habitacion):
        self.habitaciones.append(habitacion)

class Habitacion:
    def __init__(self, nombre):
        self.nombre = nombre
        self.objetos_encantados = []

    def agregar_objeto_encantado(self, objeto):
        self.objetos_encantados.append(objeto)

class ObjetoEncantado:
    def __init__(self, nombre, descripcion):
        self.nombre = nombre
        self.descripcion = descripcion

class RosaEncantada(ObjetoEncantado):
    def __init__(self):
        super().__init__("Rosa Encantada", "Una rosa mágica que simboliza la vida de la Bestia.")

class CuentoBellaYBestia:
    def __init__(self):
        self.bella = Bella()
        self.bestia = Bestia()
        self.castillo = Castillo()
        self.habitacion_principal = Habitacion("Habitación Principal")
        self.rosa_encantada = RosaEncantada()
        self.habitacion_principal.agregar_objeto_encantado(self.rosa_encantada)
        self.castillo.agregar_habitacion(self.habitacion_principal)

    def comenzar_historia(self):
        print("Inicio: Presentación de Bella y su vida en el pueblo.")
        print(f"{self.bella.nombre} es una joven que vive en un pequeño pueblo, amada por todos por su amabilidad y belleza.")
        print("Acción 1: Bella llega al castillo de la Bestia en lugar de su padre.")
        print(f"{self.bella.nombre} llega al castillo de la {self.bestia.nombre} en lugar de su padre, quien fue hecho prisionero por la Bestia.")
        print("Acción 2: La Bestia encierra a Bella en el castillo pero luego la trata con amabilidad.")
        print(f"Al principio, la {self.bestia.nombre} asusta a {self.bella.nombre}, pero con el tiempo, la trata con amabilidad y respeto.")
        print("Acción 3: Bella conoce a los objetos encantados del castillo.")
        print(f"{self.bella.nombre} explora el castillo y conoce a los objetos encantados, incluyendo la {self.rosa_encantada.nombre}.")
        print("Acción 4: Bella y la Bestia comienzan a desarrollar sentimientos el uno por el otro.")
        print(f"Con el tiempo, {self.bella.nombre} y la {self.bestia.nombre} comienzan a conocerse mejor y desarrollan sentimientos el uno por el otro.")
        print("Acción 5: La Bestia libera a Bella para que pueda salvar a su padre.")
        print(f"La {self.bestia.nombre} libera a {self.bella.nombre} para que pueda ir a salvar a su padre, quien está enfermo y en peligro.")
        print("Acción 6: Bella regresa al castillo para salvar a la Bestia de Gastón.")
        print(f"{self.bella.nombre} regresa al castillo para salvar a la {self.bestia.nombre} de Gastón, un hombre egoísta y cruel que busca matar a la Bestia.")
        print("Final: La Bestia se transforma de nuevo en príncipe y Bella y él viven felices para siempre.")
        print(f"Gracias al amor verdadero de {self.bella.nombre}, la maldición sobre la {self.bestia.nombre} se rompe y vuelve a su forma humana. Bella y el príncipe viven felices para siempre en el castillo.")
       
 
cuento = CuentoBellaYBestia()
cuento.comenzar_historia()
