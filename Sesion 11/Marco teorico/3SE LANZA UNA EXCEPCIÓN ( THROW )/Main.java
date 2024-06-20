import java.util.Scanner;

class NegativeValueException extends Exception {
    public NegativeValueException(String message) {
        super(message);
    }
}

public class Main {
    public static void verificar(int value) throws NegativeValueException {
        if (value < 0) {
            throw new NegativeValueException("Error: Valor negativo no permitido.");
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num;

        System.out.print("Ingrese un número: ");
        num = scanner.nextInt();

        try {
            verificar(num);
            System.out.println("El valor es: " + num);
        } catch (NegativeValueException e) {
            System.err.println("Excepción capturada: " + e.getMessage());
        }
    }
}
