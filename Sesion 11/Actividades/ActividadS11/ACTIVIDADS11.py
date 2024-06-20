import csv

class Producto:
    def __init__(self, nombre="", precio=0.0, cantidad=0):
        if precio < 0 or cantidad < 0:
            raise ValueError("Precio y cantidad deben ser valores no negativos.")
        self.nombre = nombre
        self.precio = precio
        self.cantidad = cantidad

    def getNombre(self):
        return self.nombre

    def getPrecio(self):
        return self.precio

    def getCantidad(self):
        return self.cantidad

    def setNombre(self, nombre):
        self.nombre = nombre

    def setPrecio(self, precio):
        if precio < 0:
            raise ValueError("El precio no puede ser negativo.")
        self.precio = precio

    def setCantidad(self, cantidad):
        if cantidad < 0:
            raise ValueError("La cantidad no puede ser negativa.")
        self.cantidad = cantidad

    def mostrarInfo(self):
        print(f"Nombre: {self.nombre}, Precio: {self.precio}, Cantidad: {self.cantidad}")

    def leerDesdeCSV(self, linea):
        datos = linea.split(',')
        self.nombre = datos[0]
        self.precio = float(datos[1])
        self.cantidad = int(datos[2])

    def escribirEnCSV(self):
        return f"{self.nombre},{self.precio},{self.cantidad}\n"


def cargarIndice(indice, nombreArchivo):
    try:
        with open(nombreArchivo, 'r') as archivo:
            reader = csv.reader(archivo)
            pos = archivo.tell()
            for linea in reader:
                producto = Producto()
                producto.leerDesdeCSV(','.join(linea))
                indice[producto.getNombre()] = pos
                pos = archivo.tell()
    except FileNotFoundError:
        raise RuntimeError("No se pudo abrir el archivo.")


def agregarProducto(nombreArchivo, producto, indice):
    with open(nombreArchivo, 'a', newline='') as archivo:
        writer = csv.writer(archivo)
        pos = archivo.tell()
        writer.writerow([producto.getNombre(), producto.getPrecio(), producto.getCantidad()])
        indice[producto.getNombre()] = pos


def buscarProducto(nombreArchivo, indice, nombre):
    if nombre in indice:
        with open(nombreArchivo, 'r') as archivo:
            archivo.seek(indice[nombre])
            reader = csv.reader(archivo)
            linea = next(reader)
            producto = Producto()
            producto.leerDesdeCSV(','.join(linea))
            return producto
    else:
        raise RuntimeError("Producto no encontrado.")


def actualizarProducto(nombreArchivo, indice, nombre, nuevoPrecio, nuevaCantidad):
    if nombre in indice:
        with open(nombreArchivo, 'r+', newline='') as archivo:
            archivo.seek(indice[nombre])
            writer = csv.writer(archivo)
            writer.writerow([nombre, nuevoPrecio, nuevaCantidad])
            indice[nombre] = archivo.tell()
    else:
        raise RuntimeError("Producto no encontrado.")


def generarInforme(nombreArchivo):
    try:
        with open(nombreArchivo, 'r') as archivo:
            reader = csv.reader(archivo)
            print("Informe del inventario:")
            for linea in reader:
                producto = Producto()
                producto.leerDesdeCSV(','.join(linea))
                producto.mostrarInfo()
    except FileNotFoundError:
        raise RuntimeError("No se pudo abrir el archivo.")


def main():
    indice = {}
    nombreArchivo = "inventario.csv"

    try:
        # Crear archivo de inventario y cargar índice
        cargarIndice(indice, nombreArchivo)

        # Agregar productos al inventario
        try:
            agregarProducto(nombreArchivo, Producto("Producto1", 10.0, 100), indice)
            agregarProducto(nombreArchivo, Producto("Producto2", 20.0, 50), indice)
        except ValueError as e:
            print(f"Error al agregar producto: {e}")

        # Buscar y mostrar un producto
        try:
            productoEncontrado = buscarProducto(nombreArchivo, indice, "Producto1")
            productoEncontrado.mostrarInfo()
        except RuntimeError as e:
            print(f"Error al buscar producto: {e}")

        # Actualizar información de un producto
        try:
            actualizarProducto(nombreArchivo, indice, "Producto1", 12.0, 90)
        except RuntimeError as e:
            print(f"Error al actualizar producto: {e}")

        # Generar informe
        generarInforme(nombreArchivo)
    except RuntimeError as e:
        print(f"Error del sistema: {e}")


if __name__ == "__main__":
    main()
