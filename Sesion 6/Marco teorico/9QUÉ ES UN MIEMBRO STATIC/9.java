class MiClase {
    static int contador = 0;

    MiClase() {
        contador++;
    }

    static void mostrarContador() {
        System.out.println("El contador es: " + contador);
    }
}

public class Main {
    public static void main(String[] args) {
        MiClase obj1 = new MiClase();
        MiClase obj2 = new MiClase();
        MiClase obj3 = new MiClase();

        // Llamada al método estático desde la clase (no se necesita una instancia)
        MiClase.mostrarContador();
    }
}
