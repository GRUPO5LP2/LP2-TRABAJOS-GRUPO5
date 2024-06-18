import java.util.ArrayList;
import java.util.Collections;

class Arreglo<T extends Comparable<T>> {
    private ArrayList<T> arreglo;

    public Arreglo(ArrayList<T> arr) {
        this.arreglo = arr;
    }

    public void imprimirArreglo() {
        for (T elemento : arreglo) {
            System.out.print(elemento + " ");
        }
        System.out.println();
    }

    public void ordenarArreglo() {
        int numero_total = arreglo.size();
        for (int i = 0; i < numero_total - 1; ++i) {
            int indice_menor = i;
            for (int j = i + 1; j < numero_total; ++j) {
                if (arreglo.get(j).compareTo(arreglo.get(indice_menor)) < 0) {
                    indice_menor = j;
                }
            }
            if (indice_menor != i) {
                Collections.swap(arreglo, i, indice_menor);
            }
        }
    }
}

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> arreglo_enteros = new ArrayList<>();
        Collections.addAll(arreglo_enteros, 5, 2, 7, 3, 1, 9);
        Arreglo<Integer> arreglo_obj_enteros = new Arreglo<>(arreglo_enteros);

        System.out.println("\nArreglo original:");
        arreglo_obj_enteros.imprimirArreglo();

        System.out.println("\nArreglo ordenado:");
        arreglo_obj_enteros.ordenarArreglo();
        arreglo_obj_enteros.imprimirArreglo();

        ArrayList<Double> arreglo_dobles = new ArrayList<>();
        Collections.addAll(arreglo_dobles, 20.4, 20.3, 20.7, 20.3, 20.2);
        Arreglo<Double> arreglo_obj_dobles = new Arreglo<>(arreglo_dobles);

        System.out.println("\nArreglo double original:");
        arreglo_obj_dobles.imprimirArreglo();

        System.out.println("\nArreglo double ordenado:");
        arreglo_obj_dobles.ordenarArreglo();
        arreglo_obj_dobles.imprimirArreglo();
    }
}
