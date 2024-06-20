import java.util.Scanner;

class DivisionByZeroException extends Exception {
    public DivisionByZeroException(String message) {
        super(message);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numerador, denominador, resultado;

        System.out.print("Ingrese el numerador: ");
        numerador = scanner.nextInt();

        System.out.print("Ingrese el denominador: ");
        denominador = scanner.nextInt();

        try {
            if (denominador == 0) {
                throw new DivisionByZeroException("Error: División por cero.");
            }

            resultado = numerador / denominador;
            System.out.println("El resultado es: " + resultado);

        } catch (DivisionByZeroException e) {
            System.err.println("Excepción capturada: " + e.getMessage());

        } catch (ArithmeticException e) {
            System.err.println("Excepción capturada: " + e.getMessage());
        }
    }
}
