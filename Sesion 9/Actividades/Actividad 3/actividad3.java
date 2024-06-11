abstract class Figura {
    public abstract void calcularArea();
}

class Circulo extends Figura {
    private final double pi = 3.14;
    private double area;
    private double radio;

    public Circulo(double r) {
        this.radio = r;
    }

    @Override
    public void calcularArea() {
        area = pi * Math.pow(radio, 2);
        System.out.println("El area del circulo es: " + area);
    }
}

class Rectangulo extends Figura {
    private double area;
    private double largo;
    private double ancho;

    public Rectangulo(double l, double a) {
        this.largo = l;
        this.ancho = a;
    }

    @Override
    public void calcularArea() {
        area = largo * ancho;
        System.out.println("El area del rectangulo es: " + area);
    }
}

class Triangulo extends Figura {
    private double area;
    private double base;
    private double altura;

    public Triangulo(double b, double a) {
        this.base = b;
        this.altura = a;
    }

    @Override
    public void calcularArea() {
        area = (base * altura) / 2;
        System.out.println("El area del triangulo es: " + area);
    }
}

public class actividad3 {
    public static void main(String[] args) {
        Figura[] arrayFiguras = new Figura[10];
        Circulo circulito = new Circulo(2.3);
        Rectangulo rectangulito = new Rectangulo(5, 13);
        Triangulo triangulito = new Triangulo(15, 20);

        arrayFiguras[0] = circulito;
        arrayFiguras[1] = rectangulito;
        arrayFiguras[2] = triangulito;

        for (int i = 0; i < 3; i++) {
            arrayFiguras[i].calcularArea();
        }
    }
}
