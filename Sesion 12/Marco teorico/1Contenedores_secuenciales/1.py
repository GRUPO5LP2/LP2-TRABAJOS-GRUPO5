vec = [1, 2, 3, 4, 5]
vec.append(6)
print(vec[0])

from collections import deque

deq = deque([1, 2, 3, 4, 5])
deq.appendleft(0)
deq.append(6)
print(deq[0])

lista1 = [1, 2, 3, 4, 5]
lista1.append(6)
lista1.insert(0, 0)
for valor in lista1:
    print(valor, end=" ")

flst = [1, 2, 3, 4, 5]
flst.insert(0, 0)
for val in flst:
    print(val, end=" ")