import java.util.ArrayList;
import java.util.Collections;

public class Main {

    public static <T extends Comparable<T>> void imprimirArreglo(ArrayList<T> arreglo) {
        for (T elemento : arreglo) {
            System.out.print(elemento + " ");
        }
        System.out.println();
    }

    public static <T extends Comparable<T>> void ordenarArreglo(ArrayList<T> arreglo) {
        int n = arreglo.size();
        for (int i = 0; i < n - 1; ++i) {
            int min_idx = i;
            for (int j = i + 1; j < n; ++j) {
                if (arreglo.get(j).compareTo(arreglo.get(min_idx)) < 0) {
                    min_idx = j;
                }
            }
            if (min_idx != i) {
                Collections.swap(arreglo, i, min_idx);
            }
        }
    }

    public static void main(String[] args) {
        ArrayList<Integer> arreglo_enteros = new ArrayList<>();
        arreglo_enteros.add(5);
        arreglo_enteros.add(2);
        arreglo_enteros.add(7);
        arreglo_enteros.add(3);
        arreglo_enteros.add(1);
        arreglo_enteros.add(9);

        System.out.println("Arreglo original:");
        imprimirArreglo(arreglo_enteros);

        ordenarArreglo(arreglo_enteros);
        System.out.println("Arreglo ordenado:");
        imprimirArreglo(arreglo_enteros);

        ArrayList<Double> arreglo_dobles = new ArrayList<>();
        arreglo_dobles.add(3.5);
        arreglo_dobles.add(1.2);
        arreglo_dobles.add(8.9);
        arreglo_dobles.add(2.3);
        arreglo_dobles.add(5.6);

        System.out.println("Arreglo original:");
        imprimirArreglo(arreglo_dobles);

        ordenarArreglo(arreglo_dobles);
        System.out.println("Arreglo ordenado:");
        imprimirArreglo(arreglo_dobles);
    }
}
