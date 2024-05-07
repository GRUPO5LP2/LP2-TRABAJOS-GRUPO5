class Circulo {
    private double radio;
    
    public Circulo(double r) {
        this.radio = r;
    }
    
    public double obtenerRadio() {
        return this.radio;
    }
}

public class Main {
    public static double calcularArea(Circulo c) {
        final double pi = 3.1416;
        return pi * c.obtenerRadio() * c.obtenerRadio();
    }

    public static void main(String[] args) {
        Circulo circulo1 = new Circulo(5.0);
        Circulo circulo2 = new Circulo(7.0);

        System.out.println("Área del círculo 1: " + calcularArea(circulo1));
        System.out.println("Área del círculo 2: " + calcularArea(circulo2));
    }
}
