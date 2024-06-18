from typing import List, TypeVar

T = TypeVar('T')

class Recipiente:
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
recipiente_enteros = Recipiente(arreglo_enteros)

print("\nArreglo de enteros original:")
recipiente_enteros.imprimir_arreglo()

print("\nArreglo de enteros ordenado:")
recipiente_enteros.ordenar_arreglo()
recipiente_enteros.imprimir_arreglo()

arreglo_dobles = ["Siempre buenos dias", "Ingeniero", "Oscar", "Pongame", "20", "porfavor"]
recipiente_dobles = Recipiente(arreglo_dobles)

print("\nArreglo de strings original:")
recipiente_dobles.imprimir_arreglo()

print("\nArreglo de strings ordenado:")
recipiente_dobles.ordenar_arreglo()
recipiente_dobles.imprimir_arreglo()