public class Persona {
    private String nombre;
    private int edad;

    // Constructor
    public Persona(String n, int e) {
        nombre = n;
        edad = e;
    }

    // Método para mostrar los detalles de la persona
    public void mostrarDetalles() {
        System.out.println("Nombre: " + nombre + ", Edad: " + edad);
    }

    public static void main(String[] args) {
        // Crear un objeto Persona utilizando el constructor
        Persona persona1 = new Persona("Juan", 30);

        // Llamar al método para mostrar los detalles de la persona
        persona1.mostrarDetalles();
    }
}
