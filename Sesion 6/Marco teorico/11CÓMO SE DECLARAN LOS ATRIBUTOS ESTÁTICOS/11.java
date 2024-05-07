class Contador {
    static int contador = 0;

    Contador() {
        contador++;
    }
}

public class Main {
    public static void main(String[] args) {
        Contador c1 = new Contador();
        Contador c2 = new Contador();
        Contador c3 = new Contador();

        System.out.println("El contador es: " + Contador.contador);
    }
}
