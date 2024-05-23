import java.util.Scanner;

abstract class Reproductor {
    abstract void reproducir();
    abstract void pausar();
    abstract void detener();
}

class ReproductorMP3 extends Reproductor {
    private String dueno;
    private int bateria;

    public ReproductorMP3(String dueno, int bateria) {
        this.dueno = dueno;
        this.bateria = bateria;
    }

    @Override
    void reproducir() {
        System.out.println("Reproduciendo mix del duko 🥵...");
    }

    @Override
    void pausar() {
        System.out.println("Como lo vas a pausar al duko?! Pausando reproducción...");
    }

    @Override
    void detener() {
        System.out.println("No lo saques al dukooooooo!! Deteniendo reproducción...");
    }
}

public class ejercicio2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Ingrese su nombre: ");
        String nombre = scanner.nextLine();
        System.out.print("Ingrese la batería de su reproductor: ");
        int bateria = scanner.nextInt();
        scanner.nextLine(); // Consumir el salto de línea pendiente

        ReproductorMP3 reproductor1 = new ReproductorMP3(nombre, bateria);

        while (true) {
            System.out.println("Seleccione qué acción desea tener con el Reproductor:");
            System.out.println("1. Reproducir música");
            System.out.println("2. Pausar música");
            System.out.println("3. Detener música");
            System.out.println("4. Salir");
            System.out.print("Elige tu opción: ");
            int opcion = scanner.nextInt();

            switch (opcion) {
                case 1:
                    reproductor1.reproducir();
                    break;
                case 2:
                    reproductor1.pausar();
                    break;
                case 3:
                    reproductor1.detener();
                    break;
                case 4:
                    return;
                default:
                    System.out.println("Opción no válida. Intente de nuevo.");
            }
        }
    }
}
