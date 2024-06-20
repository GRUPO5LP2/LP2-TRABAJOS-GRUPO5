
nombre_archivo = input("Ingrese el nombre del archivo de texto: ")

try:
    with open(nombre_archivo, 'r') as archivo_entrada:
        for linea in archivo_entrada:
            print(linea, end='')
except FileNotFoundError:
    print(f"Error: No se pudo abrir el archivo {nombre_archivo}")