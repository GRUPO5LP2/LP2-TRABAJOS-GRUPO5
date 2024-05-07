class Persona {
    private String nombre;
    private int edad;

    public Persona(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public void mostrarInfo() {
        System.out.println("Nombre: " + nombre + ", Edad: " + edad);
    }
}

public class Main {
    public static void main(String[] args) {
        Persona[] personas = {
            new Persona("Juan", 25),
            new Persona("María", 30),
            new Persona("Carlos", 40)
        };

        for (Persona persona : personas) {
            persona.mostrarInfo();
        }
    }
}
