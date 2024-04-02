class Avion:
    def __init__(self, nombre, velocidad, combustible, salud):
        self.nombre = nombre
        self.velocidad = velocidad
        self.combustible = combustible
        self.salud = salud

    def despegar(self):
        print("Despegando...")

    def aterrizar(self):
        print("Aterrizando...")

    def volar(self):
        print("Volando...")

class Mision:
    def __init__(self, destino, duracion, tripulacion):
        self.destino = destino
        self.duracion = duracion
        self.tripulacion = tripulacion

    def iniciar(self):
        print("Iniciando mision...")

    def finalizar(self):
        print("Finalizando mision...")

    def abortar(self):
        print("Abortando mision...")

def menu_juego():
    print("1. Iniciar mision")
    print("2. Finalizar mision")
    print("3. Abortar mision")
    print("4. Despegar")
    print("5. Aterrizar")
    print("6. Volar")
    print("7. Verificar combustible")
    print("8. Verificar tripulacion")
    print("9. Salir")
    opcion = int(input("Ingrese una opcion: "))
    return opcion

tiempo_volado = 0
print("RECOMENDACIONES:")
print("- El combustible debe ser mayor a 20")
print("- La tripulacion debe ser mayor a 3")
print("- La mision se completara al volar 100 minutos")
print("- Si el combustible es menor a 10, fallaste en tu mision")
print("- Si el combustible es menor a 20, se recomienda abortar mision")
print("- Si la tripulacion es menor a 3, se recomienda abortar mision")
print("- Si la mision se aborta, fallaste en tu mision")
print()
nombre = input("Ingrese el nombre del avion: ")
velocidad = float(input("Ingrese la velocidad del avion: "))
combustible = float(input("Ingrese el combustible del avion: "))
salud = input("Ingrese la salud del avion: ")
avion = Avion(nombre, velocidad, combustible, salud)
print()
destino = input("Ingrese el destino de la mision: ")
duracion = input("Ingrese la duracion de la mision: ")
tripulacion = int(input("Ingrese la tripulacion de la mision: "))
mision = Mision(destino, duracion, tripulacion)
print()
while True:
    opcion = menu_juego()
    if avion.combustible < 10:
        print("El combustible es muy bajo, fallaste en tu mision.")
        break
    if opcion == 1:
        avion.despegar()
        avion.combustible -= 10
    elif opcion == 2:
        avion.aterrizar()
    elif opcion == 3:
        avion.volar()
        tiempo_volado += 10
        avion.combustible -= 5
        if tiempo_volado == 100:
            print("Mision completada!")
            break
    elif opcion == 4:
        mision.iniciar()
    elif opcion == 5:
        mision.finalizar()
    elif opcion == 6:
        mision.abortar()
        print("Mision fallida!")
        break
    elif opcion == 7:
        print("El combustible es de:", avion.combustible)
        if avion.combustible < 20:
            print("El combustible es menor a 20, se recomienda abortar mision")
    elif opcion == 8:
        print("La tripulacion es de:", mision.tripulacion)
        if mision.tripulacion < 3:
            print("La tripulacion es menor a 3, se recomienda abortar mision")
    elif opcion == 9:
        break
