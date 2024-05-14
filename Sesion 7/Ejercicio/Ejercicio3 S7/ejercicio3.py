class Movil:
    def __init__(self, marca, modelo, sistema_operativo):
        self.marca = marca
        self.modelo = modelo
        self.sistema_operativo = sistema_operativo

    def __del__(self):
        print("Movil destruido")

class Telefono(Movil):
    def __init__(self, marca, modelo, sistema_operativo, precio):
        super().__init__(marca, modelo, sistema_operativo)
        self.precio = precio

    def __del__(self):
        print("Telefono destruido")

class Tablet(Movil):
    def __init__(self, marca, modelo, sistema_operativo, dueno):
        super().__init__(marca, modelo, sistema_operativo)
        self.dueno = dueno

    def __del__(self):
        print("Tablet destruida")



tablet1 = Tablet("Lenovo", "Tab P11 pro", "Android", "Mauricio")                    # Instanciando objeto Tablet
telefono1 = Telefono("Xiaomi", "Redmi Note 13 Pro Plus 5g", "Android", 1599.99)     # Instanciando objeto Telefono
# del tablet1       Con esta línea se destruye el objeto tablet1
# del telefono1     Con esta línea se destruye el objeto telefono1

#AL ACABAR EL PROGRAMA AMBOS OBJETOS SE DESTRUYEN.