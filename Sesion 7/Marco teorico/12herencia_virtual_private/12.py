class A:
    def __init__(self, value):
        self.__x = value

    def display(self):
        print("Valor de x:", self.__x)

class B(A):
    def __init__(self, value):
        super().__init__(value)

    def show(self):
        self.display() 

objB = B(10)
objB.show() 