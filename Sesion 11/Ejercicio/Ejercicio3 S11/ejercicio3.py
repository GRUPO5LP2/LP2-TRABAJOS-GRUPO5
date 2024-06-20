import pickle

# Definición de la clase Persona
class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

# Función para serializar un objeto Persona en un archivo
def serializar_persona(persona, nombre_archivo):
    try:
        with open(nombre_archivo, 'wb') as file:
            pickle.dump(persona, file)
        print(f"Persona serializada correctamente en {nombre_archivo}")
    except IOError as e:
        print(f"No se pudo abrir el archivo para escritura: {e}")

# Función para deserializar un objeto Persona desde un archivo
def deserializar_persona(nombre_archivo):
    try:
        with open(nombre_archivo, 'rb') as file:
            persona = pickle.load(file)
            print(f"Persona deserializada desde {nombre_archivo}")
            print(f"Nombre: {persona.nombre}")
            print(f"Edad: {persona.edad}")
    except IOError as e:
        print(f"No se pudo abrir el archivo para lectura: {e}")
    except pickle.PickleError as e:
        print(f"Error al deserializar la persona: {e}")

if __name__ == "__main__":
    # Crear una instancia de Persona
    persona = Persona("Juan Perez", 30)

    # Serializar el objeto Persona en un archivo
    serializar_persona(persona, "persona.pickle")

    # Deserializar el objeto Persona desde el archivo
    deserializar_persona("persona.pickle")
