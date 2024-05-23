class Reproductor:
    def reproducir(self):
        pass

    def pausar(self):
        pass

    def detener(self):
        pass

class ReproductorMP3(Reproductor):
    def __init__(self, dueno, bateria):
        self.dueno = dueno
        self.bateria = bateria

    def reproducir(self):
        print("Reproduciendo mix del duko 🥵...")

    def pausar(self):
        print("Como lo vas a pausar al duko?! Pausando reproducción...")

    def detener(self):
        print("No lo saques al dukooooooo!! Deteniendo reproducción...")

nombre = input("Ingrese su nombre: ")
bateria = int(input("Ingrese la bateria de su reproductor: "))

reproductor1 = ReproductorMP3(nombre, bateria)

while True:
    print("Seleccione qué acción desea tener con el Reproductor:")
    print("1. Reproducir música")
    print("2. Pausar música")
    print("3. Detener música")
    print("4. Salir")
    opcion = int(input("Elige tu opción: "))

    if opcion == 4:
        break
    elif opcion == 1:
        reproductor1.reproducir()
    elif opcion == 2:
        reproductor1.pausar()
    elif opcion == 3:
        reproductor1.detener()
