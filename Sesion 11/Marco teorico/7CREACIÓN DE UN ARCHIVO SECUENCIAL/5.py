with open('personas.txt', 'w') as archivo_salida:
    archivo_salida.write("Juan Perez 30\n")
    archivo_salida.write("Maria Gomez 45\n")
    archivo_salida.write("Carlos Ruiz 35\n")
print("Datos escritos en el archivo correctamente.")

with open('personas.txt', 'r') as archivo_entrada:
    for linea in archivo_entrada:
        partes = linea.split()
        nombre = partes[0]
        apellido = partes[1]
        edad = int(partes[2])
        print(f"Nombre: {nombre} {apellido}, Edad: {edad}")
