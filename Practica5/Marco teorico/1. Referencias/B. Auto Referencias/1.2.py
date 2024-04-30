class Clase:
    def __init__(self):
        self.variableEntera = 0
        self.variableFlotante = 0

    def getVariableEntera(self):
        return self.variableEntera

    def getVariableFlotante(self):
        return self.variableFlotante

    def sumaEntero(self, n):
        self.variableEntera += n
        return self

    def sumaFlotante(self, n):
        self.variableFlotante += n
        return self

objeto = Clase()
print(objeto.getVariableEntera())
print(objeto.getVariableFlotante())
objeto.sumaEntero(5).sumaFlotante(3.5)
print(objeto.getVariableEntera())
print(objeto.getVariableFlotante())
