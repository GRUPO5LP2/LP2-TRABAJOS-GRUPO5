#CLASE PADRE
class Vehiculo:
    def __init__(self, marca, modelo, anio, precio):
        self.marca = marca
        self.modelo = modelo
        self.anio = anio
        self.precio = precio

    def mostrarDatos(self):
        print(f"Marca: {self.marca}")
        print(f"Modelo: {self.modelo}")
        print(f"Año: {self.anio}")
        print(f"Precio: {self.precio} Soles.")

#CLASES HIJOS
class Automovil(Vehiculo):
    def __init__(self, marca, modelo, anio, precio, numPuertas, tipoCombustible):
        super().__init__(marca, modelo, anio, precio)
        self.numPuertas = numPuertas
        self.tipoCombustible = tipoCombustible

    def mostrarDatos(self):
        super().mostrarDatos()
        print(f"Número de puertas: {self.numPuertas}")
        print(f"Tipo de combustible: {self.tipoCombustible}")

class Motocicleta(Vehiculo):
    def __init__(self, marca, modelo, anio, precio, cilindrada):
        super().__init__(marca, modelo, anio, precio)
        self.cilindrada = cilindrada

    def mostrarDatos(self):
        super().mostrarDatos()
        print(f"Cilindrada: {self.cilindrada}")

# Main
auto1 = Automovil("Kia", "Rio", 2020, 60000, 4, "Gasolina")
moto1 = Motocicleta("Honda", "CRF450R", 2021, 45000, 450)

print("Datos del Carro:")
auto1.mostrarDatos()

print("\nDatos de la Moto:")
moto1.mostrarDatos()