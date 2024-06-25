import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        HashSet<Integer> mySet = new HashSet<>();
        mySet.add(1);
        mySet.add(2);
        mySet.add(3);
        mySet.add(4);
        mySet.add(5);
        mySet.add(6);
        for (int val : mySet) {
            System.out.print(val + " ");
        }
    }
}

import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) {
        HashMap<Integer, String> myMap = new HashMap<>();
        myMap.put(1, "One");
        myMap.put(2, "Two");
        myMap.put(3, "Three");
        for (Map.Entry<Integer, String> entry : myMap.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }
}

import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        HashSet<Integer> myUnorderedSet = new HashSet<>();
        myUnorderedSet.add(5);
        myUnorderedSet.add(3);
        myUnorderedSet.add(1);
        myUnorderedSet.add(4);
        myUnorderedSet.add(2);
        myUnorderedSet.add(6);
        for (int val : myUnorderedSet) {
            System.out.print(val + " ");
        }
    }
}

import java.util.HashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) {
        HashMap<Integer, String> myUnorderedMap = new HashMap<>();
        myUnorderedMap.put(1, "One");
        myUnorderedMap.put(2, "Two");
        myUnorderedMap.put(3, "Three");
        for (Map.Entry<Integer, String> entry : myUnorderedMap.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }
}
