public abstract class FiguraGeometrica {
    public abstract double area();
    public abstract double perimetro();
}

class Circulo extends FiguraGeometrica {
    private double radio;
    private final double PI = 3.1416;

    public Circulo(double r) {
        radio = r;
    }

    public double area() {
        return PI * radio * radio;
    }

    public double perimetro() {
        return 2 * PI * radio;
    }
}

class Rectangulo extends FiguraGeometrica {
    private double base;
    private double altura;

    public Rectangulo(double b, double a) {
        base = b;
        altura = a;
    }

    public double area() {
        return base * altura;
    }

    public double perimetro() {
        return 2 * altura + 2 * base;
    }
}

class Triangulo extends FiguraGeometrica {
    private double ladoa;
    private double ladob;
    private double ladoc;
    private double base;
    private double altura;
    private boolean esRectangulo;

    public Triangulo(double a, double b, double c) {
        ladoa = a;
        ladob = b;
        ladoc = c;
        base = 0;
        altura = 0;
        esRectangulo = false;
    }

    public Triangulo(double b, double a) {
        base = b;
        altura = a;
        esRectangulo = true;
        ladoa = 0;
        ladob = 0;
        ladoc = 0;
    }

    public double area() {
        if (esRectangulo) {
            return base * altura / 2;
        } else {
            double p = (ladoa + ladob + ladoc) / 2;
            double area = Math.sqrt(p * (p - ladoa) * (p - ladob) * (p - ladoc));
            return area;
        }
    }

    public double perimetro() {
        if (esRectangulo) {
            return base + altura + (Math.sqrt(altura + altura + base * base));
        } else {
            return ladoa + ladob + ladoc;
        }
    }
}

public class Main {
    public static void main(String[] args) {
        FiguraGeometrica circulito = new Circulo(17);
        FiguraGeometrica rectangulito = new Rectangulo(12, 15);
        FiguraGeometrica triangulito = new Triangulo(4, 3, 2);
        FiguraGeometrica tringulitoRectangulito = new Triangulo(3, 2);

        FiguraGeometrica[] arreglodefiguraspro = {circulito, rectangulito, triangulito, tringulitoRectangulito};

        for (FiguraGeometrica figura : arreglodefiguraspro) {
            System.out.println("El área es: " + figura.area() + " u^2.");
            System.out.println("El Perímetro es: " + figura.perimetro() + " u.");
        }
    }
}
