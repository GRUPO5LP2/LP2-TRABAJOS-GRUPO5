public class Persona {
    private String nombre;

    // Constructor
    public Persona(String n) {
        nombre = n;
        System.out.println("Constructor llamado para " + nombre);
    }

    // Método para mostrar el nombre de la persona
    public void mostrarNombre() {
        System.out.println("Nombre: " + nombre);
    }

    // Destructor (no es necesario en Java)
}

public class Main {
    public static void main(String[] args) {
        // Crear un objeto Persona
        Persona persona1 = new Persona("Juan");

        // Llamar al método para mostrar el nombre de la persona
        persona1.mostrarNombre();

        // No es necesario liberar la memoria en Java (lo hace el recolector de basura)
    }
}

