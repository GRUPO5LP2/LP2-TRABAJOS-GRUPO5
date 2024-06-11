class Figuras {
    double Calcular_Area() {
        return 0;
    }

    double Calcular_Perimetro() {
        return 0;
    }

    void Mostrar_Figura() {
    }
}

class Circulo extends Figuras {
    double radio;
    final double pi = 3.1416;

    Circulo(double r) {
        radio = r;
    }

    double Calcular_Area() {
        return pi * (radio * radio);
    }

    double Calcular_Perimetro() {
        return 2 * pi * radio;
    }

    void Mostrar_Figura() {
        System.out.println("\nLa Figura es un Circulo" +
                "\nRadio: " + radio +
                "\nArea: " + Calcular_Area() +
                "\nPerimetro: " + Calcular_Perimetro());
    }
}

class Rectangulo extends Figuras {
    double base, altura;

    Rectangulo(double b, double a) {
        base = b;
        altura = a;
    }

    double Calcular_Area() {
        return base * altura;
    }

    double Calcular_Perimetro() {
        return 2 * (base + altura);
    }

    void Mostrar_Figura() {
        System.out.println("\nLa Figura es un Rectangulo" +
                "\nBase: " + base +
                "\nAltura: " + altura +
                "\nArea: " + Calcular_Area() +
                "\nPerimetro: " + Calcular_Perimetro());
    }
}

class Triangulo extends Figuras {
    double base, altura;

    Triangulo(double b, double a) {
        base = b;
        altura = a;
    }

    double Calcular_Area() {
        return (base * altura) / 2;
    }

    double Calcular_Perimetro() {
        return 3 * base; 
    }

    void Mostrar_Figura() {
        System.out.println("\nLa Figura es un Triangulo" +
                "\nBase: " + base +
                "\nAltura: " + altura +
                "\nArea: " + Calcular_Area());
    }
}

public class Main {
    public static void main(String[] args) {
        Circulo circulo1 = new Circulo(3.7);
        Rectangulo rectangulo1 = new Rectangulo(5, 7);
        Triangulo triangulo1 = new Triangulo(8, 7);

        circulo1.Mostrar_Figura();
        rectangulo1.Mostrar_Figura();
        triangulo1.Mostrar_Figura();
    }
}
