from typing import List, TypeVar

T = TypeVar('T')

class Arreglo:
    def __init__(self, arr: List[T]):
        self.arreglo = arr

    def imprimir_arreglo(self) -> None:
        for elemento in self.arreglo:
            print(elemento, end=" ")
        print()

    def ordenar_arreglo(self) -> None:
        numero_total = len(self.arreglo)
        for i in range(numero_total - 1):
            indice_menor = i
            for j in range(i + 1, numero_total):
                if self.arreglo[j] < self.arreglo[indice_menor]:
                    indice_menor = j
            if indice_menor != i:
                self.arreglo[i], self.arreglo[indice_menor] = self.arreglo[indice_menor], self.arreglo[i]


arreglo_enteros = [5, 2, 7, 3, 1, 9]
arreglo_obj_enteros = Arreglo(arreglo_enteros)

print("\nArreglo original:")
arreglo_obj_enteros.imprimir_arreglo()

print("\nArreglo ordenado:")
arreglo_obj_enteros.ordenar_arreglo()
arreglo_obj_enteros.imprimir_arreglo()

arreglo_dobles = [20.4, 20.3, 20.7, 20.3, 20.2]
arreglo_obj_dobles = Arreglo(arreglo_dobles)

print("\nArreglo double original:")
arreglo_obj_dobles.imprimir_arreglo()

print("\nArreglo double ordenado:")
arreglo_obj_dobles.ordenar_arreglo()
arreglo_obj_dobles.imprimir_arreglo()