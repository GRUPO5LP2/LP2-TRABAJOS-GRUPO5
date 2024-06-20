import java.util.ArrayList;
import java.util.Collections;

class Recipiente<T extends Comparable<T>> {
    private ArrayList<T> arreglo;

    public Recipiente(ArrayList<T> arr) {
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

public class ejercicio3 {
    public static void main(String[] args) {
        ArrayList<Integer> arreglo_enteros = new ArrayList<>();
        Collections.addAll(arreglo_enteros, 5, 2, 7, 3, 1, 9);
        Recipiente<Integer> recipiente_enteros = new Recipiente<>(arreglo_enteros);

        System.out.println("\nArreglo de enteros original:");
        recipiente_enteros.imprimirArreglo();

        System.out.println("\nArreglo de enteros ordenado:");
        recipiente_enteros.ordenarArreglo();
        recipiente_enteros.imprimirArreglo();

        ArrayList<String> arreglo_dobles = new ArrayList<>();
        Collections.addAll(arreglo_dobles, "Siempre buenos dias", "Ingeniero", "Oscar", "Pongame", "20", "porfavor");
        Recipiente<String> recipiente_dobles = new Recipiente<>(arreglo_dobles);

        System.out.println("\nArreglo de strings original:");
        recipiente_dobles.imprimirArreglo();

        System.out.println("\nArreglo de strings ordenado:");
        recipiente_dobles.ordenarArreglo();
        recipiente_dobles.imprimirArreglo();
    }
}
