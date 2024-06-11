abstract class Figura {
    public abstract double calcularArea();
}

class Circulo extends Figura {
    private double radio;
    
    public Circulo(double r) {
        radio = r;
    }
    
    @Override
    public double calcularArea() {
        return 3.14159 * radio * radio;
    }
}

class Rectangulo extends Figura {
    private double base, altura;
    
    public Rectangulo(double b, double h) {
        base = b;
        altura = h;
    }
    
    @Override
    public double calcularArea() {
        return base * altura;
    }
}

public class Main {
    public static void main(String[] args) {
        Figura[] figuras = new Figura[2];
        figuras[0] = new Circulo(5.0);
        figuras[1] = new Rectangulo(4.0, 6.0);
        
        for (Figura figura : figuras) {
            System.out.println("Área: " + figura.calcularArea());
        }
    }
}
