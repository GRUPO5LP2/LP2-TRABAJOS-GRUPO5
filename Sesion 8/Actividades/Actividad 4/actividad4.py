class Vehiculo:
    def acelerar(self):
        print("Acelerando vehiculo")

class Coche(Vehiculo):
    def acelerar(self):
        print("Acelerando coche")
    
    def encenderLuces(self):
        print("Luces del coche encendidas")

class Motocicleta(Vehiculo):
    def acelerar(self):
        print("Acelerando motocicleta")

coche1 = Coche()                  # INSTANCIAMOS COCHE1 DE LA CLASE COCHE
motocicleta1 = Motocicleta()      # INSTANCIAMOS MOTOCICLETA1 DE LA CLASE MOTOCICLETA
coche1.acelerar()                 # LLAMAMOS AL METODO ACELERAR DE LA CLASE COCHE CON EL OBJETO INSTANCIADO COCHE1
motocicleta1.acelerar()           # LLAMAMOS AL METODO ACELERAR DE LA CLASE MOTOCICLETA CON EL OBJETO INSTANCIADO MOTOCICLETA1

coche1.encenderLuces()            # LLAMAMOS AL METODO ENCENDERLUCES DE LA CLASE COCHE
# motocicleta1.encenderLuces()    # LLAMAMOS AL METODO ENCENDERLUCES DE LA CLASE MOTOCICLETA Y AL NO EXISTIR SUELTA UN ERROR