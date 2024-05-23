import java.util.Scanner;

abstract class Forma {
    abstract double calculoPerimetro();
}

class Circulo extends Forma {
    private double radio;

    public Circulo(double radio) {
        this.radio = radio;
    }

    @Override
    double calculoPerimetro() {
        return 2 * Math.PI * radio;
    }
}

class Rectangulo extends Forma {
    private double largo, ancho;

    public Rectangulo(double largo, double ancho) {
        this.largo = largo;
        this.ancho = ancho;
    }

    @Override
    double calculoPerimetro() {
        return 2 * (largo + ancho);
    }
}

class Triangulo extends Forma {
    private double lado1, lado2, lado3;

    public Triangulo(double lado1, double lado2, double lado3) {
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }

    @Override
    double calculoPerimetro() {
        return lado1 + lado2 + lado3;
    }
}

public class actividad2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("Seleccione una forma para calcular su perímetro:");
            System.out.println("1. Círculo");
            System.out.println("2. Rectángulo");
            System.out.println("3. Triángulo");
            System.out.println("4. Salir");

            System.out.print("Elige tu opción: ");
            int opcion = scanner.nextInt();

            if (opcion == 4) {
                break;
            }

            double perimetro;

            switch (opcion) {
                case 1:
                    System.out.print("Ingrese el radio del círculo: ");
                    double radio = scanner.nextDouble();
                    Circulo circulo = new Circulo(radio);
                    perimetro = circulo.calculoPerimetro();
                    System.out.println("El perímetro del círculo es: " + perimetro);
                    break;

                case 2:
                    System.out.print("Ingrese el largo del rectángulo: ");
                    double largo = scanner.nextDouble();
                    System.out.print("Ingrese el ancho del rectángulo: ");
                    double ancho = scanner.nextDouble();
                    Rectangulo rectangulo = new Rectangulo(largo, ancho);
                    perimetro = rectangulo.calculoPerimetro();
                    System.out.println("El perímetro del rectángulo es: " + perimetro);
                    break;

                case 3:
                    System.out.print("Ingrese el primer lado del triángulo: ");
                    double lado1 = scanner.nextDouble();
                    System.out.print("Ingrese el segundo lado del triángulo: ");
                    double lado2 = scanner.nextDouble();
                    System.out.print("Ingrese el tercer lado del triángulo: ");
                    double lado3 = scanner.nextDouble();
                    Triangulo triangulo = new Triangulo(lado1, lado2, lado3);
                    perimetro = triangulo.calculoPerimetro();
                    System.out.println("El perímetro del triángulo es: " + perimetro);
                    break;

                default:
                    System.out.println("Opción no válida. Por favor, elija una opción del 1 al 4.");
                    break;
            }
        }

        scanner.close();
    }
}
