class Clase:
    def __init__(self):
        self.variableEntera = 0
        self.variableFlotante = 0

    def getVariableEntera(self):
        return self.variableEntera

    def getVariableFlotante(self):
        return self.variableFlotante

objeto = Clase()
print(objeto.getVariableEntera())
print(objeto.getVariableFlotante())
