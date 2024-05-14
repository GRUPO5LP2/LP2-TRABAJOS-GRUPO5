class Base1:
    def __init__(self):
        print("Constructor de Base1")

    def __del__(self):
        print("Destructor de Base1")

class Base2:
    def __init__(self):
        print("Constructor de Base2")

    def __del__(self):
        print("Destructor de Base2")

class Derivada(Base1, Base2):
    def __init__(self):
        super().__init__()
        print("Constructor de Derivada")

    def __del__(self):
        super().__del__()
        print("Destructor de Derivada")


obj = Derivada()
obj = None
import gc
gc.collect()