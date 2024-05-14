# Clase PADRE
class Persona:
    def __init__(self, nombre, edad, salario, email):
        self.nombre = nombre
        self.edad = edad
        self.salario = salario
        self._email = email  # Atributo protegido

# Clases HIJO
class Empleado(Persona):
    def __init__(self, nombre, edad, salario, email):
        super().__init__(nombre, edad, salario, email)

    def get_email(self):
        return self._email

class Cliente(Persona):
    def __init__(self, nombre, edad, salario, email):
        super().__init__(nombre, edad, salario, email)

    def get_email(self):
        return self._email

# Main
emp = Empleado("Mauricio Lazo", 12, 100.50, "maurowo@gmail.com")
cli = Cliente("Sebastián Monteagudo", 50, 20.0, "sebitas123@gmail.com")

print(f"Empleado: {emp.nombre}, Edad: {emp.edad}, Salario: {emp.salario}, Email: {emp.get_email()}")
print(f"Cliente: {cli.nombre}, Edad: {cli.edad}, Salario: {cli.salario}, Email: {cli.get_email()}")