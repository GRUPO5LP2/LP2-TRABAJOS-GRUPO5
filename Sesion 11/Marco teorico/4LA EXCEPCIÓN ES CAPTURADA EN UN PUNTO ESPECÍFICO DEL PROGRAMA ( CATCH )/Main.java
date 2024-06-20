import java.util.Scanner;

class OutOfRangeException extends Exception {
    public OutOfRangeException(String message) {
        super(message);
    }
}

public class Main {
    public static void verificar(int value) throws OutOfRangeException {
        if (value > 100) {
            throw new OutOfRangeException("Error: El valor es mayor a 100.");
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
        } catch (OutOfRangeException e) {
            System.err.println("Excepción capturada: " + e.getMessage());
        }
    }
}
