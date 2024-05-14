class Cliente:
    def __init__(self, nombre, apellido, correo, direccion, numero_tarjeta):
        self._nombre = nombre
        self._apellido = apellido
        self._correo = correo
        self._direccion = direccion
        self._numero_tarjeta = numero_tarjeta

    def obtener_informacion(self):
        info = f"Nombre: {self._nombre}\n"
        info += f"Apellido: {self._apellido}\n"
        info += f"Correo: {self._correo}\n"
        info += f"Direccion: {self._direccion}\n"
        info += f"Numero de tarjeta: {self._numero_tarjeta}\n"
        return info

    def encriptar_informacion(self):
        encriptacion = "".join(str(ord(c)) for c in self._correo)
        return encriptacion


class ClienteSeguro(Cliente):
    def __init__(self, nombre, apellido, correo, direccion, numero_tarjeta, codigo_seguridad):
        super().__init__(nombre, apellido, correo, direccion, numero_tarjeta)
        self._codigo_seguridad = codigo_seguridad

    def verificar_autenticidad(self, correo_ingresado, numero_tarjeta_ingresado):
        return correo_ingresado == self._correo and numero_tarjeta_ingresado == self._numero_tarjeta

    def obtener_informacion_encriptada(self):
        return self.encriptar_informacion()


cliente_seguro = ClienteSeguro("goku", "sayayin 1000", "gokulegana@hotmail_gmail_twitter.com", "Bajo un Puente", "1234 5678 9012 3456", "ABC123")
print("Informacion del cliente:")
print(cliente_seguro.obtener_informacion())
print("Informacion encriptada:", cliente_seguro.obtener_informacion_encriptada())
autenticado = cliente_seguro.verificar_autenticidad("gokulegana@hotmail_gmail_twitter.com", "1234 5678 9012 3456")
print("Cliente autenticado:", "Si" if autenticado else "No")