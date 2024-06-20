try:
    with open('datos.txt', 'r') as archivo_entrada:
        for linea in archivo_entrada:
            partes = linea.split()
            nombre = partes[0]
            apellido = partes[1]
            edad = int(partes[2])
            print(f"Nombre: {nombre} {apellido}, Edad: {edad}")
except IOError:
    print("No se pudo abrir el archivo para lectura.")
