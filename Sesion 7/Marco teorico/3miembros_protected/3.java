import java.util.*;

class Persona {
    protected String nombre;
    protected int edad;

    public Persona(String _nombre, int _edad) {
        this.nombre = _nombre;
        this.edad = _edad;
    }

    public void saludar() {
        System.out.println("Hola, soy " + nombre + " y tengo " + edad + " años.");
    }
}

class Estudiante extends Persona {
    private int numero_estudiante;

    public Estudiante(String _nombre, int _edad, int _numero_estudiante) {
        super(_nombre, _edad);
        this.numero_estudiante = _numero_estudiante;
    }

    public void mostrarInfo() {
        System.out.println("Soy el estudiante número " + numero_estudiante + ".");
        System.out.println("Mi nombre es: " + nombre + " y tengo " + edad + " años.");
    }
}

public class Main {
    public static void main(String[] args) {
        Estudiante estudiante = new Estudiante("Juan", 20, 12345);
        estudiante.saludar(); 
        estudiante.mostrarInfo(); 
    }
}