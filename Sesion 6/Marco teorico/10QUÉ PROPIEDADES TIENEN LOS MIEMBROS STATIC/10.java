class Ejemplo {
    static int contador = 0;

    Ejemplo() {
        contador++;
    }

    static void mostrarContador() {
        System.out.println("El contador es: " + contador);
    }
}

public class Main {
    public static void main(String[] args) {
        Ejemplo e1 = new Ejemplo();
        Ejemplo e2 = new Ejemplo();
        Ejemplo e3 = new Ejemplo();

        // Llamada al método estático desde la clase (no se necesita una instancia)
        Ejemplo.mostrarContador();
    }
}
