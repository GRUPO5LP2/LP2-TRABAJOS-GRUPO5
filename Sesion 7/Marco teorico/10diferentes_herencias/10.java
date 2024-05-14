import java.util.*;

class Base {
    public int publico = 10;
    protected int protegido = 20;
    private int privado = 30;
}

class DerivadaPublica extends Base {
    public void mostrar() {
        System.out.println("Herencia pública: " + publico + ", " + protegido);
    }
}

class DerivadaProtegida extends Base {
    public void mostrar() {
        System.out.println("Herencia protegida: " + publico + ", " + protegido);
    }
}

class DerivadaPrivada extends Base {
    public void mostrar() {
        System.out.println("Herencia privada: " + publico + ", " + protegido);
    }
}

public class Main {
    public static void main(String[] args) {
        DerivadaPublica d1 = new DerivadaPublica();
        d1.mostrar(); 

        DerivadaProtegida d2 = new DerivadaProtegida();

        DerivadaPrivada d3 = new DerivadaPrivada();
    }
}
