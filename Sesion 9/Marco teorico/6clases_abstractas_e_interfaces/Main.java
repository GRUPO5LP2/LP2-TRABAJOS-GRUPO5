interface Figura { // Interfaz Figura
    double calcularArea();
}

class Circulo implements Figura {
    private double radio;

    public Circulo(double r) {
        radio = r;
    }

    public double calcularArea() {
        return 3.14159 * radio * radio;
    }
}

class Rectangulo implements Figura {
    private double base, altura;

    public Rectangulo(double b, double h) {
        base = b;
        altura = h;
    }

    public double calcularArea() {
        return base * altura;
    }
}

public class Main {
    public static void main(String[] args) {
        Figura figura1 = new Circulo(5.0);
        Figura figura2 = new Rectangulo(4.0, 6.0);
        System.out.println("Área del círculo: " + figura1.calcularArea());
        System.out.println("Área del rectángulo: " + figura2.calcularArea());
    }
}
