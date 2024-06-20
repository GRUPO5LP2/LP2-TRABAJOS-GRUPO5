with open('ejemplo.txt', 'w') as archivo_salida:
    archivo_salida.write("Hola, este es un ejemplo de escritura en un archivo.\n")
    archivo_salida.write("Esta es la segunda línea.\n")
print("Datos escritos en el archivo correctamente.")

with open('ejemplo.txt', 'r') as archivo_entrada:
    for linea in archivo_entrada:
        print(linea.strip())
