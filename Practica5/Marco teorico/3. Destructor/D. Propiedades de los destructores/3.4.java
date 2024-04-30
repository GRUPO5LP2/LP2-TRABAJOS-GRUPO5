public class Ejemplo {
    private String nombre;

    public Ejemplo(String n) {
        nombre = n;
        System.out.println("Constructor llamado para " + nombre);
    }

    public void mostrarNombre() {
        System.out.println("Nombre: " + nombre);
    }

    public static void main(String[] args) {
        System.out.println("Creación de objetos:");
        Ejemplo objeto1 = new Ejemplo("Objeto 1");
        Ejemplo objeto2 = new Ejemplo("Objeto 2");

        System.out.println("\nMétodos llamados:");
        objeto1.mostrarNombre();
        objeto2.mostrarNombre();

        System.out.println("\nFin del ámbito de objeto2:");

        {
            Ejemplo objeto3 = new Ejemplo("Objeto 3");
        } // Al llegar al final del ámbito, se llama al destructor de objeto3

        System.out.println("\nFin del ámbito de objeto1:");
    }
}
