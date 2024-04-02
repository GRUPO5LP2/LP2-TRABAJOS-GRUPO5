import java.util.ArrayList;
import java.util.Scanner;

class Tienda {
    String nombre;
    String direccion;
    String tipo;

    public Tienda(String nombre, String direccion, String tipo) {
        this.nombre = nombre;
        this.direccion = direccion;
        this.tipo = tipo;
    }

    void venderProductos() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("¿Qué producto desea vender? ");
        String producto = scanner.nextLine();
        System.out.print("Cantidad de productos: ");
        int cantidad = scanner.nextInt();
        System.out.println("¡Producto vendido!");
    }

    void agregarProductos() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("¿Qué producto desea agregar? ");
        String producto = scanner.nextLine();
        System.out.print("Cantidad de productos: ");
        int cantidad = scanner.nextInt();
        System.out.println("¡Producto agregado!");
    }
}

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

public class Main{
    static Scanner scanner = new Scanner(System.in);
    static ArrayList<Tienda> tiendas = new ArrayList<>();
    static ArrayList<Estudiante> estudiantes = new ArrayList<>();

    public static void main(String[] args) {
        while (true) {
            int opcion = menuPrincipal();
            if (opcion == 1) {
                System.out.print("Nombres del estudiante: ");
                String nombres = scanner.nextLine();
                System.out.print("Apellidos del estudiante: ");
                String apellidos = scanner.nextLine();
                System.out.print("Colegio del estudiante: ");
                String colegio = scanner.nextLine();
                System.out.print("Edad del estudiante: ");
                int edad = scanner.nextInt();
                scanner.nextLine(); // Consumir la nueva línea
                Estudiante estudiante = new Estudiante(nombres, apellidos, colegio, edad);
                estudiantes.add(estudiante);
            } else if (opcion == 2) {
                System.out.print("Ingrese el nombre del estudiante: ");
                String nombres = scanner.nextLine();
                for (Estudiante estudiante : estudiantes) {
                    if (estudiante.nombres.equals(nombres)) {
                        while (true) {
                            int opcionEstudiante = menuEstudiante();
                            if (opcionEstudiante == 1) {
                                System.out.print("Nombre de la tienda: ");
                                String nombre = scanner.nextLine();
                                System.out.print("Dirección de la tienda: ");
                                String direccion = scanner.nextLine();
                                System.out.print("Tipo de tienda: ");
                                String tipo = scanner.nextLine();
                                Tienda tienda = new Tienda(nombre, direccion, tipo);
                                tiendas.add(tienda);
                            } else if (opcionEstudiante == 2) {
                                System.out.print("Ingrese el nombre de la tienda: ");
                                String nombre = scanner.nextLine();
                                boolean encontrada = false;
                                for (Tienda tienda : tiendas) {
                                    if (tienda.nombre.equals(nombre)) {
                                        tienda.agregarProductos();
                                        encontrada = true;
                                        break;
                                    }
                                }
                                if (!encontrada) {
                                    System.out.println("Tienda no encontrada");
                                }
                            } else if (opcionEstudiante == 3) {
                                System.out.print("Ingrese el nombre de la tienda: ");
                                String nombre = scanner.nextLine();
                                boolean encontrada = false;
                                for (Tienda tienda : tiendas) {
                                    if (tienda.nombre.equals(nombre)) {
                                        tienda.venderProductos();
                                        encontrada = true;
                                        break;
                                    }
                                }
                                if (!encontrada) {
                                    System.out.println("Tienda no encontrada");
                                }
                            } else if (opcionEstudiante == 4) {
                                System.out.println("Saliendo...");
                                break;
                            }
                        }
                    } else {
                        System.out.println("Estudiante no encontrado");
                    }
                }
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
        return Integer.parseInt(scanner.nextLine());
    }

    static int menuEstudiante() {
        System.out.println("Menu");
        System.out.println("1. Crear tienda");
        System.out.println("2. Agregar productos");
        System.out.println("3. Vender productos");
        System.out.println("4. Salir");
        System.out.print("Elija una opción: ");
        return Integer.parseInt(scanner.nextLine());
    }
}
