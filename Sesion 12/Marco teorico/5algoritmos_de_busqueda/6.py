def find(vec, value):
    try:
        index = vec.index(value)
        return vec[index]
    except ValueError:
        return None

vec = [3, 1, 4, 1, 5, 9]
result = find(vec, 4)
if result is not None:
    print(f"Encontrado: {result}")  
else:
    print("No encontrado")

def find_if(vec, condition):
    for val in vec:
        if condition(val):
            return val
    return None

def is_even(n):
    return n % 2 == 0

vec = [3, 1, 4, 1, 5, 9]
result = find_if(vec, is_even)
if result is not None:
    print(f"Encontrado: {result}")  
else:
    print("No encontrado")

vec = [1, 2, 3, 4, 5, 6]
found = 4 in vec
if found:
    print("Encontrado")  
else:
    print("No encontrado")

import bisect

vec = [1, 2, 3, 4, 5, 6]
index = bisect.bisect_left(vec, 4)
if index < len(vec):
    print(f"Encontrado: {vec[index]}")  
else:
    print("No encontrado")

import bisect

vec = [1, 2, 3, 4, 5, 6]
index = bisect.bisect_right(vec, 4)
if index < len(vec):
    print(f"Encontrado: {vec[index]}")  
else:
    print("No encontrado")

import bisect

vec = [1, 2, 2, 2, 3, 4, 5]
left_index = bisect.bisect_left(vec, 2)
right_index = bisect.bisect_right(vec, 2)
for i in range(left_index, right_index):
    print(vec[i], end=" ")  
print()