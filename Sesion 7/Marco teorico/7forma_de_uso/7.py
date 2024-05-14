class DataReader:
    def __init__(self, filename):
        try:
            self.file = open(filename, 'r')
        except FileNotFoundError:
            raise RuntimeError("No se pudo abrir el archivo")

    def read_int(self):
        line = self.file.readline().strip()
        if not line:
            raise EOFError("Fin de archivo alcanzado")
        return int(line)

    def close(self):
        self.file.close()


try:
    reader = DataReader("datos.txt")
    x = reader.read_int()
    y = reader.read_int()
    z = reader.read_int()
    print("x =", x, ", y =", y, ", z =", z)
    reader.close()
except Exception as ex:
    print("Error:", ex)
    exit(1)
