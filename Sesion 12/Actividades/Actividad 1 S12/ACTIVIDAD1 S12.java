import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> numeros = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);
        int num;

        // Ingreso de números
        System.out.println("Ingrese números enteros (ingrese 0 para terminar):");
        while ((num = scanner.nextInt()) != 0) {
            numeros.add(num);
        }

        // a) Calcular la suma de todos los números
        int suma = numeros.stream().mapToInt(Integer::intValue).sum();

        // b) Encontrar el número máximo y mínimo en la lista
        int min = Collections.min(numeros);
        int max = Collections.max(numeros);

        // c) Ordenar los números de forma ascendente
        Collections.sort(numeros);

        // d) Eliminar los números pares del contenedor
        numeros.removeIf(n -> n % 2 == 0);

        // Mostrar resultados
        System.out.println("Suma de todos los números: " + suma);
        System.out.println("Número mínimo: " + min);
        System.out.println("Número máximo: " + max);
        System.out.print("Números ordenados y sin pares: ");
        for (int n : numeros) {
            System.out.print(n + " ");
        }
        System.out.println();
    }
}
