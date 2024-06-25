import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> lst = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));

        // Iterador para recorrer la lista
        for (Integer it : lst) {
            System.out.print(it + " "); // Salida: 1 2 3 4 5
        }
        System.out.println();

        // Java no tiene exactamente un equivalente a iteradores constantes como en C++, pero se puede usar final para simularlo.
        for (Integer it : lst) {
            System.out.print(it + " "); // Salida: 1 2 3 4 5
        }
        System.out.println();
    }
}

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Map<Integer, String> mapa = new HashMap<>();
        mapa.put(1, "one");
        mapa.put(2, "two");
        mapa.put(3, "three");

        // Iterador para recorrer el mapa
        for (Map.Entry<Integer, String> entry : mapa.entrySet()) {
            System.out.println(entry.getKey() + " => " + entry.getValue());
        }

        // Java no tiene exactamente un equivalente a iteradores constantes como en C++, pero se puede usar final para simularlo.
        for (Map.Entry<Integer, String> entry : mapa.entrySet()) {
            System.out.println(entry.getKey() + " => " + entry.getValue());
        }
    }
}

import java.util.*;

public class Main {
    public static void main(String[] args) {
        Set<Integer> conjunto = new HashSet<>(Arrays.asList(1, 2, 3, 4, 5));

        // Iterador para recorrer el conjunto
        for (Integer it : conjunto) {
            System.out.print(it + " "); // Salida: 1 2 3 4 5
        }
        System.out.println();

        // Java no tiene exactamente un equivalente a iteradores constantes como en C++, pero se puede usar final para simularlo.
        for (Integer it : conjunto) {
            System.out.print(it + " "); // Salida: 1 2 3 4 5
        }
        System.out.println();
    }
}
