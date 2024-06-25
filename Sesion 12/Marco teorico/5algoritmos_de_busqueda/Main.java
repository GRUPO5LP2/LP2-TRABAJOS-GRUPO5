import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = Arrays.asList(3, 1, 4, 1, 5, 9);
        int value = 4;
        
        if (vec.contains(value)) {
            System.out.println("Encontrado: " + value); // Salida: Encontrado: 4
        } else {
            System.out.println("No encontrado");
        }
    }
}

import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = Arrays.asList(3, 1, 4, 1, 5, 9);
        
        Optional<Integer> result = vec.stream()
                                      .filter(n -> n % 2 == 0)
                                      .findFirst();
        
        if (result.isPresent()) {
            System.out.println("Encontrado: " + result.get()); // Salida: Encontrado: 4
        } else {
            System.out.println("No encontrado");
        }
    }
}
import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = Arrays.asList(1, 2, 3, 4, 5, 6);
        int value = 4;
        
        boolean found = Collections.binarySearch(vec, value) >= 0;
        
        if (found) {
            System.out.println("Encontrado"); // Salida: Encontrado
        } else {
            System.out.println("No encontrado");
        }
    }
}
import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = Arrays.asList(1, 2, 3, 4, 5, 6);
        int value = 4;
        
        int index = Collections.binarySearch(vec, value);
        if (index >= 0) {
            System.out.println("Encontrado: " + vec.get(index)); // Salida: Encontrado: 4
        } else {
            int insertionPoint = -(index + 1);
            if (insertionPoint < vec.size()) {
                System.out.println("Encontrado: " + vec.get(insertionPoint)); // Salida: Encontrado: 4
            } else {
                System.out.println("No encontrado");
            }
        }
    }
}
import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = Arrays.asList(1, 2, 3, 4, 5, 6);
        int value = 4;
        
        int index = Collections.binarySearch(vec, value + 1);
        if (index >= 0) {
            System.out.println("Encontrado: " + vec.get(index)); // Salida: Encontrado: 5
        } else {
            int insertionPoint = -(index + 1);
            if (insertionPoint < vec.size()) {
                System.out.println("Encontrado: " + vec.get(insertionPoint)); // Salida: Encontrado: 5
            } else {
                System.out.println("No encontrado");
            }
        }
    }
}

import java.util.*;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = Arrays.asList(1, 2, 2, 2, 3, 4, 5);
        int value = 2;
        
        int leftIndex = Collections.binarySearch(vec, value);
        if (leftIndex >= 0) {
            int rightIndex = leftIndex;
            while (rightIndex < vec.size() && vec.get(rightIndex) == value) {
                rightIndex++;
            }
            
            for (int i = leftIndex; i < rightIndex; i++) {
                System.out.print(vec.get(i) + " "); // Salida: 2 2 2
            }
            System.out.println();
        } else {
            System.out.println("No encontrado");
        }
    }
}
