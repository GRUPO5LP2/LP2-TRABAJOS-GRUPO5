vec = [1, 2, 3, 4, 5]
vec_copy = vec.copy()
for val in vec_copy:
    print(val, end=" ") 
print()

vec = [1, 2, 3, 4, 5]
vec_copy = [x for x in vec if x % 2 == 0]
for val in vec_copy:
    print(val, end=" ")  
print()

vec = ["hello", "world"]
vec_move = vec[:]
vec.clear()
for str in vec_move:
    print(str, end=" ")  
print()

vec = [1, 2, 3, 4, 5]
vec = [10 if x == 3 else x for x in vec]
for val in vec:
    print(val, end=" ")  
print()

vec = [1, 2, 3, 4, 5]
vec = [0 if x % 2 != 0 else x for x in vec]
for val in vec:
    print(val, end=" ")  
print()

vec = [1, 2, 3, 4, 5, 3]
vec = [x for x in vec if x != 3]
for val in vec:
    print(val, end=" ")  
print()

vec = [1, 2, 3, 4, 5]
vec = [x for x in vec if x % 2 == 0]
for val in vec:
    print(val, end=" ")  
print()
