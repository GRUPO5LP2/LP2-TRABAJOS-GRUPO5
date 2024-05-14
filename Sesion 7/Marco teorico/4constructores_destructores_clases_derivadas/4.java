import java.util.*;

class Base {
    public Base() {
        System.out.println("Constructor de la clase base");
    }

    public void finalize() {
        System.out.println("Destructor de la clase base");
    }
}

class Derivada extends Base {
    public Derivada() {
        System.out.println("Constructor de la clase derivada");
    }

    public void finalize() {
        System.out.println("Destructor de la clase derivada");
    }
}

public class Main {
    public static void main(String[] args) {
        Derivada obj = new Derivada();
    }
}
