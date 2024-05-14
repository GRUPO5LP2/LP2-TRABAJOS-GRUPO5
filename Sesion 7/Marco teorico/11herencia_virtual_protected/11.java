import java.util.*;

class Figura {
    public void dibujar() {
        System.out.println("Dibujando Figura");
    }
}

class Triangulo extends Figura {
    @Override
    public void dibujar() {
        System.out.println("Dibujando Triangulo");
    }
}

class Rectangulo extends Figura {
    @Override
    public void dibujar() {
        System.out.println("Dibujando Rectangulo");
    }
}

public class Main {
    public static void main(String[] args) {
        Triangulo t = new Triangulo();
        Rectangulo r = new Rectangulo();

        t.dibujar(); 
        r.dibujar(); 
    }
}
