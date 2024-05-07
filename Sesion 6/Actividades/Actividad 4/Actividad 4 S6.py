class Vector2D:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __add__(self, other):
        return Vector2D(self.x + other.x, self.y + other.y)
    
    def __sub__(self, other):
        return Vector2D(self.x - other.x, self.y - other.y)
    
    def print(self):
        print(f"({self.x}, {self.y})")

vec1 = Vector2D(3.0, 4.0)
vec2 = Vector2D(1.0, 2.0)

suma = vec1 + vec2
resta = vec1 - vec2

print("Suma: ", end="")
suma.print()
print("Resta: ", end="")
resta.print()
