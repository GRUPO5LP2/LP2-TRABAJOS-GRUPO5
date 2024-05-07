class Persona {
    private String nombre;
    private int edad;
    private char genero;

    public Persona(String n, int e, char g) {
        this.nombre = n;
        this.edad = e;
        this.genero = g;
    }

    public void mostrarDatos() {
        System.out.println("Nombre: " + nombre + ", Edad: " + edad + ", Género: " + genero);
    }
}

public class Main {
    public static void main(String[] args) {
        Persona[] personas = {
            new Persona("Juan", 25, 'M'),
            new Persona("María", 30, 'F'),
            new Persona("Pedro", 40, 'M')
        };

        for (Persona persona : personas) {
            persona.mostrarDatos();
        }
    }
}
