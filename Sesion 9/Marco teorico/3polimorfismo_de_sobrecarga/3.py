class Calculadora:
    def sumar(self, a, b):
        if isinstance(a, int) and isinstance(b, int):
            print("Sumando enteros...")
            return a + b
        elif isinstance(a, float) and isinstance(b, float):
            print("Sumando floats...")
            return a + b
        elif isinstance(a, str) and isinstance(b, str):
            print("Concatenando strings...")
            return a + b
        else:
            raise TypeError("Tipos de datos no soportados para la suma")

calc = Calculadora()
print(calc.sumar(5, 3))            # Llama a sumar y detecta enteros
print(calc.sumar(2.5, 3.7))         # Llama a sumar y detecta floats
print(calc.sumar("Hola", " mundo")) # Llama a sumar y detecta strings
