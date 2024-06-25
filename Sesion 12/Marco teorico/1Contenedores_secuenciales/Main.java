import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<Integer> vec = new ArrayList<>();
        vec.add(1);
        vec.add(2);
        vec.add(3);
        vec.add(4);
        vec.add(5);
        vec.add(6);
        System.out.println(vec.get(0));
    }
}

import java.util.ArrayDeque;
import java.util.Deque;

public class Main {
    public static void main(String[] args) {
        Deque<Integer> deq = new ArrayDeque<>();
        deq.addFirst(0);
        deq.addLast(1);
        deq.addLast(2);
        deq.addLast(3);
        deq.addLast(4);
        deq.addLast(5);
        System.out.println(deq.getFirst()); // Acceso rápido
    }
}

import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> lista1 = new LinkedList<>();
        lista1.add(0);
        lista1.add(1);
        lista1.add(2);
        lista1.add(3);
        lista1.add(4);
        lista1.add(5);
        lista1.addLast(6);
        for (int valor : lista1) {
            System.out.print(valor + " ");
        }
    }
}

import java.util.LinkedList;

public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> flst = new LinkedList<>();
        flst.addFirst(0);
        flst.addLast(1);
        flst.addLast(2);
        flst.addLast(3);
        flst.addLast(4);
        flst.addLast(5);
        for (int val : flst) {
            System.out.print(val + " ");
        }
    }
}
