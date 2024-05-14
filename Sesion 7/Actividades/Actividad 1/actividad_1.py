class Cliente:
    def __init__(self, nombre, apellido, correo, direccion, numero_tarjeta):
        self.nombre = nombre
        self.apellido = apellido
        self.correo = correo
        self.direccion = direccion
        self.numero_tarjeta = numero_tarjeta

    def obtener_informacion(self):
        info = ""
        info += "Nombre: " + self.nombre + "\n"
        info += "Apellido: " + self.apellido + "\n"
        info += "Correo: " + self.correo + "\n"
        info += "Direccion: " + self.direccion + "\n"
        info += "Numero de tarjeta: " + self.numero_tarjeta + "\n"
        return info

class ClienteSeguro(Cliente):
    def __init__(self, nombre, apellido, correo, direccion, numero_tarjeta):
        super().__init__(nombre, apellido, correo, direccion, numero_tarjeta)

    def encriptar_informacion(self):
        encriptacion = ""
        for c in self.correo:
            encriptacion += str(ord(c)) # Convierte cada letra en ASCII
        return encriptacion

    def verificar_autenticidad(self, correo_ingresado, numero_tarjeta_ingresado):
        return correo_ingresado == self.correo and numero_tarjeta_ingresado == self.numero_tarjeta

cliente_seguro1 = ClienteSeguro("goku", "sayayin 1000", "gokulegana@hotmail_gmail_twitter.com", "Bajo un Puente", "1234 5678 9012 3456")

print("Informacion del cliente:")
print(cliente_seguro1.obtener_informacion())

print("Informacion encriptada:", cliente_seguro1.encriptar_informacion())

autenticado = cliente_seguro1.verificar_autenticidad("gokulegana@hotmail_gmail_twitter.com", "1234 5678 9012 3456")
print("Cliente autenticado:", "Si" if autenticado else "No")
