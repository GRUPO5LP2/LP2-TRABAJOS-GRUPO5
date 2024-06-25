from collections import deque

# Declaración del contenedor deque para almacenar la cadena de caracteres
caracteres = deque()

# Pedir al usuario que ingrese una cadena de caracteres
input_str = input("Ingrese una cadena de caracteres: ")

# Almacenar cada carácter en el deque
for c in input_str:
    caracteres.append(c)

# Mostrar los caracteres originales utilizando un iterador
print("Caracteres originales:", ''.join(caracteres))

# Reemplazar todas las vocales por '*'
vocales = 'aeiouAEIOU'
for i in range(len(caracteres)):
    if caracteres[i] in vocales:
        caracteres[i] = '*'

# Mostrar los caracteres después de reemplazar las vocales
print("Caracteres después de reemplazar vocales:", ''.join(caracteres))

# Mostrar los caracteres en orden inverso utilizando un iterador inverso
print("Caracteres en orden inverso:", ''.join(reversed(caracteres)))
