class Contador:
    contador_total = 0

    def __init__(self):
        Contador.contador_total += 1
        self.id = Contador.contador_total

    @staticmethod
    def get_total_contadores():
        return Contador.contador_total

    def get_id(self):
        return self.id


c1 = Contador()
c2 = Contador()
c3 = Contador()

print("Total de contadores creados:", Contador.get_total_contadores())
print("ID de c1:", c1.get_id())
print("ID de c2:", c2.get_id())
print("ID de c3:", c3.get_id())