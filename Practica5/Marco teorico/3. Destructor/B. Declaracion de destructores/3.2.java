public class MiClase {
    private String nombre;

    public MiClase(String n) {
        nombre = n;
        System.out.println("Constructor llamado para " + nombre);
    }

    public void mostrarNombre() {
        System.out.println("Nombre: " + nombre);
    }

}

public class Main {
    public static void main(String[] args) {
        {
  
            MiClase objeto = new MiClase("Objeto 1");

            objeto.mostrarNombre();
        }
    }
}
