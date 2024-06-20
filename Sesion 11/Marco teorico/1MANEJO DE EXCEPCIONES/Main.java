import java.util.Scanner;

class DivisionByZeroException extends Exception {
    public DivisionByZeroException(String message) {
        super(message);
    }
}

public class Main {
    public static double dividir(double a, double b) throws DivisionByZeroException {
        if (b == 0) {
            throw new DivisionByZeroException("Error: División por cero.");
        }
        return a / b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double num1, num2, result;

        System.out.print("Ingrese el primer numero: ");
        num1 = scanner.nextDouble();

        System.out.print("Ingrese el segundo numero: ");
        num2 = scanner.nextDouble();

        try {
            result = dividir(num1, num2);
            System.out.println("El resultado es: " + result);
        } catch (DivisionByZeroException e) {
            System.err.println("Excepción capturada: " + e.getMessage());
        }
    }
}
