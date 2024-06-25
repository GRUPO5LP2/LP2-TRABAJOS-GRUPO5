vec = [3, 1, 4, 1, 5, 9]
vec.sort()
for val in vec:
    print(val, end=" ")  
print()

vec = [3, 1, 4, 1, 5, 9]
elemento = 4
if elemento in vec:
    print(f"Encontrado: {elemento}")  
else:
    print("No encontrado")

vec = [3, 1, 4, 1, 5, 9]
def print_func(val):
    print(val, end=" ")

list(map(print_func, vec))  
print()

vec = [3, 1, 4, 1, 5, 9]
suma = sum(vec)
print(f"Suma: {suma}")  
