public class Main {
    public static void main(String[] args) {
        int[] numeros = {10, 20, 30, 40, 50};

        System.out.println("El primer elemento es: " + numeros[0]);
        System.out.println("El tercer elemento es: " + numeros[2]);
        numeros[1] = 25;

        System.out.println("Después de modificar, el segundo elemento es: " + numeros[1]);
    }
}
