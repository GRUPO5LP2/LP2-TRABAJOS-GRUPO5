import java.util.Scanner;

class Avion {
    String nombre;
    float velocidad;
    float combustible;
    String salud;

    public Avion(String nombre, float velocidad, float combustible, String salud) {
        this.nombre = nombre;
        this.velocidad = velocidad;
        this.combustible = combustible;
        this.salud = salud;
    }

    public void despegar() {
        System.out.println("Despegando...");
    }

    public void aterrizar() {
        System.out.println("Aterrizando...");
    }

    public void volar() {
        System.out.println("Volando...");
    }
}

class Mision {
    String destino;
    String duracion;
    int tripulacion;

    public Mision(String destino, String duracion, int tripulacion) {
        this.destino = destino;
        this.duracion = duracion;
        this.tripulacion = tripulacion;
    }

    public void iniciar() {
        System.out.println("Iniciando mision...");
    }

    public void finalizar() {
        System.out.println("Finalizando mision...");
    }

    public void abortar() {
        System.out.println("Abortando mision...");
    }
}

public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static int menuJuego() {
        System.out.println("1. Iniciar mision");
        System.out.println("2. Finalizar mision");
        System.out.println("3. Abortar mision");
        System.out.println("4. Despegar");
        System.out.println("5. Aterrizar");
        System.out.println("6. Volar");
        System.out.println("7. Verificar combustible");
        System.out.println("8. Verificar tripulacion");
        System.out.println("9. Salir");
        System.out.print("Ingrese una opción: ");
        return scanner.nextInt();
    }

    public static void main(String[] args) {
        int opcion, tripulacion, tiempoVolado = 0;
        float velocidad, combustible;
        String salud, destino, duracion, nombre;
        System.out.println("RECOMENDACIONES:");
        System.out.println("- El combustible debe ser mayor a 20");
        System.out.println("- La tripulacion debe ser mayor a 3");
        System.out.println("- La mision se completara al volar 100 minutos");
        System.out.println("- Si el combustible es menor a 10, fallaste en tu mision");
        System.out.println("- Si el combustible es menor a 20, se recomienda abortar mision");
        System.out.println("- Si la tripulacion es menor a 3, se recomienda abortar mision");
        System.out.println("- Si la mision se aborta, fallaste en tu mision");
        System.out.println();
        System.out.print("Ingrese el nombre del avion: ");
        nombre = scanner.next();
        System.out.print("Ingrese la velocidad del avion: ");
        velocidad = scanner.nextFloat();
        System.out.print("Ingrese el combustible del avion: ");
        combustible = scanner.nextFloat();
        System.out.print("Ingrese la salud del avion: ");
        salud = scanner.next();
        Avion avion = new Avion(nombre, velocidad, combustible, salud);
        System.out.println();
        System.out.print("Ingrese el destino de la mision: ");
        destino = scanner.next();
        System.out.print("Ingrese la duracion de la mision: ");
        duracion = scanner.next();
        System.out.print("Ingrese la tripulacion de la mision: ");
        tripulacion = scanner.nextInt();
        Mision mision = new Mision(destino, duracion, tripulacion);
        System.out.println();
        while (true) {
            opcion = menuJuego();
            if (avion.combustible < 10) {
                System.out.println("El combustible es muy bajo, fallaste en tu mision.");
                return;
            }
            switch (opcion) {
                case 1:
                    avion.despegar();
                    avion.combustible -= 10;
                    break;
                case 2:
                    avion.aterrizar();
                    break;
                case 3:
                    avion.volar();
                    tiempoVolado += 10;
                    avion.combustible -= 5;
                    if (tiempoVolado == 100) {
                        System.out.println("Mision completada!");
                        return;
                    }
                    break;
                case 4:
                    mision.iniciar();
                    break;
                case 5:
                    mision.finalizar();
                    break;
                case 6:
                    mision.abortar();
                    System.out.println("Mision fallida!");
                    return;
                case 7:
                    System.out.println("El combustible es de: " + avion.combustible);
                    if (avion.combustible < 20) {
                        System.out.println("El combustible es menor a 20, se recomienda abortar mision");
                    }
                    break;
                case 8:
                    System.out.println("La tripulacion es de: " + mision.tripulacion);
                    if (mision.tripulacion < 3) {
                        System.out.println("La tripulacion es menor a 3, se recomienda abortar mision");
                    }
                    break;
                case 9:
                    return;
                default:
                    System.out.println("Opcion invalida");
            }
        }
    }
}
