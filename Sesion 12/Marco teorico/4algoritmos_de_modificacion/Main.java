import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = new ArrayList<>(List.of(1, 2, 3, 4, 5));
        List<Integer> vec_copy = new ArrayList<>(vec);
        for (int val : vec_copy) {
            System.out.print(val + " ");  // Salida: 1 2 3 4 5
        }
        System.out.println();
    }
}

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = new ArrayList<>(List.of(1, 2, 3, 4, 5));
        List<Integer> vec_copy = new ArrayList<>();
        for (int val : vec) {
            if (val % 2 == 0) {
                vec_copy.add(val);
            }
        }
        for (int val : vec_copy) {
            System.out.print(val + " ");  // Salida: 2 4
        }
        System.out.println();
    }
}

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<String> vec = new ArrayList<>(List.of("hello", "world"));
        List<String> vec_move = new ArrayList<>(vec);
        vec.clear();
        for (String str : vec_move) {
            System.out.print(str + " ");  // Salida: hello world
        }
        System.out.println();
    }
}

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = new ArrayList<>(List.of(1, 2, 3, 4, 5));
        for (int i = 0; i < vec.size(); i++) {
            if (vec.get(i) == 3) {
                vec.set(i, 10);
            }
        }
        for (int val : vec) {
            System.out.print(val + " ");  // Salida: 1 2 10 4 5
        }
        System.out.println();
    }
}

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = new ArrayList<>(List.of(1, 2, 3, 4, 5));
        for (int i = 0; i < vec.size(); i++) {
            if (vec.get(i) % 2 != 0) {
                vec.set(i, 0);
            }
        }
        for (int val : vec) {
            System.out.print(val + " ");  // Salida: 0 2 0 4 0
        }
        System.out.println();
    }
}

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = new ArrayList<>(List.of(1, 2, 3, 4, 5, 3));
        vec.removeIf(n -> n == 3);
        for (int val : vec) {
            System.out.print(val + " ");  // Salida: 1 2 4 5
        }
        System.out.println();
    }
}

import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> vec = new ArrayList<>(List.of(1, 2, 3, 4, 5));
        vec.removeIf(n -> n % 2 != 0);
        for (int val : vec) {
            System.out.print(val + " ");  // Salida: 2 4
        }
        System.out.println();
    }
}
