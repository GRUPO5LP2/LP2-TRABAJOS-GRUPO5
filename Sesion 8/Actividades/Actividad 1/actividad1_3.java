import java.util.Scanner;

abstract class Figura {
    // Método abstracto para calcular el área
    abstract float calcularArea();
}

class Circulo extends Figura {
    private float radio;

    Circulo(float r) {
        radio = r;
    }

    float calcularArea() {
        return (float) (Math.PI * radio * radio);
    }
}

class Rectangulo extends Figura {
    private float base, altura;

    Rectangulo(float b, float h) {
        base = b;
        altura = h;
    }

    float calcularArea() {
        return base * altura;
    }
}

class Triangulo extends Figura {
    private float base, altura;

    Triangulo(float b, float h) {
        base = b;
        altura = h;
    }

    float calcularArea() {
        return (base * altura) / 2;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Elija una figura geometrica:");
        System.out.println("1. Circulo");
        System.out.println("2. Rectangulo");
        System.out.println("3. Triangulo");

        int opcion = scanner.nextInt();

        Figura figura = null;

        switch (opcion) {
            case 1:
                System.out.print("Ingrese el radio del circulo: ");
                float radio = scanner.nextFloat();
                figura = new Circulo(radio);
                break;
            case 2:
                System.out.print("Ingrese la base del rectangulo: ");
                float base = scanner.nextFloat();
                System.out.print("Ingrese la altura del rectangulo: ");
                float altura = scanner.nextFloat();
                figura = new Rectangulo(base, altura);
                break;
            case 3:
                System.out.print("Ingrese la base del triangulo: ");
                base = scanner.nextFloat();
                System.out.print("Ingrese la altura del triangulo: ");
                altura = scanner.nextFloat();
                figura = new Triangulo(base, altura);
                break;
            default:
                System.out.println("Opcion invalida");
                System.exit(1);
        }

        System.out.println("El area de la figura elegida es: " + figura.calcularArea());
    }
}
