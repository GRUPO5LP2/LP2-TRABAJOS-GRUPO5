class Utilidades {
    static int sumar(int a, int b) {
        return a + b;
    }

    static void saludar() {
        System.out.println("¡Hola desde el método estático saludar!");
    }
}

public class Main {
    public static void main(String[] args) {
        // Llamando a un método estático sin necesidad de una instancia de la clase
        int resultado = Utilidades.sumar(3, 4);
        System.out.println("La suma es: " + resultado);

        // Llamando a otro método estático
        Utilidades.saludar();
    }
}
