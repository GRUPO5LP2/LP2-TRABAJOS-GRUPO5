import java.lang.Math;

public abstract class Figura {
    public abstract void dibujar();
    public abstract double calcularArea();
}

class Círculo extends Figura {
    private double radio;

    public Círculo(double r) {
        radio = r;
    }

    public void dibujar() {
        System.out.println("Dibujando un círculo");
    }

    public double calcularArea() {
        return Math.PI * radio * radio;
    }
}

class Rectángulo extends Figura {
    private double base, altura;

    public Rectángulo(double b, double h) {
        base = b;
        altura = h;
    }

    public void dibujar() {
        System.out.println("Dibujando un rectángulo");
    }

    public double calcularArea() {
        return base * altura;
    }
}

class Triangulo extends Figura {
    private double base, altura;

    public Triangulo(double b, double h) {
        base = b;
        altura = h;
    }

    public void dibujar() {
        System.out.println("Dibujando un triangulo");
    }

    public double calcularArea() {
        return 0.5 * base * altura;
    }
}

public class Main {
    public static void main(String[] args) {
        Rectángulo rectangulo = new Rectángulo(4, 6);
        rectangulo.dibujar();
        System.out.println("El area del rectángulo: " + rectangulo.calcularArea());

        Círculo circulo = new Círculo(5);
        circulo.dibujar();
        System.out.println("El area del círculo: " + circulo.calcularArea());

        Triangulo triangulo = new Triangulo(3, 8);
        triangulo.dibujar();
        System.out.println("El area del triangulo: " + triangulo.calcularArea());
    }
}

