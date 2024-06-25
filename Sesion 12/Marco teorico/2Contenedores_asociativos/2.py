mySet = {1, 2, 3, 4, 5}
mySet.add(6)
for val in mySet:
    print(val, end=" ")

myMap = {1: "One", 2: "Two", 3: "Three"}
for key, value in myMap.items():
    print(key, ": ", value, sep="")

myUnorderedSet = {5, 3, 1, 4, 2}
myUnorderedSet.add(6)
for val in myUnorderedSet:
    print(val, end=" ")

myUnorderedMap = {1: "One", 2: "Two", 3: "Three"}
for key, value in myUnorderedMap.items():
    print(key, ": ", value, sep="")
