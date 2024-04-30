import java.util.Scanner;

class Persona {
    private String nombre;
    private int edad;

    public Persona(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
        System.out.println("Se creó a la persona: " + this.nombre + " con: " + this.edad + " años");
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Persona Borrada: " + this.nombre);
        super.finalize();
    }

    public String getNombre() {
        return this.nombre;
    }

    public int getEdad() {
        return this.edad;
    }
}

class Direccion {
    private String calle;
    private int numero;

    public Direccion(String calle, int numero) {
        this.calle = calle;
        this.numero = numero;
        System.out.println("Se Creó la CASA en: " + this.calle + " con el número: " + this.numero);
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Casa demolida: " + this.calle + " " + this.numero);
        super.finalize();
    }

    public String getCalle() {
        return this.calle;
    }

    public int getNumero() {
        return this.numero;
    }
}

class EstudianteUniversitario {
    private Persona persona;
    private String universidad;
    private Direccion direccion;
    private String ciudad;

    public EstudianteUniversitario(String nombre, int edad, String universidad, String calle, int numero, String ciudad) {
        this.persona = new Persona(nombre, edad);
        this.universidad = universidad;
        this.direccion = new Direccion(calle, numero);
        this.ciudad = ciudad;

        if (this.ciudad.equals("")) {
            System.out.println("Nuevo estudiante universitario nombre: " + this.persona.getNombre() + ", edad:"
                    + this.persona.getEdad() + " años, su uni es: " + this.universidad + " Dirección:"
                    + this.direccion.getCalle() + " " + this.direccion.getNumero());
        } else {
            System.out.println("Nuevo estudiante universitario nombre: " + this.persona.getNombre() + ", edad:"
                    + this.persona.getEdad() + " años, su uni es: " + this.universidad + " Dirección:"
                    + this.direccion.getCalle() + " " + this.direccion.getNumero() + " Ciudad:" + this.ciudad);
        }
    }

    @Override
    protected void finalize() throws Throwable {
        System.out.println("Estudiante universitario: " + this.persona.getNombre() + " Abandono la uni: " + this.universidad);
        super.finalize();
    }

    public String getNombrePersona() {
        return this.persona.getNombre();
    }

    public int getEdadPersona() {
        return this.persona.getEdad();
    }

    public String getUniversidad() {
        return this.universidad;
    }

    public Direccion getDireccion() {
        return this.direccion;
    }

    public String getCiudad() {
        return this.ciudad;
    }

    public void mostrarDatos() {
        if (this.ciudad.equals("")) {
            System.out.println("Nombre: " + this.persona.getNombre());
            System.out.println("Edad: " + this.persona.getEdad());
            System.out.println("Universidad: " + this.universidad);
            System.out.println("Dirección: " + this.direccion.getCalle() + " " + this.direccion.getNumero());
        } else {
            System.out.println("Nombre: " + this.persona.getNombre());
            System.out.println("Edad: " + this.persona.getEdad());
            System.out.println("Universidad: " + this.universidad);
            System.out.println("Dirección: " + this.direccion.getCalle() + " " + this.direccion.getNumero());
            System.out.println("Ciudad: " + this.ciudad);
        }
    }
}

public class Main {
    public static int menuPrincipal() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("1. Crear estudiante universitario");
        System.out.println("2. Crear estudiante universitario foraneo");
        System.out.println("3. Salir");
        System.out.print("Ingrese una opción: ");
        int opcion = scanner.nextInt();
        return opcion;
    }

    public static int menuUniversitarioLocal() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("1. Mostrar datos del universitario local");
        System.out.println("2. Salir y destruir universitario local");
        System.out.print("Ingrese una opción: ");
        int opcion = scanner.nextInt();
        return opcion;
    }

    public static int menuUniversitarioForaneo() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("1. Mostrar datos del universitario foraneo");
        System.out.println("2. Salir y destruir objeto universitario local");
        System.out.print("Ingrese una opción: ");
        int opcion = scanner.nextInt();
        return opcion;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String nombre, universidad, calle, ciudad;
        int edad, numero;

        while (true) {
            int opcion = menuPrincipal();
            if (opcion == 1) {
                System.out.print("Ingrese el nombre del estudiante: ");
                nombre = scanner.nextLine();
                System.out.print("Ingrese la edad del estudiante: ");
                edad = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Ingrese la universidad del estudiante: ");
                universidad = scanner.nextLine();
                System.out.print("Ingrese la calle de la dirección del estudiante: ");
                calle = scanner.nextLine();
                System.out.print("Ingrese el número de la dirección del estudiante: ");
                numero = scanner.nextInt();
                scanner.nextLine();
                EstudianteUniversitario estudiante = new EstudianteUniversitario(nombre, edad, universidad, calle, numero, "");
                while (true) {
                    opcion = menuUniversitarioLocal();
                    if (opcion == 1) {
                        estudiante.mostrarDatos();
                    } else if (opcion == 2) {
                        estudiante = null;
                        System.gc();
                        break;
                    } else {
                        System.out.println("Opción no válida");
                    }
                }
            } else if (opcion == 2) {
                System.out.print("Ingrese el nombre del estudiante: ");
                nombre = scanner.nextLine();
                System.out.print("Ingrese la edad del estudiante: ");
                edad = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Ingrese la universidad del estudiante: ");
                universidad = scanner.nextLine();
                System.out.print("Ingrese la calle de la dirección del estudiante: ");
                calle = scanner.nextLine();
                System.out.print("Ingrese el número de la dirección del estudiante: ");
                numero = scanner.nextInt();
                scanner.nextLine();
                System.out.print("Ingrese la ciudad del estudiante: ");
                ciudad = scanner.nextLine();
                EstudianteUniversitario estudiante = new EstudianteUniversitario(nombre, edad, universidad, calle, numero, ciudad);
                while (true) {
                    opcion = menuUniversitarioForaneo();
                    if (opcion == 1) {
                        estudiante.mostrarDatos();
                    } else if (opcion == 2) {
                        estudiante = null;
                        System.gc();
                        break;
                    } else {
                        System.out.println("Opción no válida");
                    }
                }
            } else if (opcion == 3) {
                System.out.println("Saliendo del programa");
                break;
            } else {
                System.out.println("Opción no válida");
            }
        }
    }
}
