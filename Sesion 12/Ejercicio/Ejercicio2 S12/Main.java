import java.util.Scanner;

public class Main {
    public static int divide(int numerador, int denominador) {
        if (denominador == 0) {
            throw new RuntimeException("Error: No se puede dividir por cero.");
        }
        return numerador / denominador;
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        try {
            System.out.print("Ingrese el numerador: ");
            int a = scanner.nextInt();
            
            System.out.print("Ingrese el denominador: ");
            int b = scanner.nextInt();
            
            int resultado = divide(a, b);
            System.out.println("Resultado: " + resultado);
            
        } catch (RuntimeException e) {
            System.err.println(e.getMessage());
        } finally {
            scanner.close();
        }
    }
}
