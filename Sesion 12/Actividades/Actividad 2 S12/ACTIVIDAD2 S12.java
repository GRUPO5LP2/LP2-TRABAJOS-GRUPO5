import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void printList(List<String> words) {
        for (String word : words) {
            System.out.print(word + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> words = new ArrayList<>();

        System.out.println("Ingrese palabras (ingrese 'fin' para terminar):");
        while (true) {
            String word = scanner.nextLine();
            if (word.equalsIgnoreCase("fin")) {
                break;
            }
            words.add(word);
        }

        System.out.println("Lista original:");
        printList(words);

        Collections.sort(words);
        System.out.println("Lista ordenada alfabeticamente:");
        printList(words);

        System.out.println("Ingrese la palabra a contar:");
        String wordToCount = scanner.nextLine();
        int count = Collections.frequency(words, wordToCount);
        System.out.println("La palabra '" + wordToCount + "' aparece " + count + " veces en la lista.");

        List<String> upperCaseWords = new ArrayList<>();
        for (String word : words) {
            upperCaseWords.add(word.toUpperCase());
        }
        words = upperCaseWords;

        System.out.println("Lista en mayúsculas:");
        printList(words);
    }
}
