import java.util.ArrayList;
import java.util.Scanner;

class Factura {
    private int numero_factura;
    private String fecha_factura;
    private float monto_factura;

    public Factura(int numero_factura, String fecha_factura, float monto_factura) {
        this.numero_factura = numero_factura;
        this.fecha_factura = fecha_factura;
        this.monto_factura = monto_factura;
    }

    public int getNumeroFactura() {
        return numero_factura;
    }

    public void setNumeroFactura(int numero_factura) {
        this.numero_factura = numero_factura;
    }

    public String getFechaFactura() {
        return fecha_factura;
    }

    public void setFechaFactura(String fecha_factura) {
        this.fecha_factura = fecha_factura;
    }

    public float getMontoFactura() {
        return monto_factura;
    }

    public void setMontoFactura(float monto_factura) {
        this.monto_factura = monto_factura;
    }
}

class Estudiante {
    public String nombres;
    public String apellidos;
    public String colegio;
    public int edad;

    public Estudiante(String nombres, String apellidos, String colegio, int edad) {
        this.nombres = nombres;
        this.apellidos = apellidos;
        this.colegio = colegio;
        this.edad = edad;
    }

    public void facturanding() {
        System.out.println("FACTURANDING PA");
    }
}

public class Main {
    static Scanner scanner = new Scanner(System.in);
    static ArrayList<Factura> facturas = new ArrayList<>();
    static ArrayList<Estudiante> estudiantes = new ArrayList<>();

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
        System.out.print("Nombres del estudiante: ");
        String nombres = scanner.next();
        System.out.print("Apellidos del estudiante: ");
        String apellidos = scanner.next();
        System.out.print("Colegio del estudiante: ");
        String colegio = scanner.next();
        System.out.print("Edad del estudiante: ");
        int edad = scanner.nextInt();
        Estudiante estudiante = new Estudiante(nombres, apellidos, colegio, edad);
        estudiantes.add(estudiante);
    }

    static void manejarEstudiante() {
        System.out.print("Ingrese el nombre del estudiante: ");
        String nombres = scanner.next();
        for (Estudiante estudiante : estudiantes) {
            if (estudiante.nombres.equals(nombres)) {
                while (true) {
                    int opcion = menuEstudiante();
                    if (opcion == 1) {
                        crearFactura();
                    } else if (opcion == 2) {
                        obtenerNumeroFactura();
                    } else if (opcion == 3) {
                        modificarNumeroFactura();
                    } else if (opcion == 4) {
                        obtenerFechaFactura();
                    } else if (opcion == 5) {
                        modificarFechaFactura();
                    } else if (opcion == 6) {
                        obtenerMontoFactura();
                    } else if (opcion == 7) {
                        modificarMontoFactura();
                    } else if (opcion == 8) {
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
        System.out.println("1. Crear factura");
        System.out.println("2. Obtener numero de la factura");
        System.out.println("3. Modificar numero de la factura");
        System.out.println("4. Obtener fecha de la factura");
        System.out.println("5. Modificar fecha de la factura");
        System.out.println("6. Obtener monto de la factura");
        System.out.println("7. Modificar monto de la factura");
        System.out.println("8. Salir");
        System.out.print("Elija una opción: ");
        return scanner.nextInt();
    }

    static void crearFactura() {
        System.out.print("Numero de la factura: ");
        int numero_factura = scanner.nextInt();
        System.out.print("Fecha de la factura: ");
        String fecha_factura = scanner.next();
        System.out.print("Monto de la factura: ");
        float monto_factura = scanner.nextFloat();
        Factura factura = new Factura(numero_factura, fecha_factura, monto_factura);
        facturas.add(factura);
    }

    static void obtenerNumeroFactura() {
        System.out.print("Numero de la factura: ");
        int numero_factura = scanner.nextInt();
        boolean encontrada = false;
        for (Factura factura : facturas) {
            if (factura.getNumeroFactura() == numero_factura) {
                System.out.println("Numero de la factura: " + factura.getNumeroFactura());
                encontrada = true;
                break;
            }
        }
        if (!encontrada) {
            System.out.println("No se encontró la factura");
        }
    }

    static void modificarNumeroFactura() {
        System.out.print("Numero de la factura: ");
        int numero_factura = scanner.nextInt();
        for (Factura factura : facturas) {
            if (factura.getNumeroFactura() == numero_factura) {
                System.out.print("Nuevo numero de factura: ");
                int nuevo_numero = scanner.nextInt();
                factura.setNumeroFactura(nuevo_numero);
                break;
            }
        }
    }

    static void obtenerFechaFactura() {
        System.out.print("Numero de la factura: ");
        int numero_factura = scanner.nextInt();
        boolean encontrada = false;
        for (Factura factura : facturas) {
            if (factura.getNumeroFactura() == numero_factura) {
                System.out.println("Fecha de la factura: " + factura.getFechaFactura());
                encontrada = true;
                break;
            }
        }
        if (!encontrada) {
            System.out.println("No se encontró la factura");
        }
    }

    static void modificarFechaFactura() {
        System.out.print("Numero de la factura: ");
        int numero_factura = scanner.nextInt();
        for (Factura factura : facturas) {
            if (factura.getNumeroFactura() == numero_factura) {
                System.out.print("Nueva fecha de factura: ");
                String nueva_fecha = scanner.next();
                factura.setFechaFactura(nueva_fecha);
                break;
            }
        }
    }

    static void obtenerMontoFactura() {
        System.out.print("Numero de la factura: ");
        int numero_factura = scanner.nextInt();
        boolean encontrada = false;
        for (Factura factura : facturas) {
            if (factura.getNumeroFactura() == numero_factura) {
                System.out.println("Monto de la factura: " + factura.getMontoFactura());
                encontrada = true;
                break;
            }
        }
        if (!encontrada) {
            System.out.println("No se encontró la factura");
        }
    }

    static void modificarMontoFactura() {
        System.out.print("Numero de la factura: ");
        int numero_factura = scanner.nextInt();
        for (Factura factura : facturas) {
            if (factura.getNumeroFactura() == numero_factura) {
                System.out.print("Nuevo monto de factura: ");
                float nuevo_monto = scanner.nextFloat();
                factura.setMontoFactura(nuevo_monto);
                break;
            }
        }
    }
}
