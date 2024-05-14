import java.util.*;

class Base1 {
    public Base1() {
        System.out.println("Constructor de Base1");
    }

    public void finalize() {
        System.out.println("Destructor de Base1");
    }
}

class Base2 {
    public Base2() {
        System.out.println("Constructor de Base2");
    }

    public void finalize() {
        System.out.println("Destructor de Base2");
    }
}

class Derivada extends Base1 {
    Base2 base2;

    public Derivada() {
        base2 = new Base2();
        System.out.println("Constructor de Derivada");
    }

    public void finalize() {
        System.out.println("Destructor de Derivada");
    }
}

public class Main {
    public static void main(String[] args) {
        Derivada obj = new Derivada();
        obj = null;
        System.gc();
    }
}
