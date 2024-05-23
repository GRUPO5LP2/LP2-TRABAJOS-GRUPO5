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

class Cuadrado extends Figura {
    private float lado;

    Cuadrado(float l) {
        lado = l;
    }

    float calcularArea() {
        return lado * lado;
    }
}

class Pentagono extends Figura {
    private float lado;

    Pentagono(float l) {
        lado = l;
    }

    float calcularArea() {
        return (float) (0.25 * Math.sqrt(5 * (5 + 2 * Math.sqrt(5))) * lado * lado);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Elija una figura geométrica:");
        System.out.println("1. Circulo");
        System.out.println("2. Rectangulo");
        System.out.println("3. Triangulo");
        System.out.println("4. Cuadrado");
        System.out.println("5. Pentagono");

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
            case 4:
                System.out.print("Ingrese el lado del cuadrado: ");
                float lado = scanner.nextFloat();
                figura = new Cuadrado(lado);
                break;
            case 5:
                System.out.print("Ingrese el lado del pentagono: ");
                lado = scanner.nextFloat();
                figura = new Pentagono(lado);
                break;
            default:
                System.out.println("Opción invalida");
                System.exit(1);
        }

        System.out.println("El area de la figura elegida es: " + figura.calcularArea());
    }
}
