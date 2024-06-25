import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] vec = {3, 1, 4, 1, 5, 9};
        Arrays.sort(vec);
        for (int val : vec) {
            System.out.print(val + " ");  // Salida: 1 1 3 4 5 9
        }
        System.out.println();
    }
}

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] vec = {3, 1, 4, 1, 5, 9};
        int elemento = 4;
        if (Arrays.stream(vec).anyMatch(x -> x == elemento)) {
            System.out.println("Encontrado: " + elemento);  // Salida: Encontrado: 4
        } else {
            System.out.println("No encontrado");
        }
    }
}

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] vec = {3, 1, 4, 1, 5, 9};
        Arrays.stream(vec).forEach(Main::print);  // Salida: 3 1 4 1 5 9
        System.out.println();
    }

    public static void print(int val) {
        System.out.print(val + " ");
    }
}

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int[] vec = {3, 1, 4, 1, 5, 9};
        int suma = Arrays.stream(vec).sum();
        System.out.println("Suma: " + suma);  // Salida: Suma: 23
    }
}
