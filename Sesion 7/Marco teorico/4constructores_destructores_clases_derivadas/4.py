class Base:
    def __init__(self):
        print("Constructor de la clase base")

    def __del__(self):
        print("Destructor de la clase base")

class Derivada(Base):
    def __init__(self):
        super().__init__()
        print("Constructor de la clase derivada")

    def __del__(self):
        super().__del__()
        print("Destructor de la clase derivada")


obj = Derivada()
