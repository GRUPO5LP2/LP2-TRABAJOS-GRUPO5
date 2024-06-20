def divide(numerador, denominador):
    if denominador == 0:
        raise RuntimeError("Error: No se puede dividir por cero.")
    return numerador // denominador


try:
    a = int(input("Ingrese el numerador: "))
    b = int(input("Ingrese el denominador: "))
        
    resultado = divide(a, b)
    print("Resultado:", resultado)
        
except RuntimeError as e:
    print(e)

