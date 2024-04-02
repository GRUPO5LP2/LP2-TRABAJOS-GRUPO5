import java.util.ArrayList;
import java.util.Scanner;

class Estudiante {
    String nombres;
    String apellidos;
    String colegio;
    int edad;

    public Estudiante(String nombres, String apellidos, String colegio, int edad) {
        this.nombres = nombres;
        this.apellidos = apellidos;
        this.colegio = colegio;
        this.edad = edad;
    }
}

class Perro {
    String nombre;
    String raza;
    int edad;

    public Perro(String nombre, String raza, int edad) {
        this.nombre = nombre;
        this.raza = raza;
        this.edad = edad;
    }
}

public class Main {
    static Scanner scanner = new Scanner(System.in);
    static ArrayList<Estudiante> estudiantes = new ArrayList<>();
    static ArrayList<Perro> perros = new ArrayList<>();

    public static void main(String[] args) {
        while (true) {
            int opcion = menuPrincipal();
            if (opcion == 1) {
                generarEstudiante();
            } else if (opcion == 2) {
                manejarEstudiante();
            } else if (opcion == 3) {
                System.out.println("Saliendo...");
                break;
            }
        }
    }

    static int menuPrincipal() {
        System.out.println("Menu");
        System.out.println("1. Generar estudiante");
        System.out.println("2. Manejar estudiante");
        System.out.println("3. Salir");
        System.out.print("Elija una opción: ");
        return scanner.nextInt();
    }

    static void generarEstudiante() {
        System.out.print("Ingrese nombres: ");
        String nombres = scanner.next();
        System.out.print("Ingrese apellidos: ");
        String apellidos = scanner.next();
        System.out.print("Ingrese colegio: ");
        String colegio = scanner.next();
        System.out.print("Ingrese edad: ");
        int edad = scanner.nextInt();
        estudiantes.add(new Estudiante(nombres, apellidos, colegio, edad));
    }

    static void manejarEstudiante() {
        System.out.print("Ingrese el nombre del estudiante: ");
        String nombres = scanner.next();
        for (Estudiante estudiante : estudiantes) {
            if (estudiante.nombres.equals(nombres)) {
                while (true) {
                    int opcion = menuEstudiante();
                    if (opcion == 1) {
                        crearPerro();
                    } else if (opcion == 2) {
                        compararPerros();
                    } else if (opcion == 3) {
                        System.out.println("Saliendo...");
                        break;
                    }
                }
            } else {
                System.out.println("Estudiante no encontrado");
            }
        }
    }

    static int menuEstudiante() {
        System.out.println("Menu");
        System.out.println("1. Crear objetos");
        System.out.println("2. Comparar objetos");
        System.out.println("3. Salir");
        System.out.print("Elija una opción: ");
        return scanner.nextInt();
    }

    static void crearPerro() {
        System.out.print("Ingrese nombre del perro: ");
        String nombre = scanner.next();
        System.out.print("Ingrese raza del perro: ");
        String raza = scanner.next();
        System.out.print("Ingrese edad del perro: ");
        int edad = scanner.nextInt();
        perros.add(new Perro(nombre, raza, edad));
    }

    static void compararPerros() {
        if (perros.size() >= 2) {
            System.out.print("Ingrese el nombre del primer perro:");
            String nombrePerro1 = scanner.next();
            System.out.print("Ingrese el nombre del segundo perro:");
            String nombrePerro2 = scanner.next();
            for (Perro perro1 : perros) {
                if (perro1.nombre.equals(nombrePerro1)) {
                    for (Perro perro2 : perros) {
                        if (perro2.nombre.equals(nombrePerro2)) {
                            if (perro1.raza.equals(perro2.raza) && perro1.edad == perro2.edad) {
                                System.out.println("Los perros son los mismos");
                            } else {
                                System.out.println("Los perros son diferentes");
                            }
                            return;
                        }
                    }
                }
            }
            System.out.println("No se encontraron los perros");
        } else {
            System.out.println("No hay suficientes perros");
        }
    }
}
