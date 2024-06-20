import struct
class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

def escribir_personas():
    personas = [
        Persona("Juan Perez", 30),
        Persona("Maria Gomez", 45),
        Persona("Carlos Ruiz", 35)
    ]

    with open('personas.dat', 'wb') as archivo_salida:
        for persona in personas:
            datos_persona = struct.pack('50s i', persona.nombre.encode('utf-8'), persona.edad)
            archivo_salida.write(datos_persona)

    print("Datos escritos en el archivo correctamente.")

def leer_persona(indice):
    try:
        with open('personas.dat', 'rb') as archivo_entrada:
            desplazamiento = indice * struct.calcsize('50s i')
            archivo_entrada.seek(desplazamiento)
            datos_persona = archivo_entrada.read(struct.calcsize('50s i'))
            nombre, edad = struct.unpack('50s i', datos_persona)
            nombre = nombre.decode('utf-8').strip('\x00')  # Decodificar y eliminar caracteres nulos
            print(f"Nombre: {nombre}, Edad: {edad}")
    except FileNotFoundError:
        print("No se pudo abrir el archivo para lectura.")


escribir_personas()

print("\nLeer persona en posición 0:")
leer_persona(0)

print("\nLeer persona en posición 1:")
leer_persona(1)

print("\nLeer persona en posición 2:")
leer_persona(2)

