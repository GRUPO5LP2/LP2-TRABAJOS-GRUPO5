import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Declaración del contenedor deque para almacenar la cadena de caracteres
        Deque<Character> caracteres = new ArrayDeque<>();

        // Crear un objeto Scanner para la entrada del usuario
        Scanner scanner = new Scanner(System.in);

        // Pedir al usuario que ingrese una cadena de caracteres
        System.out.print("Ingrese una cadena de caracteres: ");
        String input = scanner.nextLine();

        // Almacenar cada carácter en el deque
        for (char c : input.toCharArray()) {
            caracteres.add(c);
        }

        // Mostrar los caracteres originales utilizando un iterador
        System.out.print("Caracteres originales: ");
        for (char c : caracteres) {
            System.out.print(c);
        }
        System.out.println();

        // Reemplazar todas las vocales por '*'
        for (char c : caracteres) {
            char lowerCaseC = Character.toLowerCase(c);
            if (lowerCaseC == 'a' || lowerCaseC == 'e' || lowerCaseC == 'i' ||
                lowerCaseC == 'o' || lowerCaseC == 'u') {
                caracteres.remove(c);
                caracteres.add('*');
            }
        }

        // Mostrar los caracteres después de reemplazar las vocales
        System.out.print("Caracteres después de reemplazar vocales: ");
        for (char c : caracteres) {
            System.out.print(c);
        }
        System.out.println();

        // Mostrar los caracteres en orden inverso utilizando un iterador inverso
        System.out.print("Caracteres en orden inverso: ");
        while (!caracteres.isEmpty()) {
            System.out.print(caracteres.removeLast());
        }
        System.out.println();
        
        // Cerrar el scanner
        scanner.close();
    }
}
