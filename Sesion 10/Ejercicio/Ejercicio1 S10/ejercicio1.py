def imprimir_arreglo(arreglo):
    for elemento in arreglo:
        print(elemento, end=" ")
    print()

def ordenar_arreglo(arreglo):
    n = len(arreglo)
    for i in range(n - 1):
        min_idx = i
        for j in range(i + 1, n):
            if arreglo[j] < arreglo[min_idx]:
                min_idx = j
        if min_idx != i:
            arreglo[i], arreglo[min_idx] = arreglo[min_idx], arreglo[i]


arreglo_enteros = [5, 2, 7, 3, 1, 9]
print("Arreglo original:")
imprimir_arreglo(arreglo_enteros)

ordenar_arreglo(arreglo_enteros)
print("Arreglo ordenado:")
imprimir_arreglo(arreglo_enteros)

arreglo_dobles = [3.5, 1.2, 8.9, 2.3, 5.6]
print("Arreglo original:")
imprimir_arreglo(arreglo_dobles)

ordenar_arreglo(arreglo_dobles)
print("Arreglo ordenado:")
imprimir_arreglo(arreglo_dobles)
