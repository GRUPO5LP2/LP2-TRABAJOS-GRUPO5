// Clase PADRE
class Persona {
    public String nombre;
    public int edad;
    public double salario;
    protected String email;

    public Persona(String nombre, int edad, double salario, String email) {
        this.nombre = nombre;
        this.edad = edad;
        this.salario = salario;
        this.email = email;
    }
}

// Clases HIJO
class Empleado extends Persona {
    public Empleado(String nombre, int edad, double salario, String email) {
        super(nombre, edad, salario, email);
    }

    public String getEmail() {
        return email;
    }
}

class Cliente extends Persona {
    public Cliente(String nombre, int edad, double salario, String email) {
        super(nombre, edad, salario, email);
    }

    public String getEmail() {
        return email;
    }
}

// Main
public class Main {
    public static void main(String[] args) {
        Empleado emp = new Empleado("Mauricio Lazo", 12, 100.50, "maurowo@gmail.com");
        Cliente cli = new Cliente("Sebastián Monteagudo", 50, 20.0, "sebitas123@gmail.com");

        System.out.println("Empleado: " + emp.nombre + ", Edad: " + emp.edad + ", Salario: " + emp.salario + ", Email: " + emp.getEmail());
        System.out.println("Cliente: " + cli.nombre + ", Edad: " + cli.edad + ", Salario: " + cli.salario + ", Email: " + cli.getEmail());
    }
}