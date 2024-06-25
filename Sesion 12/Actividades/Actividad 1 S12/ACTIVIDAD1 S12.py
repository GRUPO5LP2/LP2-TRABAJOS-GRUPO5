def main():
    numeros = []
    
    # Ingreso de números
    print("Ingrese números enteros (ingrese 0 para terminar):")
    while True:
        num = int(input())
        if num == 0:
            break
        numeros.append(num)
    
    # a) Calcular la suma de todos los números
    suma = sum(numeros)
    
    # b) Encontrar el número máximo y mínimo en la lista
    min_num = min(numeros)
    max_num = max(numeros)
    
    # c) Ordenar los números de forma ascendente
    numeros.sort()
    
    # d) Eliminar los números pares del contenedor
    numeros = [x for x in numeros if x % 2 != 0]
    
    # Mostrar resultados
    print(f"Suma de todos los números: {suma}")
    print(f"Número mínimo: {min_num}")
    print(f"Número máximo: {max_num}")
    print("Números ordenados y sin pares: ", end="")
    print(" ".join(map(str, numeros)))

if __name__ == "__main__":
    main()
